#include<iostream>
using namespace std;
int peakmountainindexArray(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1])
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[6]={1,8,12,8,6,2};
    cout<<"The peak index of mountain array is "<<peakmountainindexArray(arr,6);
}