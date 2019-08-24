#include <iostream>
#include "helper.h"
#include "../include/mymathclass.h"

int main() {
  MyMathClass obj1;
  std::cout << "Addition Result:" << obj1.add(1,1) << std::endl;
  std::cout << "MUltiplication Result:" << obj1.multiply(5,5) << std::endl;
}
