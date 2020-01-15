#include "helpers.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

bool Helpers::isInVector(std::vector<std::string> vector, std::string string)
{
  if (std::find(vector.begin(), vector.end(), string) != vector.end())
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Helpers::myToLower(std::string &string)
{
  std::transform(string.begin(), string.end(), string.begin(),
                 [](unsigned char c) { return std::tolower(c); });
}
