#include<iostream>
using namespace std;

#define MAX_size 1000

class Stack
{
    int top;
public:
    int a[MAX_size];    //Maximum size of Stack

    Stack()
    { top = -1; }

    bool push(int x)
    {
            if (top >= (MAX_size-1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x <<" pushed into stack\n";
        return true;
    }
    }
    int pop()
    {
            if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
    }
    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop() << " Popped from stack\n";

    return 0;
}
