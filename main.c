#include <stdio.h>

int main(void) {

  char x = 2;

  for (; x++; );
  printf("x = %4d\n", x);

  char a = 127;
  printf("a = %4d\n", a++);
  printf("a = %4d\n", a++);
  printf("a = %4d\n", a++);

  printf("Hello");
  char s[] = { '\b', '\t', '\r', '\n', };
  size_t s_l = sizeof(s) / sizeof(s[0]);
  for (size_t i = 0; i < s_l; ++i) {
    printf("%c", s[i]);
  }
  printf("Hello\b\t\r\n");

  printf("Hello");
  char S[] = { '\b', '0', '\t', '1', '\r', '2', '\n', };
  size_t S_l = sizeof(S) / sizeof(S[0]);
  for (size_t i = 0; i < S_l; ++i) {
    putchar(S[i]);
  }
  printf("Hello\b0\t1\r2\n");

  char arrAlpha[] = "ABCDEFGHIJ";
  printf("%s %zu\n", arrAlpha, sizeof(arrAlpha) / sizeof(arrAlpha[0]));

  return 0;
}
