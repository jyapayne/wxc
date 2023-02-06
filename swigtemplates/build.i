%module build
%include <common.i>
%{
#include <wx/build.h>
%}


%{
const char* wxBuildOptionsSignature() {
    return WX_BUILD_OPTIONS_SIGNATURE;
}

const bool wxCheckBuildOptions(char * libName) {
    return wxAppConsole::CheckBuildOptions(WX_BUILD_OPTIONS_SIGNATURE, libName);                   
}
%}

const char* wxBuildOptionsSignature();
const bool wxCheckBuildOptions(char * libName);
