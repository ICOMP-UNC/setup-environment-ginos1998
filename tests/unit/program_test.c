#include <unity.h>
#include <logic.h>


void setUp(void)
{
}

void tearDown(void)
{
}

void add_test(void)
{
    TEST_ASSERT_EQUAL(5, add(3, 2));
    TEST_ASSERT_NOT_EQUAL(6, add(3, 2));
}

void substract_test(void)
{
    TEST_ASSERT_EQUAL(1, substract(3, 2));
    TEST_ASSERT_NOT_EQUAL(2, substract(3, 2));
}

void multiply_test(void)
{
    TEST_ASSERT_EQUAL(6, multiply(3, 2));
    TEST_ASSERT_NOT_EQUAL(5, multiply(3, 2));
}

void divide_test(void)
{
    TEST_ASSERT_EQUAL(0, divide(3, 0));
    TEST_ASSERT_EQUAL(2, divide(4, 2));
    TEST_ASSERT_NOT_EQUAL(3, divide(8, 2));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(add_test);
    RUN_TEST(substract_test);
    RUN_TEST(multiply_test);
    RUN_TEST(divide_test);
    return UNITY_END();
}