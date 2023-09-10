#include "gtest/gtest.h"

extern "C" {
#include "testy/example1.h"
}

TEST(example1, ok) {
  ASSERT_EQ(privateAccess(1, 1), 1);
}

TEST(example1, not_ok) {
  ASSERT_EQ(privateAccess(1, 2), 0);
}