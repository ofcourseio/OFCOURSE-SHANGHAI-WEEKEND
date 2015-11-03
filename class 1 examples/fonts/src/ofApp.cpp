#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //             name of font size
    arial.loadFont("arial.ttf", 24);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //draw "OF COURSE" at the position of the mouse
    ofSetColor(0);
    arial.drawString("OF COURSE", mouseX, mouseY);
    
    //draw "OF" then "COURSE" on a new line.
    ofSetColor(255,0,0);
    arial.drawString("OF /nCOURSE", 100, 100);
 
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
