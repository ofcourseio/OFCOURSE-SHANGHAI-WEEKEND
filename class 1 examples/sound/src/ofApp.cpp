#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySound.loadSound("loop1.wav");
    
    mySound.setLoop(true);
    mySound.setPosition(0.1);
    mySound.setPositionMS(15*1000);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofLine(mouseX, 0, mouseX, ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //if 'p' is pressed, play sound
    if (key == 'p') {
        mySound.play();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    float speed;
    speed = ofMap(x, 0, ofGetWidth(), -1.0, 20.0);
    mySound.setSpeed(speed);
    
    
   
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
