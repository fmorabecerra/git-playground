#include "stdio.h"
#include "stdbool.h"

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  printf("Hello, World!\n");

  // Test adding bools
  bool bool1 = true;
  bool bool2 = true;

  int sum = bool1;
  sum += bool2;

  printf("The sum is: %d\n", sum);

  cout << "Running CPP app!" << endl;

  return 0;
}
