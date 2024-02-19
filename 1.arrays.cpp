#include <iostream>
#include <cmath>
#include <random>
#include <iterator>

int main() {

  int* parr[2]; //* array de punteros int
  parr[0] = new int(2);
  parr[1] = new int(3);
  // for(auto n : parr) {
  //   std::cout << *n << ' ';
  // }
  // std::cout << '\n';

  // * array estatico en tiempo en tiempo de ejecucion
  std::cout << "ingrese el numero de elementos: ";
  int n;
  std::cin >> n;
  int* dynamic_arr = new int[n];
  
  // * random array
  std::random_device seed_gen;

  auto gen = std::mt19937(seed_gen());

  auto dist = std::uniform_int_distribution<>(1, 100);

  for(auto i = 0; i != n; i++) {
    dynamic_arr[i] = dist(gen);
  }  
  std::cout << "\nrandom numbers\n";
  for(auto i = dynamic_arr; i != dynamic_arr + n; i++) {
    std::cout << *i << ' ';
  }
}