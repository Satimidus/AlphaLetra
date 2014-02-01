#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    photo.loadImage("Sixieme.jpg");
    photo.setAnchorPercent(.5,.5); //sets anchor at center, 50% in range of 0.0 - 1.0
    photo.setImageType(OF_IMAGE_GRAYSCALE);


    ofSetWindowShape(photo.getWidth(),photo.getHeight());
    ofSetWindowTitle("AlphaLetra");

    ofBackgroundHex(0xD9DEDA);

    whit = ofColor::black;

    unsigned char * pixels = photo.getPixels();

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    photo.draw(ofGetWindowWidth()/2,ofGetWindowHeight()/2);
  for(int i = 0; i < photo.width; i +=2)
    {
        for(int j = 0; j < photo.height; j+=2)
        {
            photo.setColor(i,j, ofColor(0,0,0));
        }
    }
    photo.update();


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
