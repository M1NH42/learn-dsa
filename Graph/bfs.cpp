/* In this program we will implement bsf using queue of a given graph */

#include<bits/stdc++.h>
#include "queue.h"

// use namespace std to avoid std::cout again and again
using namespace std;

// Function to find breadth first search of the given graph
void BFS(int G[][7], int start, int n)
{
//    static int visited[7] = {0};

    // var
    int i = start, j;

    // initially visited array contains zero values only
    int visited[7] ={0};

    // first print the data/node
    printf("%d ",i);

    // mark it positive
    visited[i] = 1;

    // put it in queue
    enqueue(i);

    // until q is empty
    while(!is_empty())
    {
        // pop the node store it in the i variable
        i=dequeue();

        for(int j=1; j<=n; j++)
        {
            if(G[i][j]==1 && visited[j] == 0) // if link is present and not visiited
            {
                printf("%d ", j); // print the node value
                visited[j] = 1; // mark visited
                enqueue(j); // put in the queue
            }
        }
    }
}

// Function finds the depth first search
void DFS(int G[][7], int start, int n)
{
    // arrayof visited nodes
    // initially zero means not visited
    static int visited[7] = {0};

    // if not visited
    if(visited[start]==0)
    {
        // print the node val
        cout<< start << endl;

        // mark it visited
        visited[start]=1;

        // loop thru
        for(int j=1; j<=n; j++)
        {
            // check if there's a link and also not visited
            if(G[start][j]==1 && visited[j]==0)
            {
                // call dfs recurssively
                DFS(G, j, n);
            }
        }
    }
}

int main()
{
    // Graph representation thru adjacency matrix
    int G[7][7] = {{0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                   {0,1,0,0,1,0,0},
                   {0,1,0,0,1,0,0},
                   {0,0,1,1,0,1,1},
                   {0,0,0,0,1,0,0},
                   {0,0,0,0,1,0,0}};
//    bfs called
    DFS(G, 1, 7);

    return 0;
}