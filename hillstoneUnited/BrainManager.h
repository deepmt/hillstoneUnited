

#ifndef BRAINMANAGER_H_
#define BRAINMANAGER_H_

#include <iostream>
#include <queue>
#include "brains/BrainBase.h"
#include "brains/TestBrain.h"
#include "world.h"
#include "action.h"

class BrainManager {
public:
	BrainManager();
	virtual ~BrainManager();
	Action getAct(World& w);
	void updateBrainList(World& w,std::deque<BrainBase>& BrainList);
private:
	std::deque<BrainBase> brainList;
};

#endif /* BRAINMANAGER_H_ */
