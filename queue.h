#include <iostream>
#ifndef QUEUE_H
#define QUEUE_H
struct unit {
	int value;
	unit* next;
};

class Queue {
public:
	Queue();
	//~Queue ();
	unit** copyQ();//+
	void showQ();//+
	void push(int num);//+
	int pop();//+
	bool isEmpty();//+
	void setBothPtr(unit** ptr);//+
	unit* getFirstPtr();
	unit* getLastPtr();

protected:
	unit* addElem(unit* elem, int num);
	unit* init(int num);

private:
	unit* first_;
	unit* last_;
};


unit** mergeQ(Queue q1, Queue q2);
#endif