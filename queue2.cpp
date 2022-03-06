#include "queue2.h"

unit** Queue2::copyQ() {
	return Queue::copyQ();
}

void Queue2::showQ() {
	Queue::showQ();
}
void Queue2::push(int num) {
	Queue::push(num);
}

int Queue2::pop() {
	return Queue::pop();
}

bool Queue2::isEmpty() {
	return Queue::isEmpty();
}
void Queue2::setBothPtr(unit** ptr) {
	Queue::setBothPtr(ptr);
}

int Queue2::findMax() {
	int max = getFirstPtr()->value;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		if (i->value > max) {
			max = i->value;
		}
	}
	return max;
}

unit* Queue2::getFirstPtr() {
	return Queue::getFirstPtr();
}

unit* Queue2::getLastPtr() {
	return Queue::getLastPtr();
}
unit** mergeQ(Queue2 q1, Queue2 q2) {
	Queue2* q = new Queue2[1];

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