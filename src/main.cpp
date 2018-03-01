#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <typeinfo>
// #include <headers/MLP.h>


using namespace std;

int main() {
	string path = "dataset.txt";

	//int data = 3;
	//string data = "something";
	//double data = 1.9;
	//bool data = true;
	//float data = -1.0;
	char data = 'a';


	//switch()
	
	cout << typeid(data).name() << endl;
	

	return 0;
}
