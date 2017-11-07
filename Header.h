//Header File == Function Declarations

#include<iostream>
#include<string>
#include<vector>
using namespace std;

#ifndef HEADER_H
#define HEADER_H

class student
{
private:
	int id;
	int object;
	string name;
	int *pointer;
public:
	student();
	student(int id, int object,string name); 
	~student();
	string getname();
	int getid();
	int getobject();
	float getmark() ;

};



#endif