#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& vec)
{
  double M = 0;
  int num = 0;
  for(auto it = vec.rend(); it!=vec.rend(); it++)
  {
    num++;
    M+=it -> ileMaki(num);
  }
  if(M>100)
  {
    int ex=1324;
    throw ex;
  }
  else if(M>50)
  {
    double ex = 124.14324;
    throw ex;
  }
  else
  {
    return M;
  }
}