#include "unity.h"

extern void test_add_calculator();
extern void test_sub_calculator();
extern void test_multiply_calculator();
extern void test_remanider_calculator();
extern void test_power_calculator();





void setup(void)
{

}

void teardown(void)
{

}

void automated_test_add_integers()
{
    TEST_ASSERT_EQUAL(0, add_integers(0, 0));
    TEST_ASSERT_EQUAL(30, add_integers(10, 20));
    TEST_ASSERT_EQUAL(-10, add_integers(-10, -20));
}

int main()
  {
    unityBegin(null);

    run_test(test_add_calculator);
    run_test(test_add_calculator);
    run_test(test_sub_calculator);
    run_test(test_multiply_calculator);
    run_test(test_remanider_calculator);
    run_test(test_power_calculator);
    
    

    return (unityEnd());
  }



