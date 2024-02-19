#include <iostream>
#include <memory>

std::unique_ptr<int> createInt(int val) {
  auto ptr = std::make_unique<int>(val);
  return ptr;
}

class Recurso {
int num{};
std::string name{};  
public:
  Recurso(int n, std::string name): num{n}, name{name} {}
  void hablar() {
    std::cout << "num : " << num << ", name : " << name << '\n';
  }
};

int main() {
  std::unique_ptr<int> ptr = std::make_unique<int>();
  *ptr = 2;
  std::cout << *ptr << '\n';

  auto res = createInt(12);
  std::cout << *res << " puntero " << res << '\n';

  // auto myRecurso = std::unique_ptr<Recurso>(new Recurso(1, "pepe"));
  auto myRecurso = std::make_unique<Recurso>(1, "pepe");
  myRecurso->hablar();
  

}