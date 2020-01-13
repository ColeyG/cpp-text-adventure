#include <iostream>
#include "inventory.h"

Inventory::Inventory()
{
  Inventory::items.push_back("Raspberries");
  Inventory::items.push_back("Rope");
};

void Inventory::add(std::string item)
{
  std::cout << "Added " << item << " to inventory";
};

void Inventory::getInventory()
{
  std::cout << "In your inventory:\n";
  for (int i = 0; i < Inventory::items.size(); ++i)
  {
    std::cout << (i + 1) << " - " << Inventory::items[i] << '\n';
  }
};
