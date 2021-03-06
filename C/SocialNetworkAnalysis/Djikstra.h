// Dijkstra ADT interface for Ass2 (COMP2521)
#include <stdbool.h>
#ifndef GRAPH
	#define GRAPH
	#include "Graph.h"
#endif

typedef struct PredNode {
   int         v;
   struct PredNode *next;
} PredNode;

typedef struct ShortestPaths {
   int noNodes;
   int src;
   int *dist;
   PredNode **pred;
} ShortestPaths;


/* Finds shortest paths from a given vertex to all other vertices, as discussed in the lectures.
 * Returns 'ShortestPaths' structure with the required information
 * (i.e. 'distance' array, 'predecessor' arrays, source and no_of_nodes in the graph)
 */
ShortestPaths dijkstra(Graph, Vertex);


void  showShortestPaths(ShortestPaths);
void  freeShortestPaths(ShortestPaths);
