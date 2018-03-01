#ifndef NN_H
#define NN_H

#include <string>
#include <vector>
#include <cmath>
#include <ctime>

using namespace std;


class NN {

	private:
		vector<vector<vector<double> > > network;
		vector<vector<double> > bias;
	
	public:
		NN();
		~NN();

		void initNetwork(); // Include parameters
		void printNetwork();

}



#endif
