#include <iostream> 

class Euros{
private:
int m_euros{};
public:
  Euros(int n): m_euros{n} {}

  // * funcion miembro
  Euros operator+(const Euros& e) {
    return {e.m_euros + m_euros};
  }

  friend std::ostream& operator<<(std::ostream& os, const Euros& e) {
    os << "Euros: " << e.m_euros;
    return os;
  }
};

int main() {
  Euros e{2};
  std::cout << e + 2;
}

/**
 ** sobrecarga con funciones miembro 
 *% asignacion(=)
 *% subindice([]) 
 *% llamada a funcion(())
 *% seleccion m.puntero(->)
 *% Para sobrecargar operadores unarios
 *% Para sobrecargar operadores binarios que modifican
 *% el operando a la izquierda (+=) y podemos modificar la 
 *% definicion del operando izquierdo
 */

/**
 ** sobrecarga con funciones normales o amigas
 *% Para sobrecargar operadores binarios que no modifican su 
 *% operando izquierdo 
 *% Para sobrecargar operadores binarios que modifican su operando 
 *% izquierdo, pero a los que no podemos agregar miembros a la definicion
 *% de clase del operando izquierdo como operador<< 
 */