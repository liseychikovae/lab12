#include <formatter_ex.hpp>

#include <formatter.hpp>

std::string formatter_ex(const std::string& text)
{
  return formatter("[" + text + "]");
}
