#include<iostream>
using namespace std;
int bs(int n)
{
    int s=0;
    int e=n;
    int mid=s + (e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(n==mid*mid)
        {
            return mid;
        }
        else if(n>mid*mid)
        {
            ans=mid;
            s=mid+1;
        }
        else if(n<mid*mid)
        {
            e=mid-1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}
int sqrt(int a)
{
    return bs(a);
}
int main()
{
    cout<<sqrt(36);
}
