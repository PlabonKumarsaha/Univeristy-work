#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

stack<char>s1;
int main()
{
    char x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s1.push(x);

    }
   cout<<"after top :"<<s1.size()<<endl;
     while(!s1.empty())
    {

  cout << ' ' << s1.top();
     s1.pop();

    }




    return 0;
}
