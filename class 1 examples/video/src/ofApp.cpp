#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myVideo.loadMovie("3. Claudia Generative(work-in-progress).mp4");
    myVideo.play();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    myVideo.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    myVideo.draw(0,0);
    
    ofSetColor(0,255,0,127);
    myVideo.draw(0,0,mouseX,mouseY);
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
