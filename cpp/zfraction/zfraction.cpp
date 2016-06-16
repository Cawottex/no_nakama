/*
** duree.c for duree in /home/bergea_k/autre/cpp
** 
** Made by Kevin Bergeal
** Login   <bergea_k@epitech.net>
** 
** Started on  Wed Jun 15 14:46:25 2016 Kevin Bergeal
// Last update Wed Jun 15 16:43:01 2016 Kevin Bergeal
*/

#include "zfraction.h"

using namespace std;

Zfraction::Zfraction(int haut, int bas) : m_haut(haut), m_bas(bas)
{

}

void	Zfraction::add_fraction(Zfraction a, Zfraction b)
{
  int	haut_b_tmp;
  int	haut_a_tmp;

  m_bas = a.m_bas * b.m_bas;
  haut_b_tmp = b.m_haut * a.m_bas;
  haut_a_tmp = a.m_haut * b.m_bas;
  m_haut = haut_a_tmp + haut_b_tmp;
}

void	Zfraction::mult_fraction(Zfraction a, Zfraction b)
{
  m_haut = a.m_haut * b.m_haut;
  m_bas = a.m_bas * b.m_bas;
}

bool		Zfraction::is_equal(Zfraction b)
{
  double	a_tmp;

  a_tmp = m_haut / m_bas;
  if (a_tmp == b.m_haut / b.m_bas)
    return (true);
  else
    return (false);
}

bool		Zfraction::is_sup(Zfraction b)
{
  double	a_tmp;

  a_tmp = m_haut / m_bas;
  if (a_tmp > b.m_haut / b.m_bas)
    return (true);
  else
    return (false);
}

void	Zfraction::aff_fraction(ostream &flux)
{
  if (m_bas == 1)
    flux << m_haut;
  else
    flux << m_haut << "/" << m_bas;
}
