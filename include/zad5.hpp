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
  std::sort(beg, ender, [](T a, T b){double a1 = a -> ileMaki();
  double b1 = b -> ileMaki; return a1>b1;})
}
