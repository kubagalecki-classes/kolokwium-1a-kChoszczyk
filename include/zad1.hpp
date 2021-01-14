#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
struct Makaron
{
  virtual double ileMaki(unsigned) const = 0;
  //virtual static Makaron* gotujMakaron(const std::string& T){};
};

// Zad1
// tutaj definicja klasy Tagliatelle
struct Tagliatelle : public Makaron
{
  Tagliatelle(){L = 0.5; W = 0.5; R = 0.5;};
  Tagliatelle(double x, double y, double z) : L(x), W(y), R(z) {};
  
  double ileMaki(unsigned P) const override
  {
    double masa = P*L*W*(1. - R) * C;
    return masa;
  }

  private:
  double L;
  double W;
  double R;
  static const double C;

};