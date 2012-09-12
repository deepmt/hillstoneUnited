/*
 * BrainBase.cpp
 *
 *  Created on: 2012/08/28
 *      Author: kenji
 */

#include "BrainBase.h"

BrainBase::BrainBase(){
	setClear(false);
}

BrainBase::~BrainBase() {
	// TODO Auto-generated destructor stub
}

void BrainBase::setClear(bool flag){
	isClearFlag = flag;
}

