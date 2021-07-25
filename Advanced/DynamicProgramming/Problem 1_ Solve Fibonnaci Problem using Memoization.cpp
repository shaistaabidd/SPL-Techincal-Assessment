#include<iostream>
using namespace std;
int Memoization(int arr[],int num)
{
    if(num==0 || num==1)
    {
        return num;
    }
    else
    {
        return(arr[num-2]+arr[num-1]);// add previous two numbers to return next number..
    }
}
int main()
{
    int number=9;
    int arr[number];
    for(int i=0;i<number;i=i+1)// Insert Elements in array by Making Fibonacci Series Using Memoization
    {
        arr[i]=Memoization(arr,i);
    }
    cout<<"Output : ";
    for(int j=0;j<number;j=j+1) // Print  Fibonacci Series
    {
        cout<<arr[j] << " ";
    }
    return 0;
}


/* Memorization:
	Memoization is  an optimization technique that improves the performance
	of recursive algorithms. It stores the results of function calls and return
	the result when the same inputs occur again.
*/