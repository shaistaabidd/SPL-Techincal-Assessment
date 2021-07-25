#include<iostream>
#include<string>
using namespace std;
string RemoveCharacter(string name, char x)     // Function To Remove Character from Entire String
{
    string s1;
    int j=0;
    for(int i=0;i<name.length();i=i+1)
    {
        if(name[i]!=x)                      // If Character in String is not equal to character we want to Remove
        {
            s1[j]=name[i];                  //Store it in array..
            j=j+1;
        }
    }
    s1[j]='\n';
    return s1;                              // Return Array after removing character in entire String..
}
int main()
{
    string name="We Are Your Technology Partners";          // String name
    char x = ' ';
    string newStr=RemoveCharacter(name,x);          // Function Call to Remove Character
    cout<<"Output : ";
    int i=0;
    while(newStr[i]!='\n')                          // Print Resultant String 
    {
        cout<<newStr[i];
        i=i+1;
    }
}


// Use of Trees or hashing to optimize this solution, We should understand the concept of the time
// complexity about tree Data Structure and hashing.. In general, BST has time complexity O(h) for
// insertion, deletion and search..But in worst case (if height of tree is unbalanced / skewed ), time complexity
// is O(n). For AVL trees Due to its balancing property, insertion, deletion and search operations
// take O(logn) in both the average and the worst cases..While Hashing has time compexity O(1) in average case But
// in worst case it has complexity O(n).