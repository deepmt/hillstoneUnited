#ifndef KICKTO_H
#define KICKTO_H

#include "brainbase.hpp"
#include "../world.hpp"

class KickTo : public BrainBase{
public:
	KickTo(World& w,double _angle);
	~KickTo(){};

	bool isFinished(World& w);

private:
	double angle;
};

#endif
