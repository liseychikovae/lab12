#include <formatter_ex.hpp>

#include <gtest/gtest.h>

TEST(FormatterEx, WrapsText)
{
  const std::string value = formatter_ex("hello");
  EXPECT_NE(value.find("[hello]"), std::string::npos);
}
