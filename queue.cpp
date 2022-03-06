#include "queue.h"

unit** mergeQ(Queue q1, Queue q2) {
	Queue* q = new Queue[1];

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

unit** Queue::copyQ() {
	Queue* q = new Queue[1];

	for (unit* i = first_; i != nullptr; i = i->next)
		q->push(i->value);

	unit** k = new unit * [2];
	k[0] = q->getFirstPtr();
	k[1] = q->getLastPtr();
	delete[] q;
	return k;
}

void Queue::setBothPtr(unit** ptr) {
	first_ = ptr[0];
	last_ = ptr[1];
}

unit* Queue::getFirstPtr() {
	return first_;
}
unit* Queue::getLastPtr() {
	return last_;
}

void Queue::showQ() {
	for (unit* i = first_; i != nullptr; i = i->next) {
		std::cout << i->value << "\t";
	}
	std::cout << std::endl;
}

int Queue::pop() {
	unit* temp;
	int x;
	x = first_->value;
	temp = first_;
	first_ = first_->next;
	delete[] temp;
	return x;
}
void Queue::push(int num) {
	if (isEmpty()) {
		last_ = init(num);
		first_ = last_;
	}
	else {
		last_ = addElem(last_, num);
	}
}
bool Queue::isEmpty() {
	return first_ == nullptr ? true : false;
}

unit* Queue::addElem(unit* elem, int num) {
	unit* temp = new unit[1];
	elem->next = temp;
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

unit* Queue::init(int num) {
	unit* temp = new unit[1];
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

Queue::Queue() {
	first_ = nullptr;
	last_ = nullptr;
}