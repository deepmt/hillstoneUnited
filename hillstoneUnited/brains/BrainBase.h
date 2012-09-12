/*
 * BrainBase.h
 *
 *  Created on: 2012/08/28
 *      Author: kenji
 */

#ifndef BRAINBASE_H_
#define BRAINBASE_H_

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
	Action getAction();
	void setClear(bool cflag);
	bool isClear();
private:
	std::deque<Action> ActionList;
	bool isClearFlag;
};

#endif /* BRAINBASE_H_ */
