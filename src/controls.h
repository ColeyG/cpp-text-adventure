#ifndef CONTROLS_H
#define CONTROLS_H

#include <vector>
#include "inventory.h"
#include "movement.h"

class Controls
{
public:
  Controls(Inventory inventory, Movement movement);
  void controlLoop();
  void actionExecute(std::string input);
  std::vector<std::string> actions;
  Inventory inventory;
  Movement movement;
};

#endif
