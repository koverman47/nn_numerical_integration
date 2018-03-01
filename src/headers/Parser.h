#ifndef Parser_H
#define Parser_H

#include <string>
#include <vector>
#include <typeinfo>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;


class Parser {

	private:
		int next;
		string path;
		vector<vector<double> > data;

	public:
		Parser(string f);
		Parser();
		~Parser();

		void setPath(string f);
		void processData(string f = "");
		vector<double> getNextLine(); 
		vector<vector<double> > getData();
		

}


#endif
