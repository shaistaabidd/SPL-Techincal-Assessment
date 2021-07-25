#include<iostream>
using namespace std;
int * rotLeft(int arr[],int rotate,int size) // rotate left function 
{
    for(int i=0;i<rotate;i=i+1)      // rotate array upto specified number of rotations..
    {
        int temp=arr[0];
        for(int j=0;j<size;j=j+1)           // move array elemets to left side..
        {
            if(j==size-1)
            {
                arr[j]=temp;
            }
            else
            {
                arr[j]=arr[j+1];
            }
        }
    }
    return arr;
}
void PrintRotatedArray(int arr[],int size)              // funtion to Print RotatedArray
{
    cout<<"[";
    for(int i=0;i<size;i=i+1)
    {
        cout<<arr[i];
        if(i<size-1)
        {
            cout<<",";
        }
    }
    cout<<"]";
}
int * ArrayReversal(int arr[], int size) // Function to Reverse Array
{
    int * ptr=new int [size];
    int count=size-1;
    for(int i=0;i<size;i=i+1)
    {
        int temp=arr[0];
        arr=rotLeft(arr,1,size); // Array Reversal using RotateLeft
        ptr[count]=temp;
        count=count-1;
    }
    arr=ptr;
    return arr;
}
int main()
{
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);    //calculate size of array..
    if(size==0)         // check if array is empty or not..
    {
        cout<<"Array is Empty!!!";
    }
    else
    {
        int* arrayRev=ArrayReversal(arr,size); // funtion call to ArrayReversal
        cout<<"Reversed Array : ";
        for(int i=0;i<size;i=i+1)   // Print Reversed Array..
        {
            cout<<arrayRev[i]<<" ";
        }
    }
}
// Yes we use the rotLeft function for Array Reversal..
// In this code, int arr[]= {1,2,3,4,5} is reversed using Rotate Left Function
// For each iteration array will be rotated by length (1) and element at first index will be stored in last..
// For exmaple In array= {1,2,3,4,5},In first iteration, after first Rotation by 1 , array={2,3,4,5,1}..
// Now last element of array is revsered while {2,3,4,5} are not reversed.. now in second iteration,
// again we will rotate array by 1 (excluding the 1 because it is already reversed) ,then array={3,4,5,2,1}..
// We can see now last 2 elements are reverse but {3,4,5} are not reversed.. In third iteration, array will 
// be rotated by 1 again(excluding the 2,1 because it is already reversed) the array={4,5,3,2,1}.. 
// Last three elements are now reversed except {4,5}.. now in fourth iteration again array will be rotated 
// by 1 (excluding the 3,2,1 because it is already reversed) which results array={5,4,3,2,1}.. Now array is
// reversed completely..
// Complexity of code will be n^2 if  if we solve it using RotateLeft function..