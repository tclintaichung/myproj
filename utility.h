#ifndef UTILITY_H
#define UTILITY_H
#include <iostream>
using namespace std;

class Element {
  private:
    string name;
    int id;
  public:
    Element(string name, int id) {
      this->name = name;
      this->id = id;
    };
    string get_name() {
      return name;
    };
    int get_id() {
      return id;
    }
};
class Module: public Element {
  public:
    Module(string name, int id)
      : Element(name, id) {
      cout << "Derived class" << endl;
      }
};
double celsius_to_fahrenheit(double);
double fahrenheit_to_celsius(double);
#endif // !UTILITY_H
#define UTILITY_H