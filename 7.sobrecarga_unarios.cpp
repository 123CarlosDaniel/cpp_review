#include <iostream>

class Punto{
private:
  double m_x{};
  double m_y{};
  double m_z{};

public:
  Punto() = default;
  Punto(double x, double y, double z): m_x{x}, m_y{y}, m_z{z}{}

  // * funcion miembro
  bool operator!() const;

  explicit operator bool() const {
    return (m_x == 0 && m_y == 0 && m_z == 0);
  }

};

bool Punto::operator!() const {
  return (m_x == 0 && m_y == 0 && m_z == 0);
}

int main() {
  Punto p{};

  if (!p) {
    std::cout << "el punto esta en el origen \n";
  } else {
    std::cout << "el punto no esta en el origen \n";
  }

  if (p) {
    std::cout << "el punto esta en el origen \n";
  }
}