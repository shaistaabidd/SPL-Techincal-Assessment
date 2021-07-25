#include<iostream>
#include<string>
using namespace std;
bool shareSubString(string s1, string s2) // Function check shared SubString
{
    int i=0;
    while(i<s1.length())
    {
        int j=0;
        while(j<s2.length())
        {
           if(s1[i]==s2[j])         // check if there is a match between two strings
           {
               return true;         // return true if there is a match..
           }
           j=j+1;   
        }
        i=i+1;
    }
    return false;                   // Otherwise return false..
}
int main()
{
    string s1="abcd", s2="cde"; // String 1 and String 2..
    bool flag=shareSubString(s1,s2); // Function Call..
    cout<<"Shared SubStrings between Two Strings :  "<<flag; // Print Result
    return 0;
}