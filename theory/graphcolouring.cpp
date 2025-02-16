// C++ program for solution of M
// Coloring problem using backtracking

#include <bits/stdc++.h>
using namespace std;

// Number of vertices in the graph
int V;
bool graph[10][10];

bool isSafe(int v, int color[], int c)
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i])
            return false;

    return true;
}

/* A recursive utility function
to solve m coloring problem */
bool graphColoringUtil(int m, int color[],
                       int v)
{

    /* base case: If all vertices are
       assigned a color then return true */
    if (v == V)
        return true;

    /* Consider this vertex v and
       try different colors */
    for (int c = 1; c <= m; c++) {

        /* Check if assignment of color
           c to v is fine*/
        if (isSafe(v, color, c)) {
            color[v] = c;

            /* recur to assign colors to
               rest of the vertices */
            if (graphColoringUtil( m, color, v + 1)
                == true)
                return true;

            /* If assigning color c doesn't
               lead to a solution then remove it */
            color[v] = 0;
        }
    }

    /* If no color can be assigned to
       this vertex then return false */
    return false;
}

bool graphColoring(int m)
{


    int color[V];
    for (int i = 0; i < V; i++)
        color[i] = 0;

    // Call graphColoringUtil() for vertex 0
    if (graphColoringUtil(m, color, 0) == false) {
        return false;
    }


    return true;
}

/* A utility function to print solution */
void printSolution(int color[])
{
    cout << "Solution Exists:"
         << " Following are the assigned colors"
         << "\n";
    for (int i = 0; i < V; i++)
        cout << " " << color[i] << " ";

    cout << "\n";
}

// Driver code
int main()
{

    /* Create following graph and test
       whether it is 3 colorable
      (3)---(2)
       |   / |
       |  /  |
       | /   |
      (0)---(1)
    */
    cin >> V;
    int m;
    cin >> m;

    for(int i = 0;i < m;i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    int solve = 0;
    for(int i = 1;i <= V;i++) {
        if(graphColoring(i)) {
            solve = i;
            break;
        }  
    }
    cout << solve << "\n";
    return 0;
}
