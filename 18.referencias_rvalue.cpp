#include <iostream>

// * solo pueden ser creados por valores r-values

void compara(const int& ref) {
  std::cout << "referencia l-value a const\n";
}

void compara(int&& ref) {
  std::cout << "referencia r-value\n";
}

int main() {
  int x{5};
  int& lref{x};
  // int&& rref{x}; error
  int&& rref{2};

  compara(x);
  compara(2);

}