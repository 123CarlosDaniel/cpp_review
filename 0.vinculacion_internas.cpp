#include <iostream>

// vinculacion externa por defecto
// definir la misma variable en otro archivo causara error en el linker
int n = 2;

// vinculacion interna por defecto
constexpr int i {};
const int a {};
// vinculacion interna con static
static int w{};
static void m(){};

int main() {
}