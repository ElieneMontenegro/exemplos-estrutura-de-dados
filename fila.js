//no js não dá para implementar filas de forma nativa

//podemos usar a ideia de fila com um vetor mesmo, veja:
const fila = [];

//adicionando novos elementos ao final
fila.push("Steve");
//primeiro adiciona ao final (0)
fila.push("Mark");
//depois adiciona ao final (0, 1)
fila.push("Lil");
//depois adiciona ao final (0, 1, 2)
fila.push("Ada");
//depois adiciona ao final (0, 1, 2, 3)

//removendo os elementos do início
//enquanto a fila não está vazia
while (fila.length != 0) {
  //visualiza e remove o primeiro
  console.log(fila.shift());
}

//lembra de me seguir no insta @lilamontenegro
