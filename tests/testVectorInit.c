#include <stdio.h>
#include <stdlib.h>

#include "../libs/vector.h"
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

void test_VectorInit(void)
{
    Vector *testVector = NULL;
    testVector = InitVector(EMPTY);
    TEST_ASSERT_NOT_NULL(testVector);
    TEST_ASSERT_EQUAL(EMPTY, testVector->elements);
}

void test_VectorResize(void)
{
    Vector *testVector = NULL;
    testVector = InitVector(INITSIZE);
    TEST_ASSERT_NOT_NULL(testVector);
    TEST_ASSERT_EQUAL(INITSIZE, testVector->elements);
    testVector = SetVectorSize(testVector, NEWSIZE);
    TEST_ASSERT_NOT_NULL(testVector);
    TEST_ASSERT_EQUAL(NEWSIZE, testVector->elements);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_VectorInit, __LINE__);
    RUN_TEST(test_VectorResize, __LINE__);

    return UNITY_END();
}
