#include <iostream>

// * sobrecarga con funciones amigas
class Euros{
public:
  int m_euros{};
  Euros(int n): m_euros{n} {}

  friend Euros operator+(const Euros& e1, const Euros& e2) {
    return Euros{e1.m_euros + e2.m_euros};
  }
  friend Euros operator-(const Euros& e1, const Euros& e2);
  friend std::ostream& operator<<(std::ostream& os, const Euros& e) {
    os << "Euros: " << e.m_euros;
    return os;
  }
  friend int operator*(const Euros& e1, const Euros& e2) {
    return e1.m_euros * e2.m_euros;
  }
};

Euros operator-(const Euros& e1, const Euros& e2) {
  return {e1.m_euros - e2.m_euros};
}

int main() {
  Euros e {9};
  std::cout << e + 2 << '\n';
  std::cout << e - 2 << '\n';
  std::cout << e * 2 << '\n';
}