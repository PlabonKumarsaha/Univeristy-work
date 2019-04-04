#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int BST(int n)
{
    if(n == 0 || n==1) return n;
    int first =1;
    int last =n;
    int ans;

    while(first<=last)
    {
        int mid;
        mid = (first+last)/2;
        if(mid *mid == n)
        {
            return mid;
        }
        else if(mid*mid <n)
        {
            first = mid+1;
            ans =mid;

        }
    else
        {
            last =mid;
        }

    }
    return ans;



}
int main()
{
    

cout<<BST(11);




    return 0;
}
