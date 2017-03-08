#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INFINITO 9999;
//structs do grafo

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
	Aresta *e;
}typedef Grafo;

//------------------------------------
void *inicializaGrafo(int m);
void belmanFord(Grafo g, int inicio);

int main(){
	int numTeste; 	// quantidade de conjuntos a serem testados
	int n;			// n => número de galáxias
	int m;			// m => número de buracos de minhoca
	int x;			// x => galáxia que está a entrada do buraco
	int y;			// y => galáxia que está a saída do buraco
	int t;			// t =>	diferença de tempo, em anos, entre entrada e saída
	int i, ini;
	Grafo *g;
	
	scanf("%d", &numTeste);
	while(numTeste > 0){
		scanf("%d %d", &n, &m);
		g = inicializaGrafo(m);	
		
		for(i=0; i<m; i++){			//constroi as ligações entre os vértices
			scanf("%d %d %d", &x, &y, &t);
			if(i == 0)
				ini = x;	//início do grafo
			g->e[i].fonte = g->v[x];
			g->e[i].destino = g->v[y];
			g->e[i].peso = t;
		}
		
		bellmanFord(g, ini);
		
		numTeste--;
	}
	
	return 0;
}

void *inicializaGrafo(int m){
	int i;
	Grafo *g = (Grafo*)calloc(1, sizeof(Grafo));
	Vertice *ve = (Vertice*)calloc(m, sizeof(Vertice));
	Aresta *ar = (Aresta*)calloc(m, sizeof(Aresta));

	g->numVertices = m;
	for(i=0; i<m; i++){
		ve[i].valor = INFINITO;
		ar[i].peso = INFINITO;
		//ar[i].fonte = NULL;
		//ar[i].destino = NULL;
	}
	g->v = ve;
	g->e = ar;
	return g;
}

void belmanFord(Grafo g, int inicio){
	
}
