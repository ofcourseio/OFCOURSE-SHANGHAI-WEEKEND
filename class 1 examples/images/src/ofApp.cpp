#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.loadImage("painting.jpg");
    myImage2.loadImage("painting21.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // draw the image full size
    
    
    ofNoFill();
    ofSetColor(255);
    myImage.draw(0,0);
    
    ofSetColor(0,0,255,127);
    myImage.draw(mouseX,mouseY);
  
    ofSetColor(0,255,0);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, mouseX);
//    //move the image with mouse
//    myImage.draw(mouseX, mouseY);
//    
//    //change the size with mouse
//    myImage.draw(0,0,mouseX, mouseY);
//    
//    //fullscreen
//    myImage.draw(0,0,ofGetWidth(),ofGetHeight());
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
