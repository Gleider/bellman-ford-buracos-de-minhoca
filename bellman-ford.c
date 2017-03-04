#include <stdio.h>

struct vertice{
	int valor;
}typedef Vertice;

struct aresta{
	int peso;
	Vertice fonte;
	Vertice destino;
}typedef Aresta;

struct grafo{
	int numVertices;
	Vertice *v;
	Aresta *aresta;
}typedef Grafo;
