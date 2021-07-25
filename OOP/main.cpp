#include <iostream>
#include <iomanip>
#include "User.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
int main()
{
    //User user("Shaista", "Abid", "shaista99", "shaista123");
    User user;
    user.setFirstName("Shaista"); // Set FirstName
    user.setLastName("Abid"); // Set LastName
    user.setUserName("shaista99"); // Set UserName
    user.setPassword("shaista123"); //Set Password
    cout<<"First Name is : " <<user.getFirstName(); //Print FirstName
    cout<<"\nLast Name is : "<<user.getLastName(); //Print LastName
    cout<<"\nUserName is : "<<user.getUserName(); //Print UserName
    cout<<"\nPassword is : "<<user.getPassword(); //Print Password
    char ch;
    cout<<"\nPress Y If you Want to Sign In : ";    // If you Want to Sign In, Press Y..
    cin>>ch;
    if(ch=='y' || ch=='Y')
    {
        bool flag=user.SignIn("shaista99","shaista123");    // If username and password is matched with data
        if(flag)
        {
            cout<<"\nSign In Successfully!!!";          // Then Sign is successful..
        }
        else
        {
            cout<<"\nIncorrect UserName or Password!!!";    
        }
    }
    
    Course c("OOP","CHY124","PUCIT",3);
    c.setEnrollStudentInCourse("Hamza");
    c.setEnrollStudentInCourse("Maira");
    c.setEnrollStudentInCourse("Iqra");
    cout<<"\n\nPrint Course Information...\n"; 
    c.Print();       // Print Course Information..
    
    char chr;
    cout<<"\nPress N If you Want to Sign Out : ";       // If you Want to SignOut, Press N..
    cin>>chr;
    if(chr=='N' || chr=='n')
    {
        bool temp=user.SignOut();       
        if(temp)
        {
            cout<<"\nSign Out Successfully!!!";
        }
        else
        {
            cout<<"\nUser is Already Signed Out!!!";
        }
    }
    return 0;
}