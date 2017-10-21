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
	std::list<Station*> m_ConnStation; //可以连通的对象状态
	std::list<TrainBox*> m_ExtraTrainBox;//被排除的车厢

	Station* m_Station; //当前这个车站的
};

#endif //__6F8A0F95_405F_4B83_B389_D77005311421__
