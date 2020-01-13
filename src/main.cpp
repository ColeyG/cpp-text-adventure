#include <iostream>
#include "movement.h"
#include "inventory.h"

int main()
{
  Movement::showMap();
  Inventory charinv;
  charinv.getInventory();
  return 0;
}
