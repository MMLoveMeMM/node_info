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

	void getAllTrain(long seq, std::list<TrainBox>&);//�����г����кŻ�ȡ���г����п��еĳ���

	std::list<Station> m_AllStation;
	std::list<Train> m_AllTrains; // �����г�,�ڶ�����Ӧ���г����
	std::map<long, std::list<TrainBox>> m_SpaceTrainBox;//��һ��������Ӧ�г����,�ڶ�����Ӧ�����г���Ӧ���еĿ��г���
	static StationManager* instance;
};
//#define gStationManager (StationManager::GetSingleInstance())

}

#endif // !__79812793_06A1_424A_AD52_96E17BF95F7C__



