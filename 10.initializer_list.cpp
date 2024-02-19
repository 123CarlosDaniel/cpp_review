#include <iostream>
#include <initializer_list>

class Notas{
private:
  int* notas{};
  int m_largo{};

public:
  Notas(int largo): m_largo{largo}{
    notas = new int[largo]{};
  }

  Notas(std::initializer_list<int> lista): Notas(lista.size()) {
    int i{};
    for (auto n : lista) {
      notas[i] = n;
      i++;
    }
  }
  ~Notas(){
    delete[] notas;
  }

  int size() {
    return m_largo;
  }

  int& operator[](int n) {
    return notas[n];
  }
};

int main() {
  Notas notas{1,2,3,4,5,5};

  for(int i{}; i < notas.size(); i++) {
    std::cout << notas[i] << ' ';
  }
}