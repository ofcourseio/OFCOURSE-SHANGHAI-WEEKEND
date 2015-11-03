#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    
    x = 0;
    y = 0;
    
    xSpeed = 5;
    ySpeed = 5;
    
    width = 0;
    height = 0;
    
    color = 0;
    
    alpha = 255;
}

//--------------------------------------------------------------
void ofApp::update(){
    x = x + xSpeed;
    xSpeed = xSpeed * 0.99;
    y = y + ySpeed;
    ySpeed = ySpeed * 0.93;
    
    width = width + 5;
    height = height + 2;
    
    color = color + 1;
    
    alpha = alpha * 0.99;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    ofSetColor(color, alpha);
    ofRect(x, y, width, height);
//    ofCircle(x,y, 5);
    
//    ofCircle(x, y, 15);
//    ofRect(x,y, 10, 20);
    
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
