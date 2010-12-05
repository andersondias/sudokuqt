#ifndef GRUPO_H
#define GRUPO_H

#include "celula.h"

class Grupo {
  private:
    Celula * celulas[9];
  public:
    Grupo();
    Celula * get_celula(int posicao);
    void set_celula(Celula * celula, int posicao);
    bool has_any_repeat();
    bool is_solved();
};

#endif // GRUPO_H
