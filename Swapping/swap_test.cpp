#include <gtest/gtest.h>

// Function declarations (these would be in your main.cpp or swap.cpp)
int callbyvalue(int a, int b);
int callbyreference(int &a, int &b);

// Test case for callbyvalue
TEST(SwapTest, CallByValue) {
    int num1 = 10, num2 = 20;
    
    // Before swap
    EXPECT_EQ(num1, 10);
    EXPECT_EQ(num2, 20);
    
    callbyvalue(num1, num2); // Call the function (this should not affect the actual variables)

    // After swap (should remain the same)
    EXPECT_EQ(num1, 10);
    EXPECT_EQ(num2, 20);
}

// Test case for callbyreference
TEST(SwapTest, CallByReference) {
    int num1 = 10, num2 = 20;
    
    // Before swap
    EXPECT_EQ(num1, 10);
    EXPECT_EQ(num2, 20);
    
    callbyreference(num1, num2); // Call the function (this should affect the actual variables)

    // After swap (should have swapped values)
    EXPECT_EQ(num1, 20);
    EXPECT_EQ(num2, 10);
}

// You can add more tests to check edge cases or other scenarios if needed

