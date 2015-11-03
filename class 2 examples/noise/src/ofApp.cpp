#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    float time = ofGetElapsedTimef();
    x = ofNoise(time*0.5) * ofGetWidth();
    y = ofNoise(time*0.6) * ofGetHeight();
    
    radius = ofMap(sin(time), -1, 1, 5, 25);
    
    red = ofRandomuf() * 255;
    green = ofNoise(time*0.7) * 155;
    blue = ofNoise(time*0.8) * 255;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(red, green, blue);
    ofCircle(x, y, radius);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
