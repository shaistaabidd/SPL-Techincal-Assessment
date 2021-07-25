#ifndef USER_H
#define USER_H
#include<string>
using namespace std;
class User
{
    private:
    string firstName;
    string lastName;
    string userName;
    string password;
    
    bool signIn,signOut;
    
    public:
    
    User();
    User(string, string,string, string);
    void setFirstName(string);  // set FirstName
    void setLastName(string);   // set Last Name
    void setUserName(string);
    void setPassword(string);
    string getFirstName() const;
    string getLastName() const;
    string getUserName() const;
    string getPassword() const;
    bool SignIn(string,string); //  Sign In
    bool SignOut();     // Sign Out
};
#endif