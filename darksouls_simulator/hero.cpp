//
// Hero.cpp for hero in /home/bergea_k/autre/cpp
// 
// Made by Kevin Bergeal
// Login   <bergea_k@epitech.net>
// 
// Started on  Tue Jun 14 15:05:30 2016 Kevin Bergeal
// Last update Tue Jun 14 17:36:34 2016 Kevin Bergeal
//

#include "hero.h"

using namespace std;

void	Hero::receive_damages(int damages)
{
  m_hp -= damages;
  if (m_hp < 0)
    m_hp = 0;
}

void	Hero::attack(Hero *opp)
{
  opp->receive_damages(m_weapon.get_damages());
}

void	Hero::heal(int nbr_heal)
{
  m_hp += nbr_heal;
  if (m_hp > 100)
    m_hp = 100;
}

bool	Hero::is_alive()
{
  if (m_hp > 0)
    return (true);
  else
    return (false);
}

Hero::Hero(string name) : m_name(name), m_hp(100), m_mana(100)
{

}

void	Hero::add_weapon(Weapon weapon)
{
  m_weapon = weapon;
}

void	Hero::aff_status()
{
  printf("Héros: %s\n", m_name.c_str());
  printf("Vie: %d\n\n", m_hp);
}

int	Hero::get_damage_of_hero()
{
  return (m_weapon.get_damages());
}
