//
// test.cpp for test in /home/bergea_k/autre/cpp
// 
// Made by Kevin Bergeal
// Login   <bergea_k@epitech.net>
// 
// Started on  Mon Jun 13 15:18:38 2016 Kevin Bergeal
// Last update Thu Jun 16 15:46:02 2016 Kevin Bergeal
//

#include "vehicule.h"
#include <vector>

using namespace std;

int	main()
{
  Garage	garage;

  garage.add_vehi(new Moto());
  garage.add_vehi(new Moto());
  garage.add_vehi(new Voiture());
  garage.add_vehi(new Vehicule());
  garage.aff_vehi();
  return (0);
}
