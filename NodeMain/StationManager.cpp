#include "stdafx.h"
#include "StationManager.h"
#include <functional>
#include<mutex>
#include <list>
using namespace node;
StationManager::StationManager()
{
}


StationManager::~StationManager()
{
}

StationManager* StationManager::instance = new StationManager();
StationManager* StationManager::GetSingleInstance()
{
	return StationManager::instance;
}

void StationManager::addStation(const Station& station)
{
	m_AllStation.push_back(station);
}
void StationManager::addTrain(const Train& train)
{
	m_AllTrains.push_back(train);
}

void StationManager::getAllStation(std::list<Station>& list)
{
	std::list<Station>::iterator itor;
	for (itor = m_AllStation.begin(); itor != m_AllStation.end(); itor++) {
		list.push_back(*itor);
	}

	/*
	* 下同
	*/
}
void StationManager::getAllTrain(std::list<Train>& list)
{
}

void StationManager::getAllTrain(long seq, std::list<TrainBox>&)
{

}//根据列车序列号获取该列车所有空闲的车厢