You are given with an array and a number.you have to find exactly two 
values that make that number.The complexity can't be more then logn

#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int arr[100];
//this will check if sum of any tow element is equals to a number v
bool value(int v,int arr[],int n)
{
    sort(arr,arr+n);
    int low =0;
    int high = n-1;
    while(low<high)
    {
        if((arr[low]+arr[high]) == v) {return true;}

        else if(arr[low]+arr[high] > v) { high --;}
        else if(arr[low]+arr[high]< v) { low ++;}

    }


}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
int x;
cin>>x;
cout<<value(x,arr,n)<<endl; //returns true if possible else not


}
