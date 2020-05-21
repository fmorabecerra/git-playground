#include "stdio.h"
#include "stdbool.h"

void array_fun(char* data){
  printf("data[0]: %d\n", data[0]);
  printf("data[1]: %d\n", data[1]);
}

int main(int argc, char const *argv[]) {
  printf("Hello, World!\n");

  // Test adding bools
  bool bool1 = true;
  bool bool2 = true;

  int sum = bool1;
  sum += bool2;

  printf("The sum is: %d\n", sum);

  int my_int;
  char my_char;

  printf("Size of my_int32: %d\n", (int)sizeof(my_int));
  printf("Size of my_char %d\n", (int)sizeof(my_char));

  int id1   = 0x00000320;
  char val1 =       0x01;

  printf("Entry ID: %#010x,  Entry Value: %#04x\n", id1, val1);

  struct my_struct{
    int   val1;
    short val2;
    char  val3;
  };

  struct my_struct values;
  values.val1 = 31;
  values.val2 = 32;
  values.val3 = 33;

  printf("Address of &values: %p\n", &values);
  printf("Struct values member val1: %d\n", values.val1);
  printf("val1 address (&values.val1): %p\n", &values.val1);
  printf("val1 address &(values.val1): %p\n", &(values.val1));
  // Value 2
  printf("Struct values member val2: %d\n", values.val2);
  printf("val2 address (&values.val2): %p\n", &values.val2);
  printf("val2 address &(values.val2): %p\n", &(values.val2));

  struct my_struct *p_values;
  p_values = &values;
  printf("Address p_values: %p\n", p_values);
  printf("Address *p_values: %p\n", *p_values);
  printf("Address &p_values: %p\n", &p_values);
  printf("val1 address (p_values->val1): %p\n", p_values->val1);
  printf("val1 address ((*p_values).val1): %p\n", (*p_values).val1);
  printf("val1 address (&p_values->val1): %p\n", &p_values->val1);
  // Value 2
  printf("val2 address (p_values->val2): %p\n", p_values->val2);
  printf("val2 address ((*p_values).val2): %p\n", (*p_values).val2);
  printf("val2 address (&p_values->val2): %p\n", &p_values->val2);
  printf("val2 address &(p_values->val2): %p\n", &(p_values->val2));

  char data[] = {3,4,5};
  array_fun(&data);

  int variable = {{2,1,2,1,2}};
  printf("variable: %x\n", variable);
  printf("variable: %p\n", variable);
  printf("variable: %d\n", variable);

  return 0;
}
