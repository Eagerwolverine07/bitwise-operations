#include <stdio.h>

int main() {
  unsigned int a = 60; 
  unsigned int b = 13; 
  unsigned int result;

  // bitwise AND
  result = a & b; 
  printf("a & b = %d\n", result);

  // bitwise OR
  result = a | b; // 
  printf("a | b = %d\n", result);

  // bitwise XOR
  result = a ^ b; 
  printf("a ^ b = %d\n", result);

  // bitwise NOT
  result = ~a; 
  printf("~a = %u\n", result);

  // bitwise left shift
  result = a << 2; 
  printf("a << 2 = %d\n", result);

  // bitwise right shift
  result = a >> 2; 
  printf("a >> 2 = %d\n", result);

  return 0;
}
