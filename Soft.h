#ifndef DRINKS__SOFT_H_
#define DRINKS__SOFT_H_
#include "Bottled Drinks.h"

class Soft : public BottledDrinks {
 public:
  Soft(const std::string &name, double volume, double sugar);
  [[nodiscard]] virtual double getSugar() const;
  Soft() = delete;
  Soft(Soft &drink) = delete;
  Soft(Soft &&drink) = delete;
  Soft operator=(Soft drink) = delete;
  ~Soft() override = default;

 private:
  double sugar_;
};

#endif //DRINKS__SOFT_H_