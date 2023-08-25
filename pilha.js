//no js não dá para implementar pilhas de forma nativa
//podemos usar a ideia de pilha com um vetor mesmo, veja:

const pilha = [];

//adicionando novos elementos ao topo
pilha.push(1);
//primeiro adiciona 1 ao topo (1)
pilha.push(2);
//depois adiciona 2 ao topo (2, 1)
pilha.push(3);
//depois adiciona 3 ao topo (3, 2, 1)

//removendo os elementos do topo
//enquanto a pilha não está vazia
while (pilha.length != 0) {
  //visualiza e remove do topo
  console.log(pilha.pop());
}

//lembra de me seguir no insta @lilamontenegro
