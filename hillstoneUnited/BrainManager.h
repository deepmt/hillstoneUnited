

#ifndef BRAINMANAGER_H_
#define BRAINMANAGER_H_

#include <queue>
#include "brains/BrainBase.h"
#include "world.h"
#include "action.h"
#include "responces/FallDownResponce.h"

class BrainManager {
public:
	BrainManager();
	virtual ~BrainManager();
	Action getAct(World& w);
	void updateBrainList(World& w,std::deque<BrainBase>& BrainList);
	bool checkResponce();
private:
	std::deque<BrainBase> BrainList;
	FallDownResponce fdr;
};

#endif /* BRAINMANAGER_H_ */
