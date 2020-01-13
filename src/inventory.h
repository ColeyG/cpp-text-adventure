#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>

class Inventory
{
public:
  std::vector<std::string> items;
  Inventory();
  void getInventory();
  void add(std::string item);
};

#endif
