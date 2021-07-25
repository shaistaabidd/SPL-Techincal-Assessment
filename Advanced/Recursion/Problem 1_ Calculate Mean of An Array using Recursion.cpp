#include<iostream>
using namespace std;
float calMean(int arr[], int size=1)
{
    if(size==1) // if array size is 1, return first value.. or size-1 value..
    {
        return arr[0];
    }
    else
    {
        return ((calMean(arr, size-1)*(size-1) +                //Calculate Mean
                                    arr[size-1]) / size);
    }
}
int main()
{
    int arr[] = {10, 12, 14, 16, 18, 19};
    int size = sizeof(arr) / sizeof(arr[0]);// Calculate size of Array
    if(size<1) // check if array is empty or not
    {
        cout<<"Array should contain atleast ONE Element!!!!";
    }
    else
    {
        float mean=calMean(arr, size);
        cout<<"Mean is : "<<mean;  // print mean
    }
}