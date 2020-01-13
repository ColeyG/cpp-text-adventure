#include "helpers.h"
#include <vector>
#include <string>
#include <algorithm>

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
