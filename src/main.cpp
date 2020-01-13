#include <iostream>
#include "movement.h"
#include "inventory.h"

int main()
{
  std::cout << getMap() << std::endl;
  Inventory charinv;
  charinv.getInventory();
  return 0;
}
