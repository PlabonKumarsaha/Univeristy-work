#include <bits/stdc++.h>
#define MAX 10000
using namespace std;
stack<char>st;
bool isBalanced(string s)
{
  char x;
  //traverse the whole input
  for(int i=0;i<s.length();i++)
  {
      //first check for opening tags,if any element is starting tag then it is pushed to the stack
      if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
                //if we can push any element then no need to check the rest of the code
                continue;
            }
            //if no starting tag found then the result is false
         if(st.empty()) return false;
//now we look for balanced closing tags
//if any tag is not opening tag then it should be closing tag
       switch(s[i])
       {
           //if closing index is ')' then we check if the top value from stack is either '{' or '[' ..If any
           //are true then the input is not balanced
    case ')' :
        x=st.top();
        st.pop();
        if(x == '{' || x =='[')
        return false;
        break;

     case '}' :
        x=st.top();
        st.pop();
        if(x== '(' || x=='[')
        return false;
        break;

     case ']' :
        x=st.top();
        st.pop();
        if(x== '(' || x=='{')
        return false;
        break;
       }
  }
//after checking everything if the stack is now empty every
//opening tag has a closing tag then the function returns true
return (st.empty());
}



int main()
{
    string st;
    cin>>st;
    if(isBalanced(st))
    {
        cout<<"This is balanced"<<endl;
    }
    else{

        cout<<"This is not balanced"<<endl;
    }

    return 0;
}
