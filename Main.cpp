#include<iostream>
#include<vector>
using namespace std;

#include"Header.h"
void fillVector(vector<student>& myStudent) {
	string name;
	int id, object;
	cout << "How many student you have in your class??";
	int numberofstudent;
	cin >> numberofstudent;
	for (int i = 0; i < numberofstudent; i++) {
		cout << i + 1 << " student name: ";
		cin >> name;
		cout << endl << i + 1 << " student id: ";
		cin >> id;
		cout << endl << i + 1 << " student Object: ";
		cin >> object;
		student tempstudent(id, object, name);
		myStudent.push_back(tempstudent);
		cout << endl;
	}
	cout << endl;
}
void printVector(vector<student>& myStudent) {
	int size = myStudent.size();
	for (int i = 0; i < size; i++) {
		cout << "The student name: " << myStudent[i].getname() << endl;
		cout << "The student id: " << myStudent[i].getid() << endl;
		cout << "The student Object: " << myStudent[i].getobject() << endl;
		cout << "student's Marks \n";
		cout << "The Average is: "<< myStudent[i].getmark() << endl;
	}
}

void deletevector(vector<student>& myStudent) {
	myStudent.clear();
}

int main()
{
	vector<student>myStudnet;
	fillVector(myStudnet);
	printVector(myStudnet);
	system("pause");
	return 0;
}