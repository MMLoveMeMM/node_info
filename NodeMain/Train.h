#ifndef __3D748CF5_D1F0_43DA_B411_91F590FF1622__
#define __3D748CF5_D1F0_43DA_B411_91F590FF1622__
#include<iostream>
#include<list>
#include<map>
#include "Station.h"
#include "TrainBox.h"
using namespace std;
class TrainBox;
class Station;

enum ENUM_TRAIN_TYPE
{
	TRAIN_HUMAN_TYPE, // 0 : 乘客列车;
	TRAIN_PRODUCT_TYPE // 1: 获取列车;
};
class Train
{
public:
	Train();
	virtual ~Train();
	virtual void setTrainType(int type) {};
	virtual int getTrainType() { return m_TrainType; };
	virtual Train* clone()const { return NULL; } //使用具体实例数据的时候要至少做浅拷贝,以方便使用
public:
	long m_Trainseq;//序号
	std::list<TrainBox*> m_TrainBoxList; // 该列车厢包括的所有车厢在该列表中

	Station *m_Previous; // 该列车行驶的上一站
	Station *m_Current; // 该列行驶的当前一站
	Station *m_Next; // 该列下一个站点

	std::list<Station*> m_OrbitStationList; // 该列车已经经过的哪些站台列表,顺序即表示了方向的

	int m_TrainType;// 0 : 乘客列车; 1: 获取列车;
};

#endif //__3D748CF5_D1F0_43DA_B411_91F590FF1622__