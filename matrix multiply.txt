#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int arr[100];
int c[5][5];

int main()
{
int a[5][5],b[5][5];

int m,n,p,q;
cout<<"first matrix row column"<<endl;
cin>>m>>n;
cout<<"second matrix row column"<<endl;
cin>>p>>q;
if(n==p)
{
 cout<<"first matrix input"<<endl;
for(int i=0;i<m;i++)
{
    for(int j =0;j<n;j++)
        cin>>a[i][j];
}
cout<<"second matrix input"<<endl;
for(int i=0;i<m;i++)
{
    for(int j =0;j<n;j++)
        cin>>b[i][j];
}
cout<<"ans --"<<endl;

 for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<n;k++)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                cout<<c[i][j]<<" ";
        }
    
}
else{
    cout<<"multiplication not possible"<<endl;
}
}
