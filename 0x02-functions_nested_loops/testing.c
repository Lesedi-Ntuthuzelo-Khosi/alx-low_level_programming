#include <stdio.h>
void print_long(long value) {
   if(value != 0) {
      print_long(value/10);
      putchar((value%10) + '0');
   }
}
void main(void) {
   long a = 7;
   print_long(a);
}
