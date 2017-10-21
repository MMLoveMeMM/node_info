#ifndef __4712DD22_4953_4C05_A356_8DBC4E1F45B7__
#define __4712DD22_4953_4C05_A356_8DBC4E1F45B7__
#include "Train.h"
class Train;
class TrainBox
{
public:
	TrainBox();
	TrainBox(long seq);
	virtual ~TrainBox();
	virtual Train* clone()const { return NULL; } //使用具体实例数据的时候要至少做浅拷贝,以方便使用
public:
	bool m_Underusing;// 该车厢是否空闲
	long m_BoxSeq; // 该车厢对应的车厢
};

#endif //__4712DD22_4953_4C05_A356_8DBC4E1F45B7__