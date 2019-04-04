#include <iostream>
#include <stdio.h>
#include <algorithm>
#define N 10000
using namespace std;
int arr[N];
int countn[N];
int taken[N];
void counting(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        countn[arr[i]]++;
       //cout<<arr[i]<<" "<<countn[arr[i]]<<" ";

    }

    for(int i=0;i<n;i++)
    {
        if(taken[arr[i]]==0)
        {
        for(int k=0;k<countn[arr[i]];k++)
        {
            cout<<arr[i]<<" ";

        }
        taken[arr[i]]=1;
        }

    }


}
int main()
{

int n;
cin>>n;
counting(n);
    return 0;
}
