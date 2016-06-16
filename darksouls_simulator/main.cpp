//
// test.cpp for test in /home/bergea_k/autre/cpp
// 
// Made by Kevin Bergeal
// Login   <bergea_k@epitech.net>
// 
// Started on  Mon Jun 13 15:18:38 2016 Kevin Bergeal
// Last update Tue Jun 14 17:42:13 2016 Kevin Bergeal
//

#include "hero.h"

using namespace std;

int		main()
{
  Hero		Lothric("Lothric");
  Hero		Elric("Elric");
  Weapon	Lothric_weapon("Epee de Lothric", 30, "Grande epee");
  Weapon	Elric_weapon("Arc de Pharon", 20, "Arc");

  srand(time(0));
  Lothric.add_weapon(Lothric_weapon);
  Elric.add_weapon(Elric_weapon);
  while (Lothric.is_alive() == true
	 && Elric.is_alive() == true)
    {
      Lothric.aff_status();
      Elric.aff_status();
      printf("Elric attaque Lothric et fait %d dégâts\n",
	     Elric.get_damage_of_hero());
      Elric.attack(&Lothric);
      if (rand() % 4 == 1)
	{
	  Lothric.heal(10);
	  printf("Lothric se heal 10 hp\n\n");
	}
      else
	{
	  Lothric.attack(&Elric);
	  printf("Lothric attaque Elric et fait %d dégâts\n\n",
		 Lothric.get_damage_of_hero());
	}
    }
  if (Lothric.is_alive() == false && Elric.is_alive() == false)
    printf("Les deux héros sont morts.\n");
  else if (Lothric.is_alive() == false)
    printf("Lothric est mort.\n");
  else
    printf("Elric est mort.\n");
  return (0);
}
