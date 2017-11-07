//Function Definitions 
#include"Header.h"

student::student(){
	id = 0; 
	object = 0;
	name = "xxx-xxx";
}

student::student(int id, int object,string name){
	this->id = id;
	this->object = object;
	this->name = name;
	pointer = new int [object];
	for (int j = 0; j < object; j++) {
		cout << "object " << j + 1 << "  ";
		cin >> pointer[j];
		cout << endl;
	}
	cout << endl;
}

student::~student(){

}

string student::getname()  {
	return name;
}

int student::getid()  {
	return id;
}

int student::getobject()  {
	return object;
}

float student::getmark() {
	int sum=0;
	for (int j = 0; j < object; j++) {
		cout << pointer[j] << "  ";
		sum += pointer[j];
	}
	cout << endl;
	return sum / object;
}