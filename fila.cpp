#include <iostream>
//lembre de acrescentar a biblioteca de queue (fila)
#include <queue>

using namespace std;

int main() {
    //uma fila de inteiros
    queue<string> fila;

    //adicionando novos elementos ao final
    fila.push("Steve");
    //primeiro adiciona ao final (0)
    fila.push("Mark");
    //depois adiciona ao final (0, 1)
    fila.push("Lil");
    //depois adiciona ao final (0, 1, 2)
    fila.push("Ada");
    //depois adiciona ao final (0, 1, 2, 3)


    //removendo e visualizando os elementos do topo 
    //enquanto a fila não está vazia (.empty é método da própria biblioteca de queue)
    while(!fila.empty()) {
        //visualiza o primeiro lugar dela (.front é método da própria biblioteca de queue)
        cout << fila.front() << endl;
        //remove da frente da fila
        fila.pop();
    }

    //lembra de me seguir no insta @lilamontenegro
.
}