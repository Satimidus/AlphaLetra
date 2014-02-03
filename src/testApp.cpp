#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    stipFont.loadFont("verdana.ttf",5,true);
    medFont.loadFont("verdana.ttf",10,true);

    photo.loadImage("mod.jpg");
    photo.setAnchorPercent(.5,.5); //sets anchor at center, 50% in range of 0.0 - 1.0
    photo.setImageType(OF_IMAGE_GRAYSCALE);

    ofSetWindowShape(photo.getWidth(),photo.getHeight());
    ofSetWindowTitle("AlphaLetra");

    ofBackgroundHex(0xD9DEDA);

    blk = ofColor::black;

    unsigned char * pixels = photo.getPixels();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    photo.draw(ofGetWindowWidth()/2,ofGetWindowHeight()/2);
    ofBackground(ofColor::white);

    photo.loadImage("mod.jpg");
    photo.setImageType(OF_IMAGE_GRAYSCALE);
    ofSetColor(blk);
    for(int i = 0; i < photo.width; i+=4)
    {
        int j = 0;
        while(j < photo.height)
        {
            holder = photo.getColor(i,j);
                if(holder.getBrightness() < 40)
                {
                stipFont.drawString("O",i,j);
                j+=2;
                }
                else if(holder.getBrightness() < 80 && holder.getBrightness() >= 40)
                {
                    stipFont.drawString("O",i,j);
                    j+= 3;
                }
                else if (holder.getBrightness() < 120 && holder.getBrightness() >= 80)
                    {
                    medFont.drawString("o",i,j);
                    j += 4;
                }
                else if (holder.getBrightness() < 160 && holder.getBrightness() >= 120)
                {
                    medFont.drawString(".",i,j);
                    j += 5;
                }
                else if (holder.getBrightness() < 220 && holder.getBrightness() >= 160)
                {
                    stipFont.drawString(".",i,j);
                    j += 6;
                }
                else
                {
                    stipFont.drawString(".",i,j);
                    j += 7;
                }
        }
    }
    photo.update();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    cout << key << endl;
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
