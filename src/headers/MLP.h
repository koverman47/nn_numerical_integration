#ifndef MLP_H
#define MLP_H

#include <cmath>
#include <string>
#include <vector>
#include <typeinfo>
#include <ctime>
#include <cstdlib>
#include "ANN.h"


class MLP {

	private:
		NN nn;
		int epochs;
		
		int uniformInt(int lower, int upper = nullptr); // Random Uniform Generator

	public:
		MLP();
		~MLP();


}






#endif
