#ifndef __CE0516EC_0ED4_4D33_87BB_3C1C519A6ECC__
#define __CE0516EC_0ED4_4D33_87BB_3C1C519A6ECC__
#include "Train.h"
class ProductTrain : public Train
{
public:
	ProductTrain();
	ProductTrain(int type) {};
	~ProductTrain();
public:
	void setTrainType(int type) {};
	int getTrainType() { return m_TrainType; };
};

#endif //__CE0516EC_0ED4_4D33_87BB_3C1C519A6ECC__