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
	virtual Train* clone()const { return NULL; } //ʹ�þ���ʵ�����ݵ�ʱ��Ҫ������ǳ����,�Է���ʹ��
public:
	bool m_Underusing;// �ó����Ƿ����
	long m_BoxSeq; // �ó����Ӧ�ĳ���
};

#endif //__4712DD22_4953_4C05_A356_8DBC4E1F45B7__