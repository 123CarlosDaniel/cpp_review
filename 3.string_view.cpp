#include <string_view>
#include <iostream>

void imprimirS(std::string s) {
  std::cout << s << '\n';
}

void imprimirSV(std::string_view s) {
  std::cout << s << '\n';
}

int main() {
  std::string_view s{"hola"};
  // imprimirS(s); falla
  imprimirSV(s);
  std::string s2{"hehe"};

  imprimirS(s2);
  imprimirSV(s2); //* conversion implicita
  imprimirS(static_cast<std::string>(s)); //* conversion explicita
}
