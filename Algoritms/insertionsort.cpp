#include<iostream>
using namespace std;
int arr[10];
void InsertionSort(int arr[],int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        key = arr [i];
        int j =i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] =key;
        }


}

int main()
{
    int n;
    cin>>n;
for(int i=0;i<n;i++)
    cin>>arr[i];

    InsertionSort(arr,n);


    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }

}
