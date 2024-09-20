#include <iostream>
#include "utility.h"
using namespace std;

int main() {
  char temp_str[20];
  Element uti1("tclin", 1222);
  cout << "Hello World!" << endl;
  cout << "Your name: " << uti1.get_name() << endl;
  double temp = 28.0;
  sprintf(temp_str, "%.2f", celsius_to_fahrenheit(temp));
  cout << "Temperature: " << temp_str << " F" << endl;
  temp = 100;
  
  sprintf(temp_str, "%.2f", fahrenheit_to_celsius(temp));
  cout << "Temperature: " << temp_str << " C" << endl;
  Module mod1("system", 23);
  cout << mod1.get_name() << endl;
  return 0;
}