#include <gtest/gtest.h>
#include "../Example.hpp"

TEST(ExampleTests, Test1) {
    EXPECT_EQ(sum(1, 2), 3);
}

TEST(ExampleTests, Test2) {
    EXPECT_EQ(sum(10, 30), 40);
}