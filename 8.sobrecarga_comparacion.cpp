#include <iostream>
#include <cmath>

class Punto{
private:

public:
  double m_x{};
  double m_y{};
  double m_z{};
  Punto() = default;
  Punto(double x, double y, double z): m_x{x}, m_y{y}, m_z{z}{}

  //* funcion miembro
  bool operator>(const Punto& p) {
    const double d1 = std::pow(m_x, 2) + std::pow(m_y, 2) + std::pow(m_z, 2);
    const double d2 = std::pow(p.m_x, 2) + std::pow(p.m_y, 2) + std::pow(p.m_z, 2);
    return d1 > d2;
  }

  // * funcion amiga
  friend bool operator==(const Punto& p1, const Punto& p2);
};

//* funcion normal
bool operator<(const Punto& p1, const Punto& p2) {
  const double d1 = std::pow(p1.m_x, 2) + std::pow(p1.m_y, 2) + std::pow(p1.m_z, 2);
  const double d2 = std::pow(p2.m_x, 2) + std::pow(p2.m_y, 2) + std::pow(p2.m_z, 2);
  return d1 < d2;
}

bool operator==(const Punto& p1, const Punto& p2) {
  const double d1 = std::pow(p1.m_x, 2) + std::pow(p1.m_y, 2) + std::pow(p1.m_z, 2);
  const double d2 = std::pow(p2.m_x, 2) + std::pow(p2.m_y, 2) + std::pow(p2.m_z, 2);
  return d1 == d2;
}

int main() {
  Punto p1 {1,0,0};
  Punto p2 {2,0,0};
  std::cout << std::boolalpha;
  std::cout << (p1 > p2) << '\n';
  std::cout << (p1 == p2) << '\n';
}