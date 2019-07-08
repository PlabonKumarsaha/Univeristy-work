#include<bits/stdc++.h>


using namespace std;

int bresenhamsAlgorithm(int x1,int x2,int y1,int y2)
{
    int dx,dy;
    dx = abs(x1-x2);
    dy = abs(y1-y2);
    int p = 2*dy - dx;
    int x = x1;
    int y = y1;
    while(x<x1)
    {
        if(p<0)
        {
            putpixel(x,y,7);
			p=p+2*dy;
        }
        else{
            putpixel(x,y,7);
			y=y+1;
			p=p+2*dy-2*dx;

        }
        x = x+1;
    }


}

int main()
{
    	
    int x1;
int x2;
int y2;
int y1;
 cout<<"First co ordinat.?"<<endl;
 cin>>x1>>y1;

 cout<<"second co ordinat.?"<<endl;
 cin>>x2>>y2;
 bresenhamsAlgorithm(x1,x2,y1,y2);

}
