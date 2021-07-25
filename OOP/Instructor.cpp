#include "User.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include<iostream>
#include <string>
using namespace std;
Instructor::Instructor()    //default Constructor
{
    designation="";
    qualification="";
    user.setFirstName("");
    user.setLastName("");
    user.setUserName("");
    user.setPassword("");
}
Instructor::Instructor(string desig, string qualif, string fName, string lstName, string uName, string pwd)
{                                                               // Parameterized Constructor
    designation=desig;
    qualification=qualif;
    user.setFirstName(fName);
    user.setLastName(lstName);
    user.setUserName(uName);
    user.setPassword(pwd);
}
void Instructor::setDesignation(string desig)
{
    designation=desig;
}
void Instructor::setQualification(string qualif)
{
    qualification=qualif;
}
string Instructor::getDesignation() // get Designation
{
    return designation;
}
string Instructor::getQualification()
{
    return qualification;
}
void Instructor::addMarks(Student std, int marks, Course c) // add marks of all Students 
{
	int count=0;
	for (int i = 0; i < c.getTotalStudents(); i=i+1)    
	{
		if (student[i].getRollNo()==std.getRollNo())        // check if Roll No of student is matched or not..
		{
		    for (int j = 0; j < 6; j=j+1)  // total courses are 6..
		    {
			    if (course.getCourseCode() == c.getCourseCode()) // check if student is registered in course
			    {
			        count=1;
			        student[i].marksOfStudent(marks);
		            cout << "\nMarks has been Uploaded successfully!!!\n";
			    }
		    }
	        
		    
			
		}
	}
	
	if(count==0)
	{
		cout << "\nNo such Student Exists!!!\n";
	}
}
void Instructor::viewMarks(Course c)        // view marks of all Students
{
	for (int i = 0; i < course.getTotalStudents(); i++)
	{
		cout << "RollNo.: ";
		cout << student[i].getRollNo();
		cout << "      ";
		cout << student[i].getMarksOfStudent() << "\n";
	}
}
void Instructor::addResources(string res)   // add Resources
{
	course.setResources(res);
}
void Instructor::viewResources()    // view Resources
{
	cout << "Resource are : " << course.getResources();
}
void Instructor::viewRosterOfCourse()
{
	cout << "Instructor : " << course.getInstructorName() <<"\n";
	cout << course.getEnrollStudentInCourse();
}
void Instructor::addAssignment(string assName, string submissionDate)   // add Assignment
{
	course.addAssignment(assName, submissionDate);
}
void Instructor::viewAssignment()   // view Assignment
{
	cout << "Assignments of Course are : ";
	cout << course.getAssignments();
}
void Instructor::Print()    // Print info
{
    cout<<"Designation :" <<designation;
    cout<<"\nQualification : "<<qualification;
    cout<<"\nFirstName : "<<user.getFirstName();
    cout<<"\nLastName : "<<user.getLastName();
    cout<<"\nUserName : "<<user.getUserName();
    cout<<"\nPassword : "<<user.getPassword();
}