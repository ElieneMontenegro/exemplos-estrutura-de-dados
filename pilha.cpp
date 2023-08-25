#include <iostream>
//lembre de acrescentar a biblioteca de stack (pilha)
#include <stack>

using namespace std;

int main() {
    //uma pilha de inteiros
    stack<int> pilha;

    //adicionando novos elementos ao topo
    pilha.push(1);
    //primeiro adiciona 1 ao topo (1)
    pilha.push(2);
    //depois adiciona 2 ao topo (2, 1)
    pilha.push(3); 
    //depois adiciona 3 ao topo (3, 2, 1)


    //removendo e visualizando os elementos do topo 
    //enquanto a pilha não está vazia
    while(!pilha.empty()) {
        //visualiza o topo
        cout << pilha.top() << endl;
        //remove do topo
        pilha.pop();
    }

    //lembra de me seguir no insta @lilamontenegro

}