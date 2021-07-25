#include <iostream>
#include<string>
using namespace std;
int CalculateMax(int val1, int val2)//Function To Calculate Maximum Value..
{
    if(val1>val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}
int LongestCommonSubsequence( string s1, string s2, int s1Length, int s2Length ) // Function to Calculate
{                                                                               // LongestCommonSubsequence           
	if (s1Length == 0 || s2Length == 0) 
	{
	    return 0;   // if length of first string or second string is zero, it will return zero..
	}
	if (s1[s1Length-1] == s2[s2Length-1]) // 
	{
	    return LongestCommonSubsequence(s1, s2, s1Length-1, s2Length-1) + 1; // count of LongestCommonSubsequence
	}                                                                      // using recursion         
	else
	{
	    return CalculateMax(LongestCommonSubsequence(s1, s2, s1Length, s2Length-1), //Calculate Max 
	    LongestCommonSubsequence(s1, s2, s1Length-1, s2Length));   
	}
}

int main()
{
	string s1 = "ABCDGH"; // First String
	string s2 = "AEDFHR"; // Second String
	int s1Length = s1.length(); 
	int s2Length = s2.length();
	cout<<"string s1 = 'ABCDGH'\n";
	cout<<"string s2 = 'AEDFHR'\n";
	cout<<"Output : "<< LongestCommonSubsequence( s1, s2, s1Length, s2Length ) ;//Print count of LongestCommonSubsequence
	return 0;
}