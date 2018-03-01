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


void Parser::processData(char type = 'd', string f = "") {
	if(f != "") {
		this->path = f;
	}

	switch(type) {
		case 'c': // Char
			break;
		case 'f': // Float
			break;
		case 'd': // Double
			break;
		case 'i': // Int
			break;
		case 'b': // Bool
			break;
		case 's': // String
			break;
	}
}


auto getNextLine() {
	return this->data[counter++]
}


auto getData() {
	return this->data;
}
