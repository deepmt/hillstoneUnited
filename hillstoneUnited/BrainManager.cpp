/*
 * BrainManager.cpp
 *
 *  Created on: 2012/08/28
 *      Author: kenji
 */

#include "BrainManager.h"

BrainManager::BrainManager() {
}

BrainManager::~BrainManager() {

}

Action BrainManager::getAct(World& w){
	if(brainList.size() <= 0){
		updateBrainList(w,brainList);
	}
	BrainBase nowBrain = brainList.front();
	if(nowBrain.isClear()){
		brainList.pop_front();
		if(brainList.size() <= 0){
			updateBrainList(w,brainList);
		}
		nowBrain = brainList.front();
	}
	std::cout << "nowBrain is " << nowBrain.brainName << std::endl;
	return nowBrain.getAction(w);
}

void BrainManager::updateBrainList(World& w,std::deque<BrainBase>& brainList){
	//TODO write conditional branch for player position
	TestBrain b = TestBrain();
	b.getBrainList(w,brainList);
}
