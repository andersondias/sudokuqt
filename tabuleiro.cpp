#include "tabuleiro.h"

Tabuleiro::Tabuleiro(Celula * celulas)
{
  this->celulas = celulas;

  //cria as 9 linhas, colunas e quadrados
  for (int i = 0; i < 9; i++) {
    colunas[i] = new Grupo();
    linhas[i] = new Grupo();
    quadrados[i] = new Grupo();
  }

  for (int i = 0; i < 81; i++) {
    //associa cada célula criada a sua linha, coluna, e quadrado, colocando no lugar certo em cada grupo
    int linha  = i / 9;
    int coluna = i % 9;
    int quadrado = (i / 27) * 3 + (coluna / 3);
//    linhas[linha]->set_celula(celulas[i], coluna);
//    colunas[coluna]->set_celula(celulas[i], linha);
//    quadrados[quadrado]->set_celula(celulas[i], (linha % 3) * 3 + (coluna % 3));
  }
}

bool Tabuleiro::is_solved()
{
  bool solved = true;

  //o tabuleiro está resolvido quando todos os quadrados, colunas e linhas estiverem também
  int i = 0;
  while(solved && i < 9) {
    solved = solved && linhas[i]->is_solved() &&
             colunas[i]->is_solved() &&
             quadrados[i]->is_solved();

    i++;
  }

  return solved;
}
