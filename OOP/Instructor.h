#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include<string>
#include "User.h"
#include "Student.h"
#include "Course.h"
using namespace std;
class Instructor:public User
{
    private:
    
    User user;
    Course course;
    string designation;
    string qualification;
    Student *student;
    public:
    
    Instructor();
    Instructor(string, string,string, string, string, string);
    void setDesignation(string);
    void setQualification(string);
    string getDesignation();    // get Designation
    string getQualification() ;
    void addMarks(Student, int , Course);
    void viewMarks(Course);
    void addResources(string);
    void viewResources();
    void viewRosterOfCourse();  // view Roster Of Course
    void addAssignment(string, string);
    void viewAssignment();  //view Assignment
    void Print();
};
#endif