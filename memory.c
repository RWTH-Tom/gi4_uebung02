// gcc -g -Wall -m32 -O0 -o memory memory.c
#include <stdio.h>

struct bigone {
    char index;         /* =7 */
    int avalue;         /* = -512 */
    short shortvalue;   /* =127 */
    char space;         /* =32 */
    short sarray [2];   /* = {0x123, 0x456} */
    int anothervalue;   /* = 4096 */
};

int main(int argc, char* argv[]) {
  int dead = 1;

  struct bigone test;
  test.index = 7;
  test.avalue = -512;
  test.shortvalue = 127;
  test.space = 32;
  test.sarray[0] = 0x123;
  test.sarray[1] = 0x456;
  test.anothervalue = 4096;

  char msg[] = "Hello World!";

  return 0;
}
