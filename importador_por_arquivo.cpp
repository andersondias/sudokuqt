#include <iostream>
#include <fstream>
#include "helpers.h"
#include "celula.h"
#include "importador_por_arquivo.h"

Celula * ImportadorPorArquivo::importar()
{
  FILE* file = fopen("/home/anderson/workspace/sudoku/jogos", "r");

  //o arquivo de jogos tem 150 configurações iniciais disponíveis
  int line_number = random(150);
  char line [83];
  //lê linhas até ler a linha sorteada
  for (int i = 0; i <= line_number; i++) {
    fgets(line, sizeof(line), file);
  }

  Celula * celulas[81];

  //cria as 81 celulas
  int valor_nova_celula;
  Celula * nova_celula;

  for (int i = 0; i < 81; i++) {
    valor_nova_celula = chr_to_int(line[i]);

    //se a célula não for vazia, cria ela como fixa
    if (valor_nova_celula) {
      nova_celula = new Celula(valor_nova_celula);
    } else { //senão, cria como mutável
      nova_celula = new Celula();
    }

    celulas[i] = nova_celula;
  }

  return * celulas;
}
