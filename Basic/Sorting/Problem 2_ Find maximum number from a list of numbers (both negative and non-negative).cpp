#include<iostream>
using namespace std;
int * Sort(int * ptr)               // Function To sort Elements
{
    int i=0;
    while(ptr[i]!=-99)
    {
        int j=0;
        while(ptr[j]!=-99)
        {
            if(ptr[i]<ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
            j=j+1;
        }
        i=i+1;
    }
    return ptr;
}
int *DistributeArray(int arr[], int pivot, int size)            //Distribute Array around pivot..
{
    int * ptr=new int [size];
    int *temp=new int [size];
    int i;
    int index=0;
    for(i=0;i<size;i=i+1)
    {
        if(arr[i]<pivot)                                   // check values which are less than pivot..
        {
            ptr[index]=arr[i];
            index=index+1;
        }
    }
    ptr[index]=-99;
    int j;
    int count=0;
    for(j=0;j<size;j=j+1)
    {
        if(arr[j]>=pivot)                   // check values which are greater than or Equal to pivot..
        {
            temp[count]=arr[j];
            count=count+1;
        }
    }
    temp[count]=-99;
    int * sortedPtr=Sort(ptr);                  // Sort Array
    int * sortedTemp=Sort(temp);
    int x=0;
    while(ptr[x]!=-99)
    {
        arr[x]=ptr[x];
        x=x+1;
    }
    int y=0;
    while(temp[y]!=-99)
    {
        arr[x]=temp[y];
        x=x+1;
        y=y+1;
    }
    return arr;
}
int MaximumNumber(int array[],int size)
{
    int pivot=0;
    int * resultArr=DistributeArray(array,pivot,size);      //Find Maximum Number Using Distribute Array..
    return resultArr[size-1];
}
int main()
{
    
    int array[]={ -1,1,-2,2,-3,3,0 };
    int size = sizeof(array) / sizeof(array[0]);        // Calculate size of Array...
    if(size==0)
    {
        cout<<"Array is Empty!!!";
    }
    else
    {
        int maxNum=MaximumNumber(array,size);               // Function call..
        cout<<"Maximum Number is : "<<maxNum;               // Print Maximum Number
    }
}


// Yes we can use the method DistributiveArray written above to achieve this..
// As DistributiveArray will arrange elements in ascending order around the pivot.. So MaximumNumber will exist
// at the last index of an array.. So, we can return last index of DistributiveArray to get Maximum Number..
// In this Question, Sort(int * ptr) is the Smart sorting algorithm..