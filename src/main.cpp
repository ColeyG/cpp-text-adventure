#include <iostream>
#include "controls.h"
#include "movement.h"
#include "inventory.h"

int main()
{
  // Movement::showMap();
  Inventory charinv;
  Controls controller(charinv);
  controller.controlLoop();
  return 0;
}
