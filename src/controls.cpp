#include <iostream>
#include "controls.h"
#include "helpers.h"

Controls::Controls(Inventory inventory)
{
  Controls::inventory = inventory;
  Controls::actions.push_back("inv");
  Controls::actions.push_back("save");
}

void Controls::controlLoop()
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
  std::cout << Helpers::isInVector(Controls::actions, input);
};
