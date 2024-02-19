#include <iostream>

class PadrePuro {
protected:
std::string m_nombre{};
public:
  PadrePuro(const std::string& n): m_nombre{n}{}
  const std::string& getNombre() const {return m_nombre;}

  //* funcion virtual pura
  virtual const char* hablar() const = 0;
};

class Derivada: public PadrePuro {
public:
  Derivada(const std::string& n): PadrePuro{n} {

  }
  const char* hablar() const {
    return "hola";
  }
};


int main() {
  // * resulta error si no se da un cuerpo al metodo hablar
  Derivada d{"aahola"};
  std::cout << d.getNombre() << '\n';
  std::cout << d.hablar();
}

// * Clases abstractas: clases que tienen una o mas funciones virtuales puras
// * interfaces: clases que solo contienen los prototipos de las funciones, sin datos
// * ni implementacion, siempre son clases abstractas, no tienen variables miembro