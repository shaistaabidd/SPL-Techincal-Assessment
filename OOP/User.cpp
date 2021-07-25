#include "User.h"
#include<iostream>
#include <string>
using namespace std;
User::User()        // Default Constructor
{
    firstName="";
    lastName="";
    userName="";
    password="";
    signIn=false;
    signOut =true;
}
User::User(string fName, string lstName,string uName, string pwd)   // Parameterized Constructor
{
    firstName=fName;
    lastName=lstName;
    userName=uName;
    password=pwd;
}
void User::setFirstName(string fName)   // set First Name 
{
    firstName=fName;
}
void User::setLastName(string lstName)      //set Last Name 
{
    lastName=lstName;
}
void User::setUserName(string uName)    //set User Name
{
    userName=uName;
}
void User::setPassword(string pwd)
{
    password=pwd;
}
string User::getFirstName() const
{
    return firstName;
}
string User::getLastName() const
{
    return lastName;
}
string User::getUserName() const
{
    return userName;
}
string User::getPassword() const
{
    return password;
}
bool User::SignIn(string uName,string pwd)
{
    if((userName==uName) && (password==pwd))  // If username and password is matched with data
    {
        signIn=true;            // SignIn is successful
        signOut=false;
    }
    else
    {
        signIn=false;           
        signOut=true;
    }
    return signIn;
}
bool User::SignOut()
{
    if(signOut==false)      // check If user is signed In
    {
        signIn=false;
        signOut=true;       //signOut will be successful
        return true;
    }
    else
    {
        return false;       // otherwise user is already signed Out
    }
    
}