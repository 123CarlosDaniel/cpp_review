#include <iostream>

template<typename T>
class Auto_ptr2 {

public:
  T* m_ptr;
  Auto_ptr2(T* ptr = nullptr): m_ptr{ptr} {}
  ~Auto_ptr2() {
    delete m_ptr;
  }

  // * implementa la semantica de movimiento
  Auto_ptr2(Auto_ptr2& a) {
    m_ptr = a.m_ptr;
    a.m_ptr = nullptr;
  }

  // * operador de asignacion con semantica de movimiento
  Auto_ptr2& operator=(Auto_ptr2& a) {
    if (&a == this) {
      return *this;
    }
    delete m_ptr;
    m_ptr = a.m_ptr;
    a.m_ptr = nullptr;
    return *this;
  }

  T& operator*() const {return *m_ptr;}
  T* operator->() const {return m_ptr;}

  bool isNull() {
    return m_ptr == nullptr;
  }
}; 

class Recurso{
public:
  void hablar() {
    std::cout << "hola desde recurso\n";
  }
  Recurso() {
    std::cout << "Recurso creado\n";
  }
  ~Recurso() {
    std::cout << "Recurso destruido\n";
  }
};

int main() {
  Auto_ptr2 ptr{new Recurso()};
  Auto_ptr2 ptr2 = ptr;
  std::cout << std::boolalpha;
  std::cout << ptr.isNull() << '\n';
  std::cout << ptr2.isNull() << '\n';
  ptr->hablar();
  ptr2->hablar();
}

