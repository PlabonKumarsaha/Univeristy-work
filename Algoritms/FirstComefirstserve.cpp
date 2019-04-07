#include<iostream>
using namespace std;
#include<algorithm>
int proc[10000];
int bt[10000];
int wt[10000];
int tat[1000];
int main()
{
    int i;
int n;
//take input of how many process are there
cin>>n;
//input the burst time of all the process
cout<<"Enter burst time"<<endl;
for(int j=0;j<n;j++)
{ cout<<"p ["<<j+1<<"] ?"<<endl;
    cin>>bt[j];
}
//waiting time for first proc will be zero
wt[0]=0;
//calculate the burst time of other proc
for( i=1;i<n;i++)
{
    //to avoid garbage value
    wt[i] = 0;

    for(int j =0;j<i;j++)
        //to get a  waiting time of ith process we need to add all the burst time before that process
    wt[i]=wt[i]+bt[j];
}

    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
//calculate the turn around time
int totalTAT,totalWT;
for(i=0;i<n;i++)
{
    //tat is the sum of burst time and waiting time
    tat[i] = bt[i]+wt[i];
    totalWT = totalWT + wt[i];
    totalTAT = totalTAT + tat[i];
    cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];

}
cout<<"Average waiting time : "<<totalWT/n<<endl;
cout<<"Average turn around time : "<<totalTAT/n<<endl;



    return 0;
}
