/*
 * BrainManager.cpp
 *
 *  Created on: 2012/08/28
 *      Author: kenji
 */

#include "BrainManager.h"
#include "brains/naganoBrain.h"

BrainManager::BrainManager() {
	fdr = FallDownResponce();
}

BrainManager::~BrainManager() {

}

Action BrainManager::getAct(World& w){
	//if there are sudden situation (ex falldown)
	if( checkResponce() ){
		//TODO write qbk action
	}
	else{
		updateBrainList(w,BrainList);
	}
	return Action();
}

void BrainManager::updateBrainList(World& w,std::deque<BrainBase>& brainList){
	//TODO write conditional branch for player position
	BrainBase b = TestBrain();
	b.getBrainList(w,brainList);
}

bool BrainManager::checkResponce(){
	return fdr.check();
}
