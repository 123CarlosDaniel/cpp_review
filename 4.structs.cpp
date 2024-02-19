#include <iostream>

struct myStruct {
  int a;
  std::string name;
  double id;
};


int main() {
  //* inicializacion agregada
  
  myStruct m = {1, "hoal", 2.0}; //% inicializacion por copia 
  myStruct m1(1, "hoal", 2.0); //% inicializacion directa(c++20)
  myStruct m2{1, "hoal", 2.0}; //% inicializacion uniforme o de lista(preferida)


}