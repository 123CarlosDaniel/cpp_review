#include <iostream>

template<typename T>
class Almacen8{
private:
  T m_array[8];
public:
  void set(int indice, const T& val){
    m_array[indice] = val;
  }

  const T& set(int indice) const {
    return m_array[indice];
  }
};

template<>
class Almacen8<bool> {
private:
  unsigned char m_datos{};

public:
  void set(int indice, bool val) {
    auto mask{1 << indice};

    if (val) {
      m_datos |= mask;
    }
    else {
      m_datos &= ~mask;
    }
  }

  bool get(int ind) {
    auto mask{1 << ind};
    return (m_datos & mask);
  }
};

int main() {
  Almacen8<bool> boolAlmacen;

  for(int cont{}; cont < 8; cont++) {
    boolAlmacen.set(cont, cont&3);
  }

  std::cout << std::boolalpha;

  for(int cont{}; cont < 8; cont++) {
    std::cout << boolAlmacen.get(cont) << '\n';
  }
}