#include <iostream>
#include "src/movement.h"
#include "src/inventory.h"

int main()
{
  std::cout << getMap() << std::endl;
  Inventory charinv;
  charinv.getInventory();
  return 0;
}
