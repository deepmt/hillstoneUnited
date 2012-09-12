/*
 * BrainBase.h
 *
 *  Created on: 2012/08/28
 *      Author: kenji
 */

#ifndef BRAINBASE_H_
#define BRAINBASE_H_

#include <string>
#include <iostream>

#include "../action.h"
#include "../world.cpp"
#include "../util.h"
#include <queue>

class BrainBase {
public:
	BrainBase();
	virtual ~BrainBase();
	virtual void getBrainList(World& w, std::deque<BrainBase>& brainList); //get brainList
	virtual void getActionList(World& w);
	virtual Action getAction(World& w);
	void setClear(bool cflag);
	bool isClear();
	string brainName;
private:
	std::deque<Action> actionList;
	bool isClearFlag;
};

#endif /* BRAINBASE_H_ */
