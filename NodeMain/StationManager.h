#ifndef __79812793_06A1_424A_AD52_96E17BF95F7C__
#define __79812793_06A1_424A_AD52_96E17BF95F7C__
#include<List>
#include<map>
#include "Train.h"
class Train;
class Station;
class TrainBox;
using namespace std;
namespace node {

class StationManager
{
public:
	StationManager();
	~StationManager();

public:

	static StationManager* GetSingleInstance();
	void addStation(const Station&);
	void addTrain(const Train&);

	void getAllStation(std::list<Station>&);
	void getAllTrain(std::list<Train>&);

	void getAllTrain(long seq, std::list<TrainBox>&);//根据列车序列号获取该列车所有空闲的车厢

	std::list<Station> m_AllStation;
	std::list<Train> m_AllTrains; // 所有列车,第二个对应的列车编号
	std::map<long, std::list<TrainBox>> m_SpaceTrainBox;//第一个参数对应列车序号,第二个对应该序列车对应所有的空闲车厢
	static StationManager* instance;
};
//#define gStationManager (StationManager::GetSingleInstance())

}

#endif // !__79812793_06A1_424A_AD52_96E17BF95F7C__



