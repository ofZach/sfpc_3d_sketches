#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    
    grabber.initGrabber(640,480);
    
	
}

//--------------------------------------------------------------
void testApp::update(){

    grabber.update();
    
}

//--------------------------------------------------------------
void testApp::draw(){

    
    grabber.draw(0,0);
    
    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_TRIANGLES);
    
    mesh.addVertex(ofPoint(500,500));
    mesh.addTexCoord(ofPoint(320,0)); //ofPoint(mouseX, mouseY));
    //mesh.addColor(ofColor::red);
    
    mesh.addVertex(ofPoint(450,550));
    mesh.addTexCoord(ofPoint(0,480));
    //mesh.addColor(ofColor::cyan);
    
    mesh.addVertex(ofPoint(550,550));
    mesh.addTexCoord(ofPoint(640,480));
    //mesh.addColor(ofColor::magenta);
    
    grabber.getTextureReference().bind();
    mesh.draw();
    grabber.getTextureReference().unbind();
    
    
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
