#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 0);
    ofSetCircleResolution(200);
    img.load("hara.png");
}

//--------------------------------------------------------------
void ofApp::setupGui(){
    ofSetBackgroundColor(0, 0, 255);
}

//--------------------------------------------------------------
void ofApp::draw(){
    img.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::drawSub(ofEventArgs & args){
    img.draw(0, 0);
}