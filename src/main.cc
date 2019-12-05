#include <iostream>
#include "defs.h"

using namespace min::fluids;

int main() {
  Vector2u vec = Vector2u(1, 1);
  Vector3 vec3 = Vector3f(1, 2, 3);
  std::cout << vec.x() << std::endl;
  std::cout << vec3.x() << std::endl;
  return 0;
}