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
	TRAIN_HUMAN_TYPE, // 0 : �˿��г�;
	TRAIN_PRODUCT_TYPE // 1: ��ȡ�г�;
};
class Train
{
public:
	Train();
	virtual ~Train();
	virtual void setTrainType(int type) {};
	virtual int getTrainType() { return m_TrainType; };
	virtual Train* clone()const { return NULL; } //ʹ�þ���ʵ�����ݵ�ʱ��Ҫ������ǳ����,�Է���ʹ��
public:
	long m_Trainseq;//���
	std::list<TrainBox*> m_TrainBoxList; // ���г�����������г����ڸ��б���

	Station *m_Previous; // ���г���ʻ����һվ
	Station *m_Current; // ������ʻ�ĵ�ǰһվ
	Station *m_Next; // ������һ��վ��

	std::list<Station*> m_OrbitStationList; // ���г��Ѿ���������Щվ̨�б�,˳�򼴱�ʾ�˷����

	int m_TrainType;// 0 : �˿��г�; 1: ��ȡ�г�;
};

#endif //__3D748CF5_D1F0_43DA_B411_91F590FF1622__