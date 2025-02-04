#include "gtest/gtest.h"
#include "myheader.h"
#include <iostream>
#include <sstream>

// Test the sayHello function
TEST(SayHelloTest, BasicTest)
{
    // Capture the output of the sayHello function
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    // Call the sayHello function
    sayHello();

    // Check if the output is correct
    EXPECT_EQ(buffer.str(), "Hello world\n");

    // Restore original output stream
    std::cout.rdbuf(old);
}

