#include<iostream>
using namespace std;
int arr[10];
void selectionSort(int arr[],int n)
{
    int k;//take an extra key
for(int i=0;i<n;i++) //start from the first array list
{
    k=i; //put the initial index value in k
    for(int j=i+1;j<n;j++) //start from the next element
    {
        if(arr[j]<arr[k])
        {
            k=j; //update the smallest index
        }
        swap(arr[k],arr[i]); //after the last traverse of j swap the smallest  k
    }


}


}

int main()
{
    int n;
    cin>>n;
for(int i=0;i<n;i++)
    cin>>arr[i];

    selectionSort(arr,n);


    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }

}
