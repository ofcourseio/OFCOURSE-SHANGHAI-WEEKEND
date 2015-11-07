#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.loadImage("painting.jpg");
    myImage.resize(640,480);
    pixelColor.set(0,0,0);
    
    
    imageX = 0;
    imageY = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    myImage.draw(imageX,imageY);
    

    
    ofSetColor(pixelColor);
    float x = myImage.width + 20;
    ofRect(x, 0, 50, 50);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 's') {
        myImage.saveImage("my masterpiece.png");
    
    }
    

    if (key == OF_KEY_LEFT) {
        imageX = imageX - 1;
    }
    
    if (key == OF_KEY_RIGHT) {
        imageX = imageX + 1;
    }
    
    if (key == OF_KEY_UP) {
        imageY = imageY - 1;
    }
    
    if (key == OF_KEY_DOWN) {
        imageY = imageY + 1;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    if (mouseX < myImage.width && mouseY < myImage.height){
        myImage.setColor(x, y, pixelColor);
        myImage.update();
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if (mouseX < myImage.width && mouseY < myImage.height){
        pixelColor = myImage.getColor(mouseX, mouseY);
    }
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
