#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[10];

int binarSearch(int value)
{
    for(int i=0;i<10;i++)
        {cin>>arr[i];}

    sort(arr,arr+10);
    for(int i=0;i<10;i++)
        {cout<<arr[i] << " ";}



    int first =0;
    int last = 10;
   // int middle =(last + first)/2;
    while(first <= last)
    {
        int middle =(last + first)/2;
        if(value == arr[middle])
        {
            return middle;
        }
        else if(value >arr[middle])
        {
            first= middle+1;
        }
        else if(value < arr[middle]) {
            last = middle-1;
        }
    }
    return -1;


}

int main()
{
cout<<binarSearch(5)+1<<endl;
    return 0;
}
