//
// weapon.cpp for weapon in /home/bergea_k/autre/cpp
// 
// Made by Kevin Bergeal
// Login   <bergea_k@epitech.net>
// 
// Started on  Tue Jun 14 16:55:27 2016 Kevin Bergeal
// Last update Tue Jun 14 17:33:16 2016 Kevin Bergeal
//

#include "weapon.h"

using namespace std;

Weapon::Weapon()
{
  m_name = "Epee brisée";
  m_damages = 10;
  m_type = "Epee";
}

Weapon::Weapon(string name, int damages, string type)
{
  m_name = name;
  m_damages = damages;
  m_type = type;
}

void	Weapon::change_weapon(string name, int damages, string type)
{
  m_name = name;
  m_damages = damages;
  m_type = type;
}

void	Weapon::aff_weapon()
{
  printf("Vous possédez un(e) %s de type %s faisant %d dégats\n",
	 m_name.c_str(), m_type.c_str(), m_damages);
}

int	Weapon::get_damages()
{
  return (m_damages);
}
