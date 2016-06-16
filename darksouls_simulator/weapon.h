/*
** weapon.h for weapon in /home/bergea_k/autre/cpp
** 
** Made by Kevin Bergeal
** Login   <bergea_k@epitech.net>
** 
** Started on  Tue Jun 14 16:46:45 2016 Kevin Bergeal
** Last update Tue Jun 14 17:08:25 2016 Kevin Bergeal
*/

#ifndef WEAPON
#define WEAPON

#include <string>
#include <cstdio>

class	Weapon
{
 public:

  Weapon();
  Weapon(std::string name, int damages, std::string type);
  void	change_weapon(std::string name, int damages, std::string type);
  void	aff_weapon();
  int	get_damages();

 private:

  std::string	m_name;
  int		m_damages;
  std::string	m_type;
};

#endif
