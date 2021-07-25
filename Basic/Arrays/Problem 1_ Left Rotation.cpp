#include<iostream>
using namespace std;
int * rotLeft(int arr[],int rotate,int size) // rotate left function 
{
    for(int i=0;i<rotate;i=i+1)     // rotate array upto specified number of rotations..
    {
        int temp=arr[0];
        for(int j=0;j<size;j=j+1)   // move array elemets to left side..
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
void PrintRotatedArray(int arr[],int size) // funtion to Print RotatedArray
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
int main()
{
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]); //calculate size of array..
    if(size==0) // check if array is empty or not..
    {
        cout<<"Array is Empty!!!";
    }
    else
    {
        int numOfRotations;
        cout<<"Enter the Number of Rotations : ";
        cin>>numOfRotations;
        int * rotatedArray= rotLeft(arr,numOfRotations,size); // funtion call to rotLeft array
        cout<<"Rotated Array is : ";
        PrintRotatedArray(rotatedArray,size); // print rotatedArray
    }
}