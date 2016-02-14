/*
*problem link: http://cpbook.subeen.com/2013/01/change-digits.html
this is recursive approach and interesting one..................
*/

#include <stdio.h>
#include <conio.h>

int rec2(int);

int main() {
  int val;
  printf(">>> ");
  scanf("%i", &val);
  int out = rec2(val);
  printf("%i\n", out);
  getch();
  return 0;
}

int rec2(int val) {
  int buff, rem;
  if (val == 0) {return 0;} // initial buff value
  rem = val % 10; //sub solution
  val = val / 10; // sub problem
  buff = rec2(val);
  if (rem % 2 == 0) { buff = (buff * 10) + (rem + 1); }
  else { buff = (buff * 10) + (rem - 1); }
  return buff;
}
