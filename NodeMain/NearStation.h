#ifndef __6F8A0F95_405F_4B83_B389_D77005311421__
#define __6F8A0F95_405F_4B83_B389_D77005311421__
#include <list>
#include "Station.h"
#include "TrainBox.h"
using namespace std;
class Station;
class TrainBox;
class NearStation : public Station
{
public:
	NearStation();
	~NearStation();
public :
	std::list<Station*> m_ConnStation; //������ͨ�Ķ���״̬
	std::list<TrainBox*> m_ExtraTrainBox;//���ų��ĳ���

	Station* m_Station; //��ǰ�����վ��
};

#endif //__6F8A0F95_405F_4B83_B389_D77005311421__
