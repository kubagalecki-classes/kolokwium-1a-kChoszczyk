#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
struct Penne : public Makaron
{
  double ileMaki(unsigned P) const override
  {
    return P;
  }
};
// tutaj definicja metody gotujMakaron
static Makaron* Makaron::gotujMakaron(const std::string& T)
{
  if(T.front == T.back)
  {
    Tagliatelle* ret = new Tagliatelle{3.14, 0.42, 0.1};
  }
  else
  {
    Penne* ret = new Penne{};
  }
  return ret;
}