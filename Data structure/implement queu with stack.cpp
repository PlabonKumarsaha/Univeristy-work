#include <bits/stdc++.h>
#include <queue>
#include <vector>
#define MAX 1000
using namespace std;
stack<int>st1,st2;
struct Queue{
void enque(int x)
{
    st1.push(x);
}
int Deque()
{
    if(st1.empty() && st2.empty())
    {
        cout<<"Queue is empty"<<endl;
        exit(0);
    }
    if(st2.empty()){
     while(!st1.empty())
     {
         int x=st1.top();
         st2.push(x);
         st1.pop();
              }
    }
    int y = st2.top();
    st2.pop();
    return y;
}

};

int main()
{
Queue q;
q.enque(2);
q.enque(5);
q.enque(7);
cout<<"Dequeu element is : "<<q.Deque()<<endl;
cout<<"Dequeu element is : "<<q.Deque()<<endl;
cout<<"Dequeu element is : "<<q.Deque()<<endl;



}
