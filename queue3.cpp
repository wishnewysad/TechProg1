#include "queue3.h"

unit** Queue3::copyQ() {
	return Queue::copyQ();
}

void Queue3::showQ() {
	Queue::showQ();
}
void Queue3::push(int num) {
	Queue::push(num);
}

int Queue3::pop() {
	return Queue::pop();
}

bool Queue3::isEmpty() {
	return Queue::isEmpty();
}
void Queue3::setBothPtr(unit** ptr) {
	Queue::setBothPtr(ptr);
}

int Queue3::findMax() {
	int max = getFirstPtr()->value;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		if (i->value > max) {
			max = i->value;
		}
	}
	return max;
}

unit* Queue3::getFirstPtr() {
	return Queue::getFirstPtr();
}

unit* Queue3::getLastPtr() {
	return Queue::getLastPtr();
}

unit** mergeQ(Queue3 q1, Queue3 q2) {
	Queue3* q = new Queue3[1];

	for (unit* i = q1.getFirstPtr(); i != nullptr; i = i->next) {
		q->push(i->value);
	}
	for (unit* i = q2.getFirstPtr(); i != nullptr; i = i->next) {
		q->push(i->value);
	}
	unit** k = new unit * [2];
	k[0] = q->getFirstPtr();
	k[1] = q->getLastPtr();
	delete[] q;
	return k;
}