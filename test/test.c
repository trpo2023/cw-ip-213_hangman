#include <ctest.h>

#include <libhangman/word.h>

CTEST(check_type_of_category, correct_category_1)
{
    int category = 1;
    const char *expected = Word(category);
    const char *result = Word(category);
    ASSERT_STR(expected, result);
}

CTEST(check_type_of_category, correct_category_2)
{
    int category = 2;
    const char *expected = Word(category);
    const char *result = Word(category);
    ASSERT_STR(expected, result);
}

CTEST(check_type_of_category, correct_category_3)
{
    int category = 3;
    const char *expected = Word(category);
    const char *result = Word(category);
    ASSERT_STR(expected, result);
}

CTEST(check_type_of_category, incorrect_category)
{
    int category = 4;
    const char *excpected = NULL;
    const char *result = Word(category);
    ASSERT_STR(excpected, result);
}