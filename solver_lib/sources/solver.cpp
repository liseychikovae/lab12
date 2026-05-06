#include <solver.hpp>

#include <cmath>
#include <stdexcept>

std::vector<double> solve(double a, double b, double c)
{
  if (a == 0.0)
  {
    throw std::invalid_argument("coefficient 'a' must not be zero");
  }

  const double discriminant = b * b - 4.0 * a * c;
  if (discriminant < 0.0)
  {
    return {};
  }
  if (discriminant == 0.0)
  {
    return {-b / (2.0 * a)};
  }

  const double root = std::sqrt(discriminant);
  return {(-b - root) / (2.0 * a), (-b + root) / (2.0 * a)};
}
