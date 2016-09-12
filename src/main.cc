#include <iostream>
#include "person.h"

int main(int argc, char *argv[]) {
  Person p{"Bobby"};

  std::cout << "Hello, " << p.GetName() << "!" << std::endl;
}
