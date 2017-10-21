#ifndef __9A6E9F2C_DF42_4842_A0F3_AB5EBFF9C676__
#define __9A6E9F2C_DF42_4842_A0F3_AB5EBFF9C676__
#include "Train.h"
class HumanTrain : public Train
{
public:
	HumanTrain();
	HumanTrain(int type) {};
	~HumanTrain();

public:
	void setTrainType(int type) {};
	int getTrainType() { return m_TrainType; };
};
#endif //__9A6E9F2C_DF42_4842_A0F3_AB5EBFF9C676__
