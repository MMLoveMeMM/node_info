#ifndef __50A6533B_E5DD_4B94_A48A_696505DA30A3__
#define __50A6533B_E5DD_4B94_A48A_696505DA30A3__
#include<iostream>
#include<list>
#include "Train.h"
#include "Node.h"
using namespace std;
class Train;
class Station : public Node
{
public:
	Station();
	virtual ~Station();
	virtual Train* clone()const { return NULL; } //使用具体实例数据的时候要至少做浅拷贝,以方便使用
public:
	std::list<Train*> m_TrainList;
	long m_StationSeq;
	long m_StationNumber;

	std::list<Station> m_NearStation;// 附近所有的车站
	std::list<Station> m_ExtraStation;// 附近排除已经走过的车站

	Station m_Previous; // 上一个站
	Station m_Next; // 下一个站

	// direction
	Station *m_PreviousStation; // 上一个走过的站,这个地方要用指针,很有可能组成一个链表查询
	Station *m_NextStation; // 下一个要走的站

};

#endif //__50A6533B_E5DD_4B94_A48A_696505DA30A3__