#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
  char password[11] = {0};
  srand((unsigned int)time(NULL));

  for (int i = 0; i < 10; i++) {
    int r = rand() % 62;

    if (r < 26) {
      password[i] = 'A' + r;
    } else if (r < 52) {
      password[i] = 'a' + (r - 26);
    } else {
      password[i] = '0' + (r - 52);
    }
  }

  printf("Generated Password: %s\n", password);

  return 0;
}

