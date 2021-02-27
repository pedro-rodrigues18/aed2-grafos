/* Estruturas de grafos
**
** Lista de Adjacência
** Matriz de Adjacência
** Matriz de Incidência
** 
*/

#include <stdio.h>
#include <stdlib.h>

// Definição do tipo Lista Dinâmica
typedef struct TipoValor Valor;
typedef struct TipoNo No;
typedef struct TipoLista Lista;

// Definição do tipo grafos Lista de Adjacência
typedef struct ListaDeAdjacencia ListaDeAdjacencia;
// Definição do tipo grafos Matriz de Adjacência
typedef struct MatrizDeAdjacencia MatrizDeAdjacencia;
// Definição do tipo grafos Matriz de Incidencia
typedef struct MatrizDeIncidencia MatrizDeIncidencia;

struct TipoValor{
    int valor; // Valor a ser armazenado na lista
};

struct TipoNo{
    Valor dado; // Dado a ser armazenado na lista do tipo Valor.
    No *prox;
};

struct TipoLista{
    No *primeiro; // A Lista, que é uma estrutura que possui um ponteiro para o primeiro e último nó
    No *ultimo;
};

// Strutura de uma lista de adjacência.
struct ListaDeAdjacencia{
    int numeroDeVertices;
    Lista *listaDeAdjacencia;
};

// Strutura de uma Matriz de adjacência. Utilizada para grafos densos.
struct MatrizDeAdjacencia{
    int numeroDeVertices;
    int **matrizDeAdjacencia; // Matriz de adjacencia. Armazena 1 se o vertice tem conexão com outro e 0 se não tiver conexão
};

// Strutura de uma Matriz de incidência
struct MatrizDeIncidencia{
    int numeroDeVertices;
    int numeroDeArestas;
    int **matrizDeIncidencia; // Matriz de incidência. Armazena 1, -1 e 0. 1 se a aresta está saindo do vértice
                              // e -1 se ela está chegando, e 0 se n tem conexão entre o vértice e a aresta 
};
