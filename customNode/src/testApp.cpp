#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	
	node.setPosition(0,0,0);
    //node2.setParent(node);
    node2.setPosition(0,150,-200);
    
}

//--------------------------------------------------------------
void testApp::update(){

    //node.roll(mouseX/100.0);
    //node.tilt(mouseY/100.0);
    //node.pan(mouseY/100.0);
    //node.dolly(mouseX /100.0);
    
    node.setPosition(  200 * sin(ofGetElapsedTimef()),
                       200 * sin(ofGetElapsedTimef() * 1.3),
                       200 * sin(ofGetElapsedTimef() * 0.7));
    
    
    
    node2.lookAt(node);
    node.lookAt(node2);

    
    //node.setPosition(mouseX, mouseY, 0);
    
    cam.lookAt(node);
}

//--------------------------------------------------------------
void testApp::draw(){

    

    ofEnableDepthTest();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2,0);
    
    ofDrawAxis(100);
    node.draw();
    //cam.end();
    node2.draw();

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
