#include "queue.h"
#ifndef QUEUE3_H
#define QUEUE3_H

class Queue3 : private Queue {
public:
	Queue3() : Queue() {};
	int findMax();
	//new
	unit** copyQ();//+
	void showQ();//+
	void push(int num);//+
	int pop();//+
	bool isEmpty();//+
	void setBothPtr(unit** ptr);//+
	unit* getFirstPtr();
	unit* getLastPtr();
};

unit** mergeQ(Queue3 q1, Queue3 q2);
#endif // !QUEUE3_H