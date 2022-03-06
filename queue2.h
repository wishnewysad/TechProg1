#include "queue.h"
#ifndef QUEUE2_H
#define QUEUE2_H

class Queue2 : protected Queue {
public:
	Queue2() : Queue() {};
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

unit** mergeQ(Queue2 q1, Queue2 q2);
#endif // !QUEUE2_H