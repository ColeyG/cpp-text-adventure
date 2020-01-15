#ifndef CONTROLS_H
#define CONTROLS_H

#include <vector>
#include "inventory.h"

class Controls
{
public:
  Controls(Inventory inventory);
  void controlLoop();
  void actionExecute(std::string input);
  std::vector<std::string> actions;
  Inventory inventory;
};

#endif
