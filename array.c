#include <stdio.h>

const int N = 6;

int main() {
  int array[N];

  for(int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }

  for(int i = 0; i < N; i++) {
    if(i == N - 1) {
      printf("%d\n", array[i]);
    } else if(i == N - 2) {
      printf("%d | ", array[i]);
    } else {
      printf("%d, ", array[i]);
    }
  }

  return 0;
}
