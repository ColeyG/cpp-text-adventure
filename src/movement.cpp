#include <string>
#include <iostream>
#include "movement.h"

Movement::Movement()
{
}

void Movement::showMap()
{
  std::string map;

  map += "\n===========================\n";

  map += "\n===========================\n";

  std::cout << map << "\n";
}
