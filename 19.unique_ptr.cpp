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
  void hablar() {
    std::cout << "recurso ejecutando accion\n";
  }
};

int main() {
  std::unique_ptr<Recurso> res1 {new Recurso()};
  std::unique_ptr<Recurso> res2{};

  std::cout << "res1 es " << (res1 ? "no null": "null") << '\n';
  std::cout << "res2 es " << (res2 ? "no null": "null") << '\n';

  res2 = std::move(res1);
  std::cout << "Propiedad transferida\n";
  std::cout << "res1 es " << (res1 ? "no null": "null") << '\n';
  std::cout << "res2 es " << (res2 ? "no null": "null") << '\n';
  res1->hablar();
}