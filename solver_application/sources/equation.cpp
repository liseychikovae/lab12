#include <formatter_ex.hpp>
#include <solver.hpp>

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>

int main(int argc, char* argv[])
{
  if (argc != 4)
  {
    std::cerr << "usage: solver_app <a> <b> <c>" << std::endl;
    return EXIT_FAILURE;
  }

  const double a = std::atof(argv[1]);
  const double b = std::atof(argv[2]);
  const double c = std::atof(argv[3]);
  const std::vector<double> roots = solve(a, b, c);

  std::ostringstream message;
  message << "equation roots:";
  if (roots.empty())
  {
    message << " no real roots";
  }
  for (double root : roots)
  {
    message << " " << root;
  }

  std::cout << formatter_ex(message.str()) << std::endl;
}
