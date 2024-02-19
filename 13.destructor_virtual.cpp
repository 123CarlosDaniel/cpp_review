#include <iostream>

class Padre{
public:
  virtual ~Padre() {
    std::cout << "Llamando a ~Padre()\n";
  }
};

class Derivada: public Padre{
private:
  int* m_array;
public:
  Derivada(int t) : m_array{new int[t]}{}
  ~Derivada() {
    std::cout << "Llamando a ~Derivada()\n";
    delete[] m_array;
  }
};

int main() {
  Derivada* d{new Derivada(2)}; 
  Padre* p{d};

  delete p;
  std::cout << "After";
}