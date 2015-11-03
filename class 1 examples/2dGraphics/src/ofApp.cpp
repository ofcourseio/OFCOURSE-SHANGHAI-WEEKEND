#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(23, 45, 167);
    
    //only draw outlines
    ofNoFill();
    
    //          R   G  B
    ofSetColor(0, 255, 0);
    
    //circle KWAN GAO RADIUS
    ofCircle(mouseX, mouseY, 50);
    ofCircle(mouseX*1.1, mouseY*1.1, 50);
    
    //              R G B
////    ofSetHexColor(0xDDEECC);
//    ofCircle(ofGetWidth()/2, ofGetHeight()/2, 50);
//    
//    //draw full shape
//    ofFill();
//    // 0 = Black  255 = white
//    ofSetColor(0);
//    
//    //circle KWAN GAO RADIUS
//    ofCircle(300, 100, 90);
//    
//    //line  x1   y1   x2   y2
//    ofLine(mouseX, mouseY, 400, 200);
//    
//
//    //     x   y    kwan gao
//    //        r g   b   ALPHA
//    ofSetColor(0,255,0, 127);
//    ofRect(100,100, 200, 50);
//    ofTriangle(500, 500, 550, 550, 450, 500);
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
