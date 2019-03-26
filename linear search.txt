#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int arr[10];
int linear(int listarr[],int elements,int value)
{
 int index=0;
 int position=-1;
 bool found = false;
 while(index<=elements && found !=true )
 {
    if(listarr[index]==value)
    {
       found =true;
       position=index;
    }
    index++;
 }

 return  position;

}

int main(){
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

cout<<linear(arr,10,5)<<endl;


    return 0;
}
