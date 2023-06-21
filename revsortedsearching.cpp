#include<iostream>
using namespace std;
int getpivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>= arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int binarysearch(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid= start+(end-start)/2;
    while(start<=end)
    {

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        mid= start+(end-start)/2;
    }
    return -1;
}
int main()
    {
        int n=5;
        int key=8;
        int arr[5]={7,8,10,2,3};
        int pivot=getpivot(arr,5);
        if(key>= arr[pivot]&&key<=arr[n-1])
        {
           int res1= binarysearch(arr,pivot,n-1,key);
           cout<<"key is found at "<< res1;
        }
        else
        {
           int res2= binarysearch(arr,0,pivot-1,key);
           cout<<"key is found at "<< res2;
        }
    }