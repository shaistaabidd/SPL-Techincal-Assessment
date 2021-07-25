#include "User.h"
#include "Student.h"
#include<iostream>
#include <string>
using namespace std;
Student::Student()      // default Constructor
{
    rollNo=0;
    myStatus="";
    marks=0;
    studentsList="";
    assignmentList="";
    user.setFirstName("");
    user.setLastName("");
    user.setUserName("");
    user.setPassword("");
}
Student::Student(int rNo, string st, string fName, string lstName, string uName, string pwd)    //parameterized Constructor
{
    rollNo=rNo;
    myStatus="";
    for(int i=0;i<4;i=i+1)  //(status can be only 4.. freshman, sophomore, junior and senior)
    {
        if(status[i]==st)
        {
            myStatus=st;
        }
    }
    user.setFirstName(fName);
    user.setLastName(lstName);
    user.setUserName(uName);
    user.setPassword(pwd);
}
void Student::setResources(string res)
{
    resources=res;
}
string Student::getResources()
{
    return resources;
}
void Student::setRollNo(int rNo)
{
    if(rNo>0)
    {
        rollNo=rNo;    
    }
    else
    {
        rollNo=0;
    }
}
void Student:: marksOfStudent(int m)    // set marks of Student
{
    marks=m;
}
int Student::getMarksOfStudent()    //get Marks OfStudent
{
    return marks;
}
void Student::addAssignment(string assName, string submissionDate)  // add Assignment
{
    assignmentList=assignmentList+assName+"  "+submissionDate+ " \n";
}

void Student::setStatus(string st)      //(status can be only 4.. freshman, sophomore, junior and senior)
{
    myStatus="";
    for(int i=0;i<4;i=i+1)
    {
        if(status[i]==st)
        {
            myStatus=st;
        }
    }
}
void Student::viewAssignment()      // view Assignment
{
	cout << "Assignments of Course are : ";
	cout << getAssignments();
}
void Student::setEnrollStudentInCourse(string std)
{
    studentsList=studentsList+std+" ";
}
string Student::getEnrollStudentInCourse()
{
    return studentsList;
}
int Student::getRollNo() 
{
    return rollNo;
}
string Student::getAssignments()
{
    return assignmentList;
}
string Student::getStatus()
{
    return myStatus;
}
void Student::viewMarks()
{
    cout << "RollNo.: ";
	cout << rollNo;
	for (int i = 0; i < 6; i=i+1) //total Courses are 6
	{
		cout << "      ";
		cout << obtMarks[i]<< "\n";
	}
}
void Student::viewResources()
{
	cout << "Resource are : " << getResources();
}
void Student::viewRosterOfCourse()
{
	cout << "Instructor : " << user.getFirstName()+" "+user.getLastName() <<"\n";
	cout << getEnrollStudentInCourse();
}
void Student::Print()       // Print Info
{
    cout<<"RollNo :" <<rollNo;
    if(myStatus=="")
    {
        cout<<"\nStatus:No Status Found!!! Status can be freshman, sophomore, junior and senior";
    }
    else
    {
        cout<<"\nStatus : "<<myStatus;   
    }
    cout<<"\nFirstName : "<<user.getFirstName();
    cout<<"\nLastName : "<<user.getLastName();
    cout<<"\nUserName : "<<user.getUserName();
    cout<<"\nPassword : "<<user.getPassword();
}