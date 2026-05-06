#include <solver.hpp>

#include <gtest/gtest.h>

TEST(Solver, FindsTwoRoots)
{
  const auto roots = solve(1.0, -3.0, 2.0);
  ASSERT_EQ(roots.size(), 2U);
  EXPECT_DOUBLE_EQ(roots[0], 1.0);
  EXPECT_DOUBLE_EQ(roots[1], 2.0);
}

TEST(Solver, RejectsLinearEquation)
{
  EXPECT_THROW(solve(0.0, 2.0, 1.0), std::invalid_argument);
}
