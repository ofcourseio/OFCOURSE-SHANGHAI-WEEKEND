#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 0, 200);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    for (int i = 0; i < 20; i++) {
//        float x = i * 50;
//        float wave = sin(float(i)/20*2*PI + ofGetElapsedTimef()) * 200;
//        float y = ofGetHeight()/2 + wave;
//        float radius = i * 2 + 1;
//        ofSetColor(i * 20);
//        ofCircle(x, y, radius);
//    }
    
//    for (int i = 0; i < 20; i++) {
//        float x = i * 50;
//        float wave = ofSignedNoise(float(i)/20 + ofGetElapsedTimef()) * 300;
//        float y = ofGetHeight()/2 + wave;
//        float radius = i * 2 + 1;
//        ofSetColor(i * 20);
//        ofCircle(x, y, radius);
//    }
    
    for (int i = 0; i < 20; i++) {
        float x = ofNoise(float(i)/2 + ofGetElapsedTimef() + mouseX) * ofGetWidth();
        
        float y = ofNoise(float(i)/2 + ofGetElapsedTimef()) * ofGetHeight();
        
        float radius = i * 2 + 1;
        ofSetColor(i * 20);
        ofCircle(x, y, radius);
    }
    
//    ofCircle(0, ofGetHeight()/2, 25);
//    ofCircle(100, ofGetHeight()/2, 25);
//    ofCircle(200, ofGetHeight()/2, 25);
//    ofCircle(300, ofGetHeight()/2, 25);
//    ofCircle(400, ofGetHeight()/2, 25);
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
