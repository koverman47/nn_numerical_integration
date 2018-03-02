#include "headers/utility.h"


int uniformInt(int lower, int upper = nullptr) {
	if(!upper) {
		upper = lower;
		lower = -lower;
	}
	return (rand() % (upper - lower + 1)) - lower;
}


double uniformDouble(double lower, double upper = nullptr) {
	if(!upper) {
		upper = lower;
		lower = -lower;
	}
	return (lower + ((double)rand() / RAND_MAX) * (upper - lower));
}


// Expect standard use of vectors
double maximize(vector<double> vec) {
	int max = 0;
	for(int i = 1; i < vec.size(); i++) {
		if(vec[i] > vec[max]) {
			max = i;
		}
	}
	/* Access return results with the following:
	 * result = maximize(a, b);
	 * std::cout << std::get<0>(result) << std::get<1>(result) << endl;
	 */
	return std::make_tuple(vec[max], vec); // std::distance is an odd way to get index of max
}


