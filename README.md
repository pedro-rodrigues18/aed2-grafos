# Estruturas de Dados para Grafos
Estruturas de dados para grafos onde foi implementado as estruturas dos três tipos de representação mais utilizados.

- Lista de Adjacência
- Matriz de Adjacência
- Matriz de Incidência

## Lista de Adjacência

O vetor de listas de adjacência de um grafo tem uma lista encadeada associada com cada vértice do grafo.
A lista associada com um vértice v contém todos os vizinhos de v. Portanto, a lista do vértice v representa o leque de saída de v.

O espaço ocupado pelo vetor de listas de adjacência é proporcional ao número de vértices e arcos do grafo, ou seja, proporcional ao tamanho do grafo.
Portanto, listas de adjacência são uma maneira econômica de representação.

Para grafos esparsos, listas de adjacência ocupam menos espaço que uma matriz de 
adjacências.

Por isso a estrutura por lista de adjacência é considerada uma boa opção quando temos grafos esparsos e não há arestas múltiplas.

Em geral, os vértices em cada lista de adjacências estão armazenados em uma ordem arbitrária.

A estrutua é composta de um vetor do tipo lista onde cada posição do vetor possui uma lista encadeada.

![lista_adjacencia](https://user-images.githubusercontent.com/53882790/109370509-61af7300-787f-11eb-8665-8d32626cef90.png)

<b>Fonte:</b> Imagem retirada do slide produzido pelo professor Michel Pires, CEFET-MG Unidade de Divinópolis-MG.

## Matriz de Adjacência

A matriz de adjacências de um grafo é uma matriz de 0's e 1's com colunas e linhas indexadas pelos vértices.

Estrutura aplicada para corrigir a desvantagem apresentada pela lista de adjacências, bem como para prover uma melhor forma de representar grafos densos.

Em suma, a matriz de adjacências representa com sua estrutura a relação de adjacência existente entre dois vértices (u, v) quaisquer.

A matriz de adjacências nos permite, por uma forma muito rápida, verificar se uma dada aresta pertence ao grafo ou não. Logo, se a finalidade do problema 
envolve muita pesquisa, essa estrutura se torna mais adequada para este contexto.

![matriz_adjacencia](https://user-images.githubusercontent.com/53882790/109370933-39c10f00-7881-11eb-8ecb-ea2cc1620b1c.png)

<b>Fonte:</b> Imagem retirada do slide produzido pelo professor Michel Pires, CEFET-MG Unidade de Divinópolis-MG.

## Matriz de Incidência

Uma matriz de incidência representa computacionalmente um grafo através de uma matriz bidimensional, onde uma das dimensões são vértices e a outra dimensão são 
arestas.

Essa estrutura é pouco utilizada em literatura para a representação, mas, ainda sim, é uma outra opção para a representação de grafos densos.

![matriz_incidencia](https://user-images.githubusercontent.com/53882790/109371138-485bf600-7882-11eb-9401-cdd8774c8221.png)

<b>Fonte:</b> Imagem retirada do slide produzido pelo professor Michel Pires, CEFET-MG Unidade de Divinópolis-MG.

## Fontes

- [Estruturas de dados para grafos - IME-USP](https://www.ime.usp.br/~pf/algoritmos_para_grafos/aulas/graphdatastructs.html)
- [Estrutura de Dados descomplicada em linguagem C](https://www.amazon.com.br/Estrutura-Dados-Descomplicada-Linguagem-Backes/dp/8535285237)
- [Grafo - Wikipédia](https://pt.wikipedia.org/wiki/Teoria_dos_grafos)
