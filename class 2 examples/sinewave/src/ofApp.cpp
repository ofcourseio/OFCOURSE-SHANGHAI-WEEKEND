#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
    
    float amplitudeX = 10;
    float amplitudeY = 10;
}

//--------------------------------------------------------------
void ofApp::update(){
    float time = ofGetElapsedTimef() * 2 * PI;
    
    float frequencyRadius = 3;
    float wave = sin(time * frequencyRadius);
    radius = ofMap(wave, -1, 1, 10, 25);
    color = ofMap(wave, -1, 1, 0, 255);
    
    float frequencyX = 1;
    amplitudeX = amplitudeX + 1;
    
    x = ofGetWidth()/2 + sin(time * frequencyX) * amplitudeX;
    
    float frequencyY = 1;
    amplitudeY = amplitudeY + 1;
    
    y = ofGetHeight()/2 + cos(time * frequencyY) * amplitudeY;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(color);
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
