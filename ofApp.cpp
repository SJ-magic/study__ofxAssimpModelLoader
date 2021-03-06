/************************************************************
************************************************************/
#include "ofApp.h"


/************************************************************
************************************************************/

/******************************
******************************/
ofApp::ofApp()
: Cg(CG::getInstance())
{
}

/******************************
******************************/
void ofApp::exit()
{
	// std::exit(1);
}

//--------------------------------------------------------------
void ofApp::setup(){
	/********************
	********************/
	ofSetWindowTitle( "3d loader" );
	ofSetWindowShape( WIDTH, HEIGHT );
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofSetEscapeQuitsApp(false);
	
	/********************
	********************/
	img_back.load("stage.jpg");
	
	/********************
	********************/
	Cg->setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	Cg->update();
}

/******************************
座標:max->openframeworks
	実験的に、以下の通りとなった。
		no cam
			ofScale(-1, 1, 1);
			
		cam
			ofScale(-1, -1, 1);
******************************/
void ofApp::draw(){
	/********************
	********************/
	ofBackground(0);
	ofSetColor(255, 255, 255, 255);
	
	/********************
	********************/
	img_back.draw(0, 0, ofGetWidth(), ofGetHeight());
	
	Cg->draw(255);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	Cg->keyPressed(key);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
