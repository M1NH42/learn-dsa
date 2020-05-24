/* In this program we will implement bsf using queue of a given graph */

#include<bits/stdc++.h>
#include "queue.h"
using namespace std;

void BFS(int G[][7], int start, int n)
{
//    static int visited[7] = {0};
    int i = start, j;
    int visited[7] ={0};
    printf("%d ",i);
    visited[i] = 1;
    enqueue(i);

    while(!is_empty())
    {
        i=dequeue();
        for(int j=1; j<=n; j++)
        {
            if(G[i][j]==1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}

void DFS(int G[][7], int start, int n)
{

}

int main()
{
    int G[7][7] = {{0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                   {0,1,0,0,1,0,0},
                   {0,1,0,0,1,0,0},
                   {0,0,1,1,0,1,1},
                   {0,0,0,0,1,0,0},
                   {0,0,0,0,1,0,0}};
//    bfs called
    BFS(G, 1, 7);

    return 0;
}