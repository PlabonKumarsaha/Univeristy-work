#include <iostream>
using namespace std;
int ackermann_function(int m,int n){
    if(m==0 && n>0){
	return n+1;
}
     if(n==0 && m>0){
   	  ackermann_function(m-1,1);
     }
     if(m>0 && n>0){
   	 
   	  ackermann_function(m-1,ackermann_function(m,n-1));
     }
    
}
int main()
{
	int i,j;
	for(i=0;i<=7;i++)
	{
    	for(j=0;j<=7;j++)
    	{   
   		 if(i==0 && j==0)
   		 {
   		 }
   		 else
        	cout<<ackermann_function(i,j)<<" ";
    	}
    	cout<<endl;
	}
return 0;

}
