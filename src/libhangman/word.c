#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Функция для вывода случайного слова из выбранной категории
const char *Word(int category)
{
  int randomIndex;
  srand(time(NULL));

  // Проверка выбранной категории и вывод случайного слова
  switch (category)
  {
  case 1:
    // Категория 1
    {
      const char *words[] = {"apple", "pear", "banana", "orange", "tangerine", "watermelon", "pineapple", "lemon", "avocado", "mango", "peach", "apricot"};
      int numWords = sizeof(words) / sizeof(words[0]);

      // Генерация случайного индекса
      randomIndex = rand() % numWords;

      // Вывод случайного слова из категории 1
      return words[randomIndex];
    }
    break;

  case 2:
    // Категория 2
    {
      const char *words[] = {"cat", "dog", "rabbit", "bear", "moose", "deer", "cow", "lion", "tiger", "elephant", "beaver", "wolf", "giraffe", "capybara"};
      int numWords = sizeof(words) / sizeof(words[0]);

      // Генерация случайного индекса
      randomIndex = rand() % numWords;

      // Вывод случайного слова из категории 2
      return words[randomIndex];
    }
    break;

  case 3:
    // Категория 3
    {
      const char *words[] = {"volleyball", "basketball", "football", "hockey", "boxing", "tennis", "cycling", "swimming", "running", "athletics"};
      int numWords = sizeof(words) / sizeof(words[0]);

      // Генерация случайного индекса
      randomIndex = rand() % numWords;

      // Вывод случайного слова из категории 3
      return words[randomIndex];
    }
    break;

  default:
    printf("Incorrect category selection!\n");
    break;
  }
  return NULL;
}