
#include<bits/stdc++.h>
using namespace std;

//static int count;

int ackerman(int m,int n,int &count)
{
	count++;
	
	if(m==0)
	{
		return (n+1);
	}
	
	if(n==0&&m>0)
	{
		
		return ackerman(m-1,1,count);
	}
	
	
	if(m>0&&n>0)
	{
		
		return ackerman(m-1,ackerman(m,n-1,count),count);
	}
	
}

int main()
{
	
	
	int m,n;
	cin>>m>>n;
	int count=0;
	cout<<ackerman(m,n,count)<<" ";
	cout<<count;
}