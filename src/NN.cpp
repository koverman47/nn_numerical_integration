#include "headers/NN.h"


NN::NN() {

}


void NN::initNetwork() {}


void NN::printNetwork() {
	for(int layer = 0; layer < this->network.size(); layer++) {
		cout << "Layer " << layer << endl;
		for(int node = 0; node < this->network[layer].size(); node++) {
			cout << "\tNode " << node << endl;
			for(int w = 0; w < this->network[layer][node].size(); w++) {
				cout << "\t\tWeight: " << this->network[layer][node][w] << endl;
			}
		}
	}
	cout << "\n\n";
	for(int layer = 0; layer < this->bias.size(); layer++) {
		cout << "Bias Layer " << layer << endl;
		for(int w = 0; w < this->bias[layer].size(); w++) {
			cout << "\tBias Weight: " << this->bias[layer][w] << endl;
		}
	}
}


NN::~NN() {}
