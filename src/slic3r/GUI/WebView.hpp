#ifndef slic3r_GUI_WebView_hpp_
#define slic3r_GUI_WebView_hpp_

#include <wx/webview.h>

class WebView
{
public:
    static wxWebView *CreateWebView(wxWindow *parent, wxString const &url);
    
    static void LoadUrl(wxWebView * webView, wxString const &url);

    static bool run_script(wxWebView * webView, wxString const & msg);
};

#endif // !slic3r_GUI_WebView_hpp_
