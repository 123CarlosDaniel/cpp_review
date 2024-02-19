#include <iostream>

class Euros{
private:
int m_euros{};
public:
  Euros(int n): m_euros{n} {}

  int getEuros() const{
    return m_euros;
  }

  friend std::ostream& operator<<(std::ostream& os, const Euros& e) {
    os << "Euros: " << e.m_euros;
    return os;
  }
};

// std::ostream& operator<<(std::ostream& os, const Euros& e) {
//   os << "Euros: " << e.getEuros();
//   return os;
// }

// * preferible usar funciones normales a amigas
Euros operator+(const Euros& e1, const Euros& e2) {
  return {e1.getEuros() + e2.getEuros()};
}

int main() {
  Euros e {2};
  std::cout << e + 2; 
}