#ifndef CELULATEXTEDIT_H
#define CELULATEXTEDIT_H
#include "celula.h"
#include <QtGui/QLineEdit>

class CelulaTextEdit : QLineEdit
{
private:
    Celula * celula;
public:
    void setCelula(Celula *);
};

#endif // CELULATEXTEDIT_H
