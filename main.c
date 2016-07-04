#include <stdio.h>
const int MAX_STRING_SIZE = 200;

int main (){
  char name[MAX_STRING_SIZE];
  char education[MAX_STRING_SIZE];
  int age;
  printf("Ваше ФИО ");
  fgets(name, MAX_STRING_SIZE, stdin);
  printf("Ваш возраст ");
  scanf("%d", &age);
  printf("Ваше образование ");
  scanf("%s", education);
  printf("Вам зовут %s\n Ваш возраст %d\n Ваше образование: %s", name, age, education);
  return 0;
}