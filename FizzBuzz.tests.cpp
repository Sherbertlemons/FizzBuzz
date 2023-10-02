#include "FizzBuzz.cpp"  // Include the source file of your code
#include <gtest/gtest.h>

// Test case to check if FizzBuzz(1, 15) returns the correct FizzBuzz sequence
TEST(FizzBuzzTest, TestFizzBuzzSequence) {
    std::string result = FizzBuzz(1, 15);
    EXPECT_EQ(result, "1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz");
}

// Test case to check if FizzBuzz(1, 30) returns the correct FizzBuzz sequence
TEST(FizzBuzzTest, TestFizzBuzzLongSequence) {
    std::string result = FizzBuzz(1, 30);
    EXPECT_EQ(result,
              "1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16, 17, Fizz, 19, Buzz, "
              "Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28, 29, FizzBuzz");
}

// Test case to check if FizzBuzz(7, 7) returns "7" (single number not divisible by 3 or 5)
TEST(FizzBuzzTest, TestSingleNumber) {
    std::string result = FizzBuzz(7, 7);
    EXPECT_EQ(result, "7");
}

// Test case to check if FizzBuzz(3, 3) returns "Fizz" (single number divisible by 3)
TEST(FizzBuzzTest, TestSingleFizz) {
    std::string result = FizzBuzz(3, 3);
    EXPECT_EQ(result, "Fizz");
}

// Test case to check if FizzBuzz(5, 5) returns "Buzz" (single number divisible by 5)
TEST(FizzBuzzTest, TestSingleBuzz) {
    std::string result = FizzBuzz(5, 5);
    EXPECT_EQ(result, "Buzz");
}

TEST(FizzBuzzTest, TestDecendingOrder) {
    std::string result = FizzBuzz(100, 10);
    EXPECT_EQ(result, "Fail");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
