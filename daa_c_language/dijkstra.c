#include <limits.h>
#include <stdio.h>
#include <stdbool.h>
 

#define V 8
 

int minDist(int D[], bool sptSet[])
{
    int min = INT_MAX, min1;         
 
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && D[v] <= min)
            min = D[v], min1 = v;
 
    return min1;
}
 

void printSolution(int D[])
{
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < V; i++)                
        printf("%d \t\t %d\n", i, D[i]);
}



void dijkstra(int graph[V][V], int source)
{
    int D[V];
 
    bool sptSet[V]; 
 
    for (int i = 0; i < V; i++)                                   
        D[i] = INT_MAX, sptSet[i] = false;
    D[source] = 0;
 
  
    for (int a = 0; a < V - 1; a++) {                         
        int u = minDist(D, sptSet);
        sptSet[u] = true;
 
        for (int b = 0; b < V; b++)
 
            if (!sptSet[b] && graph[u][b] && D[u] != INT_MAX && D[u] + graph[u][b] < D[b])
                    D[b] = D[u] + graph[u][b];
    }
 
   
    printSolution(D);           
}
 

int main()
{ 
    int graph[V][V] = {
       {0,6,3,1,0,0,0,0},
       {6,0,2,0,1,0,0,0},
       {3,2,0,2,0,0,0,0},
       {1,0,2,0,6,10,0,0},
       {0,1,0,6,0,4,3,6},
       {0,0,0,10,4,0,2,0},  
       {0,0,0,0,3,2,0,4},
       {0,0,0,0,6,0,4,0},
       
    };
    dijkstra(graph, 0);               
 
    return 0;
}