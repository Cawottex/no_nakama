/*
** Hero.h for hero in /home/bergea_k/autre/cpp
** 
** Made by Kevin Bergeal
** Login   <bergea_k@epitech.net>
** 
** Started on  Tue Jun 14 15:06:19 2016 Kevin Bergeal
** Last update Tue Jun 14 17:35:26 2016 Kevin Bergeal
*/

#ifndef HERO
#define HERO

#include "weapon.h"
#include <string>
#include <ctime>
#include <cstdlib>

class	Hero
{
 public:

  Hero(std::string name);
  void	receive_damages(int damages);
  void	attack(Hero *opp);
  void	heal(int nbr_heal);
  bool	is_alive();
  void	aff_status();
  void	add_weapon(Weapon weapon);
  int	get_damage_of_hero();

 private:

  std::string	m_name;
  int           m_hp;
  int           m_mana;
  Weapon	m_weapon;
};

#endif
