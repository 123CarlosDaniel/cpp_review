#include <iostream>

class Padre{
public:
  Padre(int id) {
    std::cout << "constructor Padre -> id : " << id << "\n";
  }
};


class Hijo1 : virtual public Padre {
public:
  Hijo1(int id): Padre{id} {
    std::cout << "constructor Hijo1 \n";
  }
};

class Hijo2 : virtual public Padre {
public:
  Hijo2(int id): Padre{id} {
    std::cout << "constructor Hijo2 \n";
  }
};

class Nieto: public Hijo1, public Hijo2 {
public:
  Nieto(int id): Padre{id}, Hijo1{id}, Hijo2{id} {
    std::cout << "constructor nieto \n";
  }
};

// * al añadir virtual en la declaracion de herencia de sus clases la clase Padre 
// * se convierte a virtual 
int main() {
  Nieto n{2};
  
}