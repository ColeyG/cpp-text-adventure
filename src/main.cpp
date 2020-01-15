#include <iostream>
#include "controls.h"
#include "movement.h"
#include "inventory.h"

int main()
{
  Movement movement;
  Inventory charinv;
  Controls controller(charinv, movement);
  controller.controlLoop();
  return 0;
}
