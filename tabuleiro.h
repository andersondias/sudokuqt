#ifndef TABULEIRO_H
#define TABULEIRO_H
#include "grupo.h"

class Tabuleiro {
  private:
    Celula * celulas;
    Grupo * colunas[9];
    Grupo * linhas[9];
    Grupo * quadrados[9];
  public:
    Tabuleiro(Celula *);
    bool is_solved();
};
#endif // TABULEIRO_H
