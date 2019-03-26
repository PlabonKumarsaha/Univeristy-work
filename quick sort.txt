jblhe#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int A[100];
int partitionQuick(int A[],int high,int low)
{
    int pivot,i,j;
    pivot=A[low];
   i=low;
   j=high;
   while(j>i)
   {
       do
       {
           i++;
       }while(A[i]<=pivot) ;

       do
       {
           j--;
       }while(A[j]>pivot);
if(i<j) swap(A[i],A[j]);
   }
   swap(A[j],A[low]);

   return j;

   }
   int quickSort(int A[],int low,int high)
   {
       int j;
       if(high>low)
       {

           j = partitionQuick(A,low,high);
           quickSort(A,low,j);
           quickSort(A,j+1,high);


       }

   }
int main()
{
    int n;
    cin>>n;
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
quickSort(A,0,n);
for(int i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}
