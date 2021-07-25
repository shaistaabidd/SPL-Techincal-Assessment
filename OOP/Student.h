#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include "User.h"
using namespace std;
class Student:public User
{
    private:
    int marks;
    int obtMarks[6];
    User user;
    int rollNo;
    string status[4]={"freshman", "sophomore", "junior", "senior"};
    string myStatus;
    string resources;
    string studentsList;
    string assignmentList;
    public:
    
    Student();
    Student(int, string,string, string, string, string);
    void setRollNo(int);    // set RollNo
    void setStatus(string);
    void setResources(string);
    string getAssignments();
    void setEnrollStudentInCourse(string );
    string getEnrollStudentInCourse();
    string getResources();
    int getRollNo();
    string getStatus() ;    // get Status
    void viewAssignment();
    void addAssignment(string , string);
    void viewRosterOfCourse();  // view Roster Of Course
    void viewMarks();
    void marksOfStudent(int);
    int getMarksOfStudent();
    void viewResources();
    void Print();
};
#endif