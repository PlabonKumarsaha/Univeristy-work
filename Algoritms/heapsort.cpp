#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[10];
void heapify(int arr[],int number,int i)
{
    //number = sizeof(arr)/arr[0];
    int largest =i;//largest = root
    int right=2*i+1;
    int left = 2*i+2;

    if(right<number && arr[right]>arr[largest])
    {
        largest = right; //assignt the highest value
    }
    else if (left<number && arr[left]>arr[largest])
    {
        largest = left; //assign the highest value
    }

    if(i!=largest)
    {
        swap(arr[i],arr[largest]); //make the largest value root
        heapify(arr,number,largest); //call recursievly
    }
}
int heapSort(int arr[],int number)
{
    for(int i=number/2 -1;i>0;i--) //find the last parent with child with the value of i
    {
        heapify(arr,number,i); //heapily the arr
        for(int i =number-1;i>0;i--)
        {
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }
}
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    heapSort(arr,n);
    printArr(arr,n);



    return 0;
}
