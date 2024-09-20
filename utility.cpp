#include "utility.h"

double celsius_to_fahrenheit(double cels) {
  return cels * 9/ 5 + 32.;
}

double fahrenheit_to_celsius(double fahs) {
  return (fahs - 32) * 5/ 9.;
}
