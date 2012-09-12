/*
 * naganoBrain.h
 *
 *  Created on: 2012/08/30
 *      Author: kenji
 */

#ifndef NAGANOBRAIN_H_
#define NAGANOBRAIN_H_

#include "BrainBase.h"

class naganoBrain : public BrainBase{
public:
	naganoBrain();
	virtual ~naganoBrain();
	void getBrainList(World& w,std::deque<BrainBase>& brainList);
};

#endif /* NAGANOBRAIN_H_ */
