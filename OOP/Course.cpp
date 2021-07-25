#include "User.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include<iostream>
#include <string>
using namespace std;
Course::Course()    // default Constructor
{
    courseName="";
    courseCode="";
    offeringSchool="";
    capacity=0;
    totalStudents=0;
    studentsList="";
    resources="";
    assignmentCount=0;
    assignmentList="";
}
Course::Course(string cName, string cCode, string school, int cap)  // Parameterized Constructor
{
    courseName=cName;
    courseCode=cCode;
    offeringSchool=school;
    if(cap>0)
    {
        capacity=cap;
    }
    else
    {
        capacity=0;
    }
}
void Course::setCourseName(string cName)
{
    courseName=cName;
}
void Course::setCourseCode(string cCode)
{
    courseCode=cCode;
}
void Course::setOfferingSchool(string school)
{
    offeringSchool=school;
}
void Course::setCapacity(int cap)       //  set Capacity
{
    if(cap>0)
    {
        capacity=cap;
    }
    else
    {
        capacity=0;
    }   
}
string Course::getCourseName()
{
    return courseName;
}
string Course::getCourseCode()  // get Course Code
{
    return courseCode;
}
string Course::getOfferingSchool()
{
    return offeringSchool;
}
int Course::getCapacity()
{
    return capacity;
}
void Course::Print()        // Print Info
{
    cout<<"\nCourse Name :" <<courseName;
    cout<<"\nCourse Code : "<<courseCode;
    cout<<"\nOffering School : "<<offeringSchool;
    cout<<"\nCapacity : "<<capacity;
    cout<<"\nTotal Students : "<<totalStudents;
    cout<<"\nStudents Enrolled in This Course are : ";
    if(studentsList=="")
    {
        cout<<"No Student Enrolled in this Course!!!";
    }
    else
    {
        cout<<studentsList<<" ";
    }
}
void Course::addAssignment(string assName, string submissionDate)       // Add Assignment in Course
{
    assignmentList=assignmentList+assName+"  "+submissionDate+ " \n";
    assignmentCount=assignmentCount+1;
}
string Course::getAssignments() // get Assignments
{
    return assignmentList;
}
void Course::setEnrollStudentInCourse(string std)   // Enroll Students in Course
{
    if(capacity>totalStudents)
    {
        studentsList=studentsList+std+" ";
        totalStudents=totalStudents+1;
    }
    else
    {
        cout<<"\nCapacity of Students in this Course is FULL!!!!";
    }
    
}
void Course::setInstructorName(string fName,string lstname) // Set Instructor Name
{
    user.setFirstName(fName);
    user.setLastName(lstname);   
}
string Course::getInstructorName()
{
    return user.getFirstName()+" "+user.getLastName(); 
}
void Course::setResources(string res)       // get Resources
{
    resources=res;
}
string Course::getResources()
{
    return resources;
}
string Course::getEnrollStudentInCourse()   // get Enroll Students In Course
{
    return studentsList;
}
int Course::getAssignmentCount()
{
    return assignmentCount;
}
int Course::getTotalStudents()  // get Total Students
{
    return totalStudents;
}