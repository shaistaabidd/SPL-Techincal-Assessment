#include<iostream>
#include<array>
using namespace std;
int* findPairs(int arr[],int targetVal, int size) // find Pairs whose sum is equal to targetVal..
{
    int *ptr=new int [size*2];
    int index=0;
    for(int i=0;i<size;i=i+1)
    {
        for(int j=i+1;j<size;j=j+1)
        {
            if(arr[i]+arr[j]==targetVal) // compare sum of pairs with targetVal.. 
            {
                
                ptr[index]=arr[i];
                index=index+1;
                ptr[index]=arr[j];
                index=index+1;
            }
        }
    }
    ptr[index]=-786;
    if(index==0)
    {
        ptr[0]=-999;
    }
    
    return ptr;
}
void PrintPairs(int *pairs)
{
    int i=0,count=i;
    if(pairs[0]==-999)
    {
        cout<<"No Pair Found"; // if No sum of Pair or Identical Pair is Found, It will display "No Pair Found".
    }
    else
    {
        /*cout<<"[";
        while(pairs[i]!=-786)
        {
            cout<<"{"<<pairs[i]<<","<<pairs[i+1]<<"}";
            if(pairs[i+2]!=-786)
            {
                cout<<",";
            }
            i=i+2;
        }
        cout<<"]";*/
        cout<<"[";
        while(pairs[i]!=-786)
        {
            if(i%2==0)
            {
                cout<<"{";
            }
            cout<<pairs[i];
            if(i%2==0)
            {
                cout<<",";
            }
            if(i%2==1)
            {
                cout<<"}";
                if(pairs[i+1]!=-786)
                {
                    cout<<",";
                }
            }
            i=i+1;
        }
        cout<<"]";
    }
        
}
int * findIdenticalPairs(int array[],int size) // Pairs are said to be identical if they are in form
{                                             // {p,q} and {q,p} E,g. {2,3} and {3,2} are identical.
    int index=0;
    int * ptr=new int [size*2];
    for(int i=0;i<size;i=i+2)
    {
        int count=0;
        int num1=array[i];
        int num2=array[i+1];
        for(int j=i+2;j<size;j=j+2)
        {
            if(((num1==array[j]) && (num2==array[j+1])) || ((num1==array[j+1]) && (num2==array[j])))
            {                                   //This condition will check if pairs are identical, it will
                                                //store all identical pairs in array..
                ptr[index]=num1;
                index=index+1;
                ptr[index]=num2;
                index=index+1;
                ptr[index]=array[j];
                index=index+1;
                ptr[index]=array[j+1];
                index=index+1;
                count=count+1;
            }
            
        }
    }
    ptr[index]=-786;
    if(index==0)
    {
        ptr[0]=-999;
    }
    return ptr;
}
int main()
{
    int arr[] = {10, 12, 14, 16, 18};
    int targetNum=30;
    int size = sizeof(arr) / sizeof(arr[0]);
    if(size<2)
    {
        cout<<"Array Should contain atleast 2 Values!!!";
    }
    else
    {
        int* pairs=findPairs(arr,targetNum,size);
        cout<<"Array = {10, 12, 14, 16, 18}\n"; // Pairs whose sum equal to target value are: [{12,18} , {14,16}].
        cout<<"Pairs of Sum :";     
        PrintPairs(pairs);
        int* IdentPairs=findIdenticalPairs(arr,size);
        cout<<"\nIdentical Pairs : "; //The above array has no identical pair in form of {p,q} and {q,p}.
        PrintPairs(IdentPairs);         //Therefore No identical pair is found in above array.
        
    }
    cout<<"\n";
    int array[]={ 2,3,5,7,3,2,1,5,11,19 }; //Let's take another array having identical pairs..
    int length = sizeof(array) / sizeof(array[0]);
    if(length<4)
    {
        cout<<"\nArray Should contain atleast 4 Values!!!";
    }
    else
    {
        int* sumPairs=findPairs(array,targetNum,length);
        cout<<"Array = { 2,3,5,7,3,2,1,5,11,19 }\n"; // Pairs whose sum equal to target value are: [{11,19}].
        cout<<"Pairs of Sum : ";
        PrintPairs(sumPairs); 
        int* IdenticalPairs=findIdenticalPairs(array,length);//The above array has identical pair in form of {p,q} and {q,p}.
        cout<<"\nIdentical Pairs : "; // {2,3} and {3,2} will be printed.
        PrintPairs(IdenticalPairs);
    }
    return 0;
}


// Pairs are said to be identical if they are in form
// {p,q} and {q,p} E,g. {2,3} and {3,2} are identical.
//We can filter identical pairs using function "findIdenticalPairs" which is written above.