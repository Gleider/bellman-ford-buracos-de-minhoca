#include <stdio.h>

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
	Aresta *aresta;
}typedef Grafo;

//------------------------------------

int main(){
	int numTeste; 	// quantidade de conjuntos a serem testados
	int n;			// n => número de galáxias
	int m;			// m => número de buracos de minhoca
	int x;			// x => galáxia que está a entrada do buraco
	int y;			// y => galáxia que está a saída do buraco
	int t;			// t =>	diferença de tempo, em anos, entre entrada e saída
	
	scanf("%d", &numTeste);
	while(numTeste > 0){
		scanf("%d %d %d %d %d", &n, &m, &x, &y, &t);
		
		numTeste--;
	}
	
	
	return 0;
}
