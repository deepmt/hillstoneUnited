
#include "TestBrain.h"

TestBrain::TestBrain() {
	// TODO Auto-generated constructor stub
	fdr = FallDownResponce();
	brainName = "TestBrain";
}

TestBrain::~TestBrain() {
	// TODO Auto-generated destructor stub
}

void TestBrain::getActionList(World& w){
	Action ga_f = Action(GA_FORWARD,100);
	actionList.push_front(ga_f);
}

void TestBrain::getBrainList(World& w, std::deque<BrainBase>& brainList){
	getActionList(w);
	brainList.push_front(*this);
}
