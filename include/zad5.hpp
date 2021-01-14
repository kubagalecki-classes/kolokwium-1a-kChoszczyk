#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template <typename T>
void sortujTagliatelle(T beg, T ender)
{

  std::sort(beg, ender, [](Tagliatelle* a, Tagliatelle* b){double a1 = a -> ileMaki(1);
  double b1 = b -> ileMaki(1); return a1<b1;});
}
