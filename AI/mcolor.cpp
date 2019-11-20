#include<stdio.h>
#include<iostream>
#include<vector>


#define MAX 10000
using namespace std;
vector<int>graph[MAX];

int color[MAX];
int node,edges;

void printSolution(int color[]);
bool isOK(int v,int color[], int c)
{
	for (int i = 0; i < node; i++)
		if (graph[v][i] && c == color[i])
			return false;
	return true;
}

bool graphColoringUtil(int m, int color[], int v)
{
	// base case: If all vertices are assigned a color then
	//return true
	if (v == node)
		return true;

	/* Consider this vertex v and try different colors */
	for (int c = 1; c <= m; c++)
	{
		/* Check if assignment of color c to v is fine*/
		if (isOK(v, color, c))
		{
		color[v] = c;

		if (graphColoringUtil (m, color, v+1) == true)
			return true;

		color[v] = 0;
		}
	}

	/* If no color can be assigned to this vertex then return false */
	return false;
}

bool graphColoring( int m)
{
	// Initialize all color values as 0. This initialization is needed
	// correct functioning of isSafe()
	int color[node];
	for (int i = 0; i < node; i++)
	color[i] = 0;

	if (graphColoringUtil(m, color, 0) == false)
	{
	printf("Not possible");
	return false;
	}

	// Print the solution
	printSolution(color);
	return true;
}

/* A utility function to print solution */
void printSolution(int color[])
{
	printf(" Following are the assigned colors \n");
	for (int i = 0; i < node; i++)
	printf(" %d ", color[i]);
	printf("\n");
}


int main()
{

cin>>node>>edges;
for(int i=0;i<edges;i++)
{
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
}

	int m; // Number of colors
	cin>>m;
	graphColoring (m);
	return 0;
}
