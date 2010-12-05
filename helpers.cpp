#include <time.h>
#include <cstdlib>

using namespace std;

//retorna um número entre 0 e o parâmetro max - 1
int random(int max)
{
  srand((unsigned)time(NULL));
 
  return int((double(rand())/RAND_MAX)*max);
}

//retorna o inteiro de um char
int chr_to_int(char chr)
{
  return (int)chr - 48;
}

