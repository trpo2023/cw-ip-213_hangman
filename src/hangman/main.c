#include <stdio.h>
#include <string.h>

int main() {
  char word[100], guessed[100], temp;
  int i, len, chance, done = 0;

  // Получаем слово для угадывания от пользователя
  printf("Write word: ");
  scanf("%s", word);
  len = strlen(word);

  // Инициализируем массив guessed символами '_', соответствующими каждой букве
  // в слове
  for (i = 0; i < len; i++) {
    guessed[i] = '_';
  }
  guessed[len] = '\0';

  // Начинаем игру
  chance = 6; // устанавливаем количество попыток
  printf("You have %d chance, to guess the word: %s\n", chance, guessed);
  while (chance > 0 && !done) {
    // Запрос у пользователя угадываемой буквы
    printf("Write letter: ");
    scanf(" %c", &temp);
    int tempw = 0;
    // Проверяем, есть ли буква в слове
    for (i = 0; i < len; i++) {
      if (word[i] == temp) {
        guessed[i] = temp;
        tempw += 1;
        if (tempw == 1) {
          chance++;
        }
      }
    }
    // Уменьшаем количество оставшихся попыток, если пользователь не угадал
    // букву
    if (strstr(guessed, "_") == NULL) {
      done = 1; // Устанавливаем done в 1, если игрок угадал все буквы
    } else {
      chance--;
      printf("You have %d chance, to guess the word: %s\n", chance, guessed);
    }
  }
  // Выводим результат игры
  if (done) {
    printf("You win! %s!\n", word);
  } else {
    printf("You lose %s. Try agan!\n", word);
  }

  return 0;
}