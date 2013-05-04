#include "kicktofront.hpp"
#include <math.h>

// pos[2]
// pos[0]: zengo
// pos[1]: sayuu

KickToFront::KickToFront(World& w){
		// angle:count = 90:15
		//std::cout << "KickTo constructed!!" << std::endl;
    finish_flag = false;
    isKicked = false;
    judgement(w);
    updateFinishFlag(w);
}


void KickToFront::judgement(World& w){
		elementList.push_back(new SequenceMovement("LAROUND"));
		std::cout << "mypos" << w.getXY(0) << "," << w.getXY(1) << std::endl;
		std::cout << "ballpos" << w.getBXY(0) << "," << w.getBXY(1) << std::endl;


		if(w.getBXY(0)==0){
				std::cout << "hoge" << std::endl;
				elementList.push_back(new SequenceMovement("DUMMY"));
				elementList.push_back(new SequenceMovement("LAROUND") );
		}

		if( w.getXY(0) < w.getBXY(0) && fabs( w.getXY(1)-w.getBXY(1) ) <2){
				std::cout << "mod angle" << std::endl;
				modanglecount+=1;
				//modify rellation(agent-ball) angle
				double ballangle = w.getBAL(1);
				//count:angle = 6:90
				int count = int(8*fabs(ballangle)/90);
				int dcount = int(w.getBAL(0)*6);
				if(dcount < 2){
					dcount+=2;
				}

				if(ballangle !=0){
						if(ballangle>0 && count>1){
							elementList.push_back(new SequenceMovement("DUMMY"));
							elementList.push_back(new TicktackBase("TLEFT",count));
						}
						else if(count>1){
							elementList.push_back(new SequenceMovement("DUMMY"));
							elementList.push_back(new TicktackBase("TRIGHT",count));
						}
				}
				if(modanglecount > 5){
					std::cout << "kick" << std::endl;
					modanglecount = 0;
					elementList.push_back(new TicktackBase("FORWARD",8));
					isKicked = true;
				}
				if(fabs(ballangle)<5 && w.getBAL(0)<1){
					std::cout << "cho kick" << std::endl;
					modanglecount = 0;
					elementList.push_back(new SequenceMovement("DUMMY"));
					elementList.push_back(new TicktackBase("FORWARD",dcount));
					isKicked = true;
				}
		}
		else{
				//ball no kage ni irutoki
				if(w.getXY(0) > w.getBXY(0) && fabs( w.getXY(1)-w.getBXY(1) ) <0.1){
						double tpos[2];
						tpos[0] = w.getBXY(0)+0.5;
						if(w.getXY(1)>w.getBXY(1)){
								tpos[1] = w.getBXY(1)+0.5;
						}
						else{
								tpos[1] = w.getBXY(1)-0.5;
						}
						std::cout << "hosei" << std::endl;
						elementList.push_back(new RunToSlowly(w,tpos));
				}
				double kpos[2] = {w.getBXY(0)-1,w.getBXY(1)};
				elementList.push_back(new RunToSlowly(w,kpos));
		}
}


void KickToFront::updateFinishFlag(World& w)
{
			finish_flag = false;
}
