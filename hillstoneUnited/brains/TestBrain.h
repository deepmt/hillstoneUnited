
#ifndef TESTBRAIN_H_
#define TESTBRAIN_H_

#include "BrainBase.h"
#include "FallDownResponce.h"

class TestBrain : public BrainBase{
public:
	TestBrain();
	virtual ~TestBrain();
	void getBrainList(World& w,std::deque<BrainBase>& brainList);
	void getActionList(World& w);
	Action getAction();
private:
	FallDownResponce fdr;
};



#endif /* TESTBRAIN_H_ */
