#include <iostream>
#include "src/controls.h"
#include "src/movement.h"
#include "src/inventory.h"

int main()
{
  Movement movement;
  Inventory charinv;
  Controls controller(charinv, movement);
  controller.controlLoop();
  return 0;
}
