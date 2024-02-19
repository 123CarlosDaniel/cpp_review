#include <iostream>

class Padre{
public:
  std::string m_name;
  Padre(std::string name): m_name{name}{}
};

class Hijo: public Padre{
private:
  int age;
public:
  Hijo(std::string name, int age): Padre{name}, age{age} {}

  friend std::ostream& operator<<(std::ostream& os, const Hijo& h) {
    os << "Hijo : " << h.m_name << " tiene " << h.age << " años\n";
    return os;
  }
};
int main() {
  Hijo h{"pepe", 10};
  std::cout << h;
}