#ifndef COURSE_H
#define COURSE_H
#include<string>
#include "User.h"
#include "Student.h"
#include "Instructor.h"
using namespace std;
class Course
{
    private:
    User user;
    string courseName;
    string courseCode;
    string offeringSchool;
    int capacity;
    int totalStudents;
    string studentsList;
    string resources;
    int assignmentCount;
    string assignmentList;
    public:
    
    Course();
    Course(string, string, string, int);
    void setCourseName(string); // set Course Name
    void setCourseCode(string); // set Course Code
    void setOfferingSchool(string);
    void setCapacity(int);
    string getCourseName();
    string getCourseCode() ;    // get Course Code
    string getOfferingSchool() ;
    int getCapacity() ; // get Capacity
    void setEnrollStudentInCourse(string);
    string getEnrollStudentInCourse();
    void setResources(string); 
    string getResources();
    int getTotalStudents();
    void setInstructorName(string,string);
    void addAssignment(string, string);
    string getAssignments();    
    string getInstructorName();
    int getAssignmentCount();   // get Assignment Count
    void Print();
};
#endif