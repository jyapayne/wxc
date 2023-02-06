#include<wx/wx.h>

typedef wxWindow* (* InitTopWindow)();

wxWindow* privInitTopWindow();

const char* wxBuildOptionsSignature();

class wxFrameExt : public wxFrame
{
private:
    InitTopWindow initTopWindowFunc;
public:
    wxFrameExt(): wxFrame() {};
    void SetTopWindowInitFunc(InitTopWindow init);
    virtual bool OnInit();
};
