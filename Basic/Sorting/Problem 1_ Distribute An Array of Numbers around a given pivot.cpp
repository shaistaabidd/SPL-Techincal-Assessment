#include<iostream>
using namespace std;
int * Sort(int * ptr)       // Function To sort Elements
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
int *DistributeArray(int arr[], int pivot, int size)        //Distribute Array around pivot..
{
    int * ptr=new int [size];
    int *temp=new int [size];
    int i;
    int index=0;
    for(i=0;i<size;i=i+1)           // check values which are less than pivot..
    {
        if(arr[i]<pivot)
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
        if(arr[j]>=pivot)                // check values which are greater than or Equal to pivot..
        {
            temp[count]=arr[j];
            count=count+1;
        }
    }
    temp[count]=-99;
    int * sortedPtr=Sort(ptr);          //Sort Array 
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
int main()
{
    int pivot=0;
    int array[]={1,-1,-2,2,-3,3,0 };
    int size = sizeof(array) / sizeof(array[0]);        // Calculate size of Array...
    if(size==0)         // Check if array is null or not..
    {
        cout<<"Array is Empty!!!";
    }
    else
    {
        int * resultArr=DistributeArray(array,pivot,size);          // Function call..
        cout<<"Output : {";                 // Print resultant Sorted Array
        for(int i=0;i<size;i=i+1)
        {
        
            if(i!=0)
            {
                cout<<",";
            }
            cout<<resultArr[i];
        }
        cout<<"}";
    }
}
// we can find the pivot in the array containing even number of elements by using the concept of median.
// For example if we have array={1,2,3,4,5,6,7,8}, there are even number of elements. It has two central elements
// that is 4,5. We will take median of 4,5= (4+5)/2=4.5..which is pivot..  