#include "headers/Parser.h"


Parser::Parser(string f) {
	this->path = f;
	this->data = nullptr;
	this->counter = 0;
}


Parser::Parser() {
	this->path = nullptr;
	this->data = nullptr;	
	this->counter = 0;
}


Parser::~Parser() {}


void Parser::setPath(string f) {
	this->path = f;
}


// Assume data as doubles
void Parser::processData(string f = "") {
	if(f != "") {
		this->path = f;
	}

	ifstream file(this->path); // open file stream
	while(file.good()) {
		char c[500]; // temporary character storage
		
		vector<double> input; // temporary vector
		file.getline(c, 256); // get line - store in c
		string str(c); // convert character array to string
		istringstream ss(str); // give string to stream
		string token; // token between commas
		while(getline(ss, token, ',')) {
			input.push_back(stod(token)); // cast token as double
		}
		this->data.push_back(input); // add vector to data matrix
		vector<double>().swap(input); // clear vector
	}
	file.close();
}


vector<double> getNextLine() {
	return this->data[counter++]
}


vector<vector<double> > getData() {
	return this->data;
}
