#include "Student.h"
#include <iostream>
#include<string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id,char pName[20]) {
  studentId=id;
  strcpy(name,pName);
}

// Display StudentId and Name
void Student::display() {
  cout<<"the students id:"<< studentId<<endl;
  cout <<"the students name:"<<name<<endl;
}
