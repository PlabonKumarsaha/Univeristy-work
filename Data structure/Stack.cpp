#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

int arr[MAX];

class Stack{
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool push(int x)
    {
        if(top>=MAX)

        {
            cout<<"Stack overflow"<<endl;
            return false;
        }

        else{
            arr[++top] = x;
            cout<<x<<" is pushed to stack"<<endl;
            return true;

        }
    }

    void pop()
    {
        if(top<0) {cout<<"Stack underflow"<<endl;
        //return 0;
        }
        else
        {
            int x = arr[top];
            --top;
            cout<<x<<" is poped"<<endl;

        }
    }

int peek()
{
    return arr[top];
}
void print()
{
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};
int main()
{
Stack st;
st.push(2);
st.push(5);
st.push(6);
st.print();
cout<<"after pop"<<endl;
st.pop();
st.print();
cout<<st.peek()<<endl;

    return 0;
}
