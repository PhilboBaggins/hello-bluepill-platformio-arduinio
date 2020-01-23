#include <unity.h>

void test_itWorks(void)
{
    TEST_ASSERT_EQUAL(2, 1 + 1);
}

void runTests()
{
    UNITY_BEGIN();
    RUN_TEST(test_itWorks);
    UNITY_END();
}
