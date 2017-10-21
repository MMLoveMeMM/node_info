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
	virtual Train* clone()const { return NULL; } //ʹ�þ���ʵ�����ݵ�ʱ��Ҫ������ǳ����,�Է���ʹ��
public:
	std::list<Train*> m_TrainList;
	long m_StationSeq;
	long m_StationNumber;

	std::list<Station> m_NearStation;// �������еĳ�վ
	std::list<Station> m_ExtraStation;// �����ų��Ѿ��߹��ĳ�վ

	Station m_Previous; // ��һ��վ
	Station m_Next; // ��һ��վ

	// direction
	Station *m_PreviousStation; // ��һ���߹���վ,����ط�Ҫ��ָ��,���п������һ�������ѯ
	Station *m_NextStation; // ��һ��Ҫ�ߵ�վ

};

#endif //__50A6533B_E5DD_4B94_A48A_696505DA30A3__