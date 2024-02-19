#include <iostream>

class Primera {
public:
  virtual std::string_view getNombre() {
    return "Primera";
  }
};

class Segunda: public Primera {
public:
  std::string_view getNombre() override final {
    return "Segunda";
  }
};

class Tercera final: public Segunda{
public:
  // *error debido al final
  // std::string_view getNombre() override {
  //   return "tercera";
  // }
};

// * error debido al final en la clase Tercera
// class Cuarta : public Tercera {}

int main() {

}