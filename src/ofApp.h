#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void setupGui();
    void draw();
    void drawSub(ofEventArgs & args);
    
    ofImage img;
};
