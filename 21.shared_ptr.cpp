#include <iostream>
#include <memory>

class Recurso {
 
public:
  Recurso() {
    std::cout << "Recurso adquirido\n";
  }
  ~Recurso() {
    std::cout << "Recurso destruido\n";
  }
};

int main() {
  Recurso* ref{new Recurso};

  std::shared_ptr<Recurso> ptr1{ref};
  {
    std::shared_ptr<Recurso> ptr2{ref}; //* no es posible
    std::cout << "Eliminando un puntero shared\n";
  }
  std::cout << "Eliminando otro puntero shared\n";
}