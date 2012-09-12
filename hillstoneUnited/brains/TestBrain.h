
#ifndef TESTBRAIN_H_
#define TESTBRAIN_H_

#include "BrainBase.h"

class TestBrain : public BrainBase{
public:
	TestBrain();
	virtual ~TestBrain();
	void getBrainList(World& w,std::deque<BrainBase>& brainList);
	void getActionList(World& w);
};

#endif /* TESTBRAIN_H_ */
