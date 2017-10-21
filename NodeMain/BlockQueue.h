#ifndef __495808F6_4D09_4AD6_A0A5_EEEBC52370B2__
#define __495808F6_4D09_4AD6_A0A5_EEEBC52370B2__

#include<queue>
#include "pthread.h"
using namespace std;
template <typename T>

class BlockQueue
{
	/*
	* 建立一个队列,用于多线程交换数据
	* 这个地方的读写锁可能需要跨平台,win32和Linux可能有区别
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
		* 将数据添加进队列
		*/
		_queue.push(t);

	}

	T* pop()
	{
		T *t = CN_NULL;
		/*
		* 将数据返回一个并且清除返回的数据
		*/
		t=_queue.pop();
		return t;
	}

	void pop_all(std::queue<T*>& que)
	{
		/*
		* 返回队列中所有的数据并且清除
		*/
		
	}

private:
	pthread_mutex_t _mutex;
};

#endif //__495808F6_4D09_4AD6_A0A5_EEEBC52370B2__