
#include "TestBrain.h"

TestBrain::TestBrain() {
	// TODO Auto-generated constructor stub

}

TestBrain::~TestBrain() {
	// TODO Auto-generated destructor stub
}

void TestBrain::getActionList(World& w){

}

void TestBrain::getBrainList(World& w, std::deque<BrainBase>& brainList){
	brainList.push_front(*this);
}
