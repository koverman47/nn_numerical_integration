#include "headers/MLP.h"
#include "headers/NN.h"


MLP::MLP() {}


MLP::uniformInt(int lower, int upper = nullptr) {
	if(!upper) {
		upper = lower;
		lower = -lower;
	}
	return (rand() % (upper - lower + 1)) - lower;
}


MLP::~MLP() {}
