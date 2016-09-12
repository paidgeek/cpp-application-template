#ifndef PROJECTNAME_PERSON_H
#define PROJECTNAME_PERSON_H

#include <string>

class Person {
private:
std::string name_;
public:
    Person(std::string name);
    std::string& GetName();
};

#endif
