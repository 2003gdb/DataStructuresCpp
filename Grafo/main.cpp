#include <iostream>
#include "graph.h"

int main() {
    Graph<int> grafo;
    ListaLigada<int> path;

    if (!grafo.loadFile("dungeon.txt")){
        cerr << "No se pudo cargar" << endl;
    }

    for (int i = 0; i < grafo.getSize(); i++) {
        grafo.setVertex(i, i);
    }

    grafo.DFS(0);
    grafo.DFS(3);

    grafo.BFS_Best_Path(16, 30, path);

    path.imprimirLista();

    if (!grafo.saveFile("dungeon.txt")){
        cerr << "No se pudo cargar" << endl;
    }
    return 0;
}
