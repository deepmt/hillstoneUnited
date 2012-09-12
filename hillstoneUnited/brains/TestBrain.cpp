
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
	if( fdr.check(w) ){
		actionList.push_front( fdr.responce(w) );
	}
	Action ga_f = Action(GA_FORWARD,100);
	actionList.push_back(ga_f);
}

void TestBrain::getBrainList(World& w, std::deque<BrainBase>& brainList){
	getActionList(w);
	brainList.push_back(*this);
}

Action TestBrain::getAction(World& w){
	if(actionList.size() <= 0){
		std::cout << "[error]actionList is empty!! return DUMMY" << std::endl;
		return Action(DUMMY,1);
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
