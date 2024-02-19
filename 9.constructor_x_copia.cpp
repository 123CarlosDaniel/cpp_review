#include <iostream>

class Fraccion {
private:
  int m_num{};
  int m_den{};

public:
  Fraccion(int num, int den): m_num{num}, m_den{den}{}

  // * constructor por copia
  Fraccion(const Fraccion& f) 
    : m_num{f.m_num}, m_den{f.m_den}{}

  friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);
};

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
  os << f.m_num << '/' << f.m_den << '\n';
  return os;
}

int main() {
  Fraccion f{1,2};
  std::cout << f;
  Fraccion f2{f};
  std::cout << f2;
}