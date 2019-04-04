#include <iostream>

using namespace std;
int arr[10];
int main()
{
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
  //int i,j;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int o=0;o<10;o++)
    {
        cout<<arr[o]<<" ";
    }

}

