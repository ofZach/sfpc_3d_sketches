#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(255,255,255);
}

//--------------------------------------------------------------
void testApp::update(){

    
   
}

//--------------------------------------------------------------
void testApp::draw(){

    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateY( ofGetElapsedTimef() * 30);
    
    ofSetColor(0,0,0);
    ofNoFill();
    ofBeginShape();
    for (int i = 0; i < pts.size(); i++){
        ofVertex(pts[i].x - ofGetWidth()/2, pts[i].y - ofGetHeight()/2);
    }
    ofEndShape();
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

    pts.push_back(ofPoint(x,y));
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

    
    pts.clear();
    pts.push_back(ofPoint(x,y));
    
    
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
