/*
** vehicule.h for vehicule in /home/bergea_k/autre/cpp
** 
** Made by Kevin Bergeal
** Login   <bergea_k@epitech.net>
** 
** Started on  Thu Jun 16 14:55:16 2016 Kevin Bergeal
** Last update Thu Jun 16 15:45:07 2016 Kevin Bergeal
*/

#ifndef VEHICULE_H_
#define VEHICULE_H_

#include <iostream>
#include <vector>

class	Vehicule
{
 public:
  Vehicule();
  virtual void	aff();

 protected:
  int	m_prix;
};

class	Voiture: public Vehicule
{
 public:
  Voiture();
  void	aff();

 protected:
  int	m_portes;
};

class	Moto: public Vehicule
{
 public:
  Moto();
  void	aff();

 protected:
  int	m_vitesse;
};

class	Garage
{
 public:
  Garage();
  void  add_vehi(Vehicule *vehicule);
  void	aff_vehi();

 protected:
  std::vector<Vehicule*>	m_list;
};

#endif
