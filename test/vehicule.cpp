//
// vehicule.cpp for vehicule in /home/bergea_k/autre/cpp
// 
// Made by Kevin Bergeal
// Login   <bergea_k@epitech.net>
// 
// Started on  Thu Jun 16 14:52:01 2016 Kevin Bergeal
// Last update Thu Jun 16 15:45:49 2016 Kevin Bergeal
//

#include "vehicule.h"

using namespace std;

Vehicule::Vehicule() : m_prix(1000)
{

}

void	Vehicule::aff()
{
  cout << "Ceci est un vehicule" << endl;
}

Voiture::Voiture() : m_portes(4)
{

}

void	Voiture::aff()
{
  cout << "Ceci est une voiture" << endl;
}

Moto::Moto() : m_vitesse(300)
{

}

void	Moto::aff()
{
  cout << "Ceci est une moto" << endl;
}

Garage::Garage()
{

}

void	Garage::add_vehi(Vehicule *vehicule)
{
  m_list.push_back(vehicule);
}

void	Garage::aff_vehi()
{
  int	i;

  i = 0;
  while (i < m_list.size())
    m_list[i++]->aff();
}
