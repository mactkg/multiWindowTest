#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"

// #define DOESNT_WORK

//========================================================================
int main( ){
    // main window
    ofGLFWWindowSettings settings;
    settings.width = 540;
    settings.height = 400;
    settings.setPosition(ofVec2f(0,0));
    settings.resizable = true;
    shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);
   
    // sub window
    settings.setPosition(ofVec2f(540,0));
    settings.resizable = false;
#ifndef DOESNT_WORK
    settings.shareContextWith = mainWindow;
#endif
    shared_ptr<ofAppBaseWindow> subWindow = ofCreateWindow(settings);
    subWindow->setVerticalSync(false);
    
    // generate app
    shared_ptr<ofApp> mainApp(new ofApp);
    mainApp->setupGui();
    ofAddListener(subWindow->events().draw,mainApp.get(),&ofApp::drawSub);
   
    // kick the app
    ofRunApp(mainWindow, mainApp);
    ofRunMainLoop();
    
}
