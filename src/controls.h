#ifndef CONTROLS_H
#define CONTROLS_H

#include <vector>
#include "inventory.h"

class Controls
{
public:
  Controls(Inventory inventory);
  void controlLoop();
  std::vector<std::string> actions;
  Inventory inventory;
};

#endif
