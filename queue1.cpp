#include "queue1.h"

int Queue1::findMax() {
	int max = getFirstPtr()->value;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		if (i->value > max) {
			max = i->value;
		}
	}
	return max;
}

