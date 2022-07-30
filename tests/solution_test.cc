#include "src/lib/solution.h"
#include "gtest/gtest.h"

TEST(SolutionLibTest, ReturnPrintName) {
    std::string s1 = "google_test";
    Solution solution(s1);
    std::string actual = solution.PrintName();
    std::string expect = "google_test";
    EXPECT_EQ(expect, actual);
}