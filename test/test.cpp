#include <gtest/gtest.h>
#include "Struct.h"

TEST(AverageSum, throws_when_a_pointer_to_an_array_equal_to_zero) {
    int* a = 0;
    ASSERT_ANY_THROW(AverageSum(a, 5, 3));
}
TEST(AverageSum, throws_when_the_number_of_elements_in_the_array_is_negative) {
    int a[] = {1, 2, 3, 4, 5};
    ASSERT_ANY_THROW(AverageSum(a, -5, 3));
}
TEST(AverageSum, throws_when_the_window_size_is_negative) {
    int a[] = {1, 2, 3, 4, 5};
    ASSERT_ANY_THROW(AverageSum(a, 5, -3));
}
TEST(AverageSum, works_rigth_with_the_window_size_equal_1) {
    int a[] = {5, 7, 3, 8, 1};
    int* res = AverageSum(a, 5, 1);
    for ( int i = 0; i < 5; i++ )
        EXPECT_EQ(a[i], res[i]);
}

TEST(AverageSum, works_rigth_with_the_window_size_more_than_1) {
    int a[] = {5, 7, 3, 8, 1};
    int exp[] = {5, 6, 4};
    int* res = AverageSum(a, 5, 3);
    for ( int i = 0; i < 3; i++ )
        EXPECT_EQ(exp[i], res[i]);
}

TEST(AverageSum, works_rigth_with_the_window_size_equal_to_n) {
    int a[] = {5, 7, 3};
    int exp[] = {5};
    int* res = AverageSum(a, 3, 3);
    for ( int i = 0; i < 1; i++ )
        EXPECT_EQ(exp[i], res[i]);
}
