#ifndef NN_H
#define NN_H

#include <string>
#include <vector>
#include <cmath>
#include <ctime>


class NN {

	private:
		vector<vector<vector<double> > > network;
	
	public:
		NN();
		~NN();

		void initNetwork(); // Include parameters
		void printNetwork();

}



#endif
