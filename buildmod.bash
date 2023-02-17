#!/opt/homebrew/bin/bash

set -e

MOD_PATH="$1"
MOD_NAME="$(basename -s .i $MOD_PATH)"

SCRIPT_DIR="$(dirname $(readlink -f $0))"
WRAPPER_DIR="${SCRIPT_DIR}/wrappers"
OBJECTS_DIR="${SCRIPT_DIR}/objects"
SHAREDLIBS_DIR="${SCRIPT_DIR}/sharedlibs"
TEMPLATE_DIR="${SCRIPT_DIR}/swigtemplates"
HEADERS_DIR="${SCRIPT_DIR}/wxheaders"

WX_CONFIG="-I$HEADERS_DIR"

mkdir -p $OBJECTS_DIR
mkdir -p $SHAREDLIBS_DIR


swig -c++ -c -cpperraswarn -nocxx -o "${WRAPPER_DIR}/${MOD_NAME}_wrap.cxx" $WX_CONFIG $(wx-config --cxxflags all) $MOD_PATH
clang++ -O2 -c "${WRAPPER_DIR}/${MOD_NAME}_wrap.cxx" -o "${OBJECTS_DIR}/${MOD_NAME}_wrap.o" -I$TEMPLATE_DIR -I. $WX_CONFIG $(wx-config --cxxflags all)
clang++ -O2 -shared -o "${SHAREDLIBS_DIR}/lib${MOD_NAME}.so" "${OBJECTS_DIR}/${MOD_NAME}_wrap.o" $(wx-config --libs all)
