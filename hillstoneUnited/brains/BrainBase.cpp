/*
 * BrainBase.cpp
 *
 *  Created on: 2012/08/28
 *      Author: kenji
 */

#include "BrainBase.h"

BrainBase::BrainBase(){
	setClear(false);
	brainName = "base";
}

BrainBase::~BrainBase() {
	// TODO Auto-generated destructor stub
}

void BrainBase::setClear(bool flag){
	isClearFlag = flag;
}

Action BrainBase::getAction(World& w){
	getActionList(w);
	if(actionList.size() <= 0){
		std::cout << "all action is done!! return DUMMY" << std::endl;
		setClear(true);
		Action tempAction = Action(DUMMY,1);
		return tempAction;
	}


	Action nowAction = actionList.front();
	if(nowAction.count <= 0){
		actionList.pop_front();
	}
	if(actionList.size() <= 0){
		std::cout << "all action is done!! return DUMMY" << std::endl;
		setClear(true);
		Action tempAction = Action(DUMMY,1);
		return tempAction;
	}
	nowAction = actionList.front();
	return nowAction;
}
