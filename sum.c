#include <stdio.h>

const int N = 1000;

int main() {
  int array[N];
  int elements_count = 0;
  int sum = 0;

  for(int i = 0; i < N; i++) {
    scanf("%d", &array[i]);

    if(array[i] == -100) {
      break;
    }

    elements_count++;
  }

  for(int i = 0; i < elements_count; i++) {
    sum += array[i];
  }

  printf("%d\n", sum);

  return 0;
}