#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.loadImage("happyfish.jpg");
    
    grabberWidth = 320;
    grabberHeight = 240;
    grabber.initGrabber(320, 240);
    
    scale = 5;
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    
    scale = ofMap(mouseX, 0, ofGetWidth(), 5, 20);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPixels grabPixels = grabber.getPixelsRef();
    
    int rows = grabberWidth/scale;
    int cols = grabberHeight/scale;
    
    ofSeedRandom(mouseX);
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            float width = ofGetWidth()/rows;
            float height = ofGetHeight()/cols;
            
            float x = i * width;
            float y = j * height;
            
            ofColor pixelColor = grabPixels.getColor(i*scale, j*scale);
            ofSetColor(pixelColor);
    //        ofRect(x, y, width, height);
            myImage.draw(x, y, width, height);
        }
    }
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
