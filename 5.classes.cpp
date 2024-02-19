#include <iostream>

class MyClass {
private:
  const int m_valor{};
  std::string name{};
public:
  static int s_valor;
  static inline int s_otro_valor{}; //* desde c++17

  MyClass(){}
  MyClass(int n) : m_valor(n)
  {
    name = "hola";
  }

  static int getValor() {
    return s_valor;
  }
};

int MyClass::s_valor{12};

int main() {
  std::cout << MyClass::getValor();
}