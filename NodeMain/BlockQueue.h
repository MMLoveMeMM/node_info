#ifndef __495808F6_4D09_4AD6_A0A5_EEEBC52370B2__
#define __495808F6_4D09_4AD6_A0A5_EEEBC52370B2__

#include<queue>
#include "pthread.h"
using namespace std;
template <typename T>

class BlockQueue
{
	/*
	* ����һ������,���ڶ��߳̽�������
	* ����ط��Ķ�д��������Ҫ��ƽ̨,win32��Linux����������
	*/
public:

	BlockQueue() {
		pthread_mutex_init(&_mutex, NULL);
	};
	~BlockQueue() {
		pthread_mutex_destroy(&_mutex);
	};

	std::queue<T*> _queue;

	void push(T *t) 
	{
		/*
		* ��������ӽ�����
		*/
		_queue.push(t);

	}

	T* pop()
	{
		T *t = CN_NULL;
		/*
		* �����ݷ���һ������������ص�����
		*/
		t=_queue.pop();
		return t;
	}

	void pop_all(std::queue<T*>& que)
	{
		/*
		* ���ض��������е����ݲ������
		*/
		
	}

private:
	pthread_mutex_t _mutex;
};

#endif //__495808F6_4D09_4AD6_A0A5_EEEBC52370B2__