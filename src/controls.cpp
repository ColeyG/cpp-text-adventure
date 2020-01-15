#include <iostream>
#include "controls.h"
#include "helpers.h"

Controls::Controls(Inventory inventory, Movement movement)
{
  Controls::movement = movement;
  Controls::inventory = inventory;
  Controls::actions.push_back("inv");
  Controls::actions.push_back("map");
  Controls::actions.push_back("save");
}

void Controls::controlLoop()
{
  while (true)
  {
    std::string input;
    std::cout << "---------------------------------\nActions:";
    for (int i = 0; i < Controls::actions.size(); ++i)
    {
      std::cout << " " << Controls::actions[i];
      if (i + 1 != Controls::actions.size())
      {
        std::cout << ",";
      }
    }
    std::cout << "\n>";
    std::cin >> input;
    Helpers::myToLower(input);
    if (!Helpers::isInVector(Controls::actions, input))
    {
      std::cout << input << " is not an available action at this time.\n";
    }
    else
    {
      std::cout << "---------------------------------\n";
      Controls::actionExecute(input);
    }
  }
};

void Controls::actionExecute(std::string input)
{
  if (input == "inv")
  {
    Controls::inventory.getInventory();
  }
  if (input == "map")
  {
    Controls::movement.showMap();
  }
}
