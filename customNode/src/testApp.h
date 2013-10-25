#pragma once

#include "ofMain.h"


class customNode : public ofNode {
	
	
	// this extends a draw function inside of ofnode
	void customDraw(){
        
        ofSetColor(255,255,255);
        ofDrawSphere( ofPoint(0,0,0), 50);
        ofDrawAxis(100);
        
        ofSetColor(255,0,255);
        ofLine( ofPoint(0,0,0), ofPoint(0,0,-200));
        
        
	}
	
};

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
		customNode node;
        customNode node2;
        ofEasyCam cam;
    
		
};
