#include "person.h"

Person::Person(std::string name) : name_(name) {}

std::string &Person::GetName() {
  return name_;
}
