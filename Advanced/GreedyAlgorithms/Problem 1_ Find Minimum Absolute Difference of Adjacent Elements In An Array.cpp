#include<iostream>
using namespace std;

int findAbsMin(int arr[], int size=5)
{
    int minValue=arr[0]-arr[size-1];
    if(minValue<0)  // if Difference is negative, multiply it by -1 to take absolute of Difference.
    {
         minValue=minValue*-1;
    }
    for(int i=0;i<size;i=i+1) // Check minimum Difference in adjacent elements of Array..
    {
        int secondMinValue=arr[i]-arr[i+1];
        if(secondMinValue<0)
        {
            secondMinValue=secondMinValue*-1;
        }
        if(secondMinValue<minValue) // check if secondMinValue is less than minValue.
        {
            minValue=secondMinValue; // assign secondMinValue to minValue..
        }
    }
    return minValue;
}
int main()
{
    int arr[] = {10, 12, 13, 15, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    if(size<2)
    {
        cout<<"Array Should contain atleast 2 Values!!!";
    }
    else
    {
     cout<<"Minimum Absolute Difference is : "<<findAbsMin(arr);// print Minimum Absolute Difference..
    }
    return 0;
}