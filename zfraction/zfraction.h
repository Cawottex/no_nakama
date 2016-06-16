/*
** duree.h for duree in /home/bergea_k/autre/cpp
** 
** Made by Kevin Bergeal
** Login   <bergea_k@epitech.net>
** 
** Started on  Wed Jun 15 14:45:20 2016 Kevin Bergeal
** Last update Wed Jun 15 16:38:37 2016 Kevin Bergeal
*/

#ifndef ZFRACTION
#define ZFRACTION

#include <iostream>

class	Zfraction
{
 public:

  Zfraction(int haut = 0, int bas = 1);
  void	add_fraction(Zfraction a, Zfraction b);
  void	mult_fraction(Zfraction a, Zfraction b);
  bool	is_equal(Zfraction b);
  bool	is_sup(Zfraction b);
  void	aff_fraction(std::ostream &flux);

 private:

  int	m_haut;
  int	m_bas;
};

#endif
