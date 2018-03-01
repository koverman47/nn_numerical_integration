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
		auto data;

	public:
		Parser(string f);
		Parser();
		~Parser();

		void setPath(string f);
		void processData(char type, string f = "");
		auto getNextLine(); 
		auto getData();
		

}


#endif
