#include <stdio.h>
#include <stdlib.h>

#include "../libs/list.h"
#include "../libs/unity.h"

#define EMPTY 0
#define INITSIZE 5
#define NEWSIZE 10

void setUp(void)
{
}

void tearDown(void)
{
}

void test_ListInit(void)
{
    puts("Testing List Init function");
    Vector test_list = NULL;
    test_list = InitVector(EMPTY);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(EMPTY, test_list->elements);
}

void test_ListResize(void)
{
    puts("Testing List Resize function");
    Vector test_list = NULL;
    test_list = InitVector(INITSIZE);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(INITSIZE, test_list->elements);
    test_list = SetVectorSize(test_list, NEWSIZE);
    TEST_ASSERT_NOT_NULL(test_list);
    TEST_ASSERT_EQUAL(NEWSIZE, test_list->elements);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_ListInit, __LINE__);
    RUN_TEST(test_ListResize, __LINE__);

    return UNITY_END();
}
