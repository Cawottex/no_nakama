//
// test.cpp for test in /home/bergea_k/autre/cpp
// 
// Made by Kevin Bergeal
// Login   <bergea_k@epitech.net>
// 
// Started on  Mon Jun 13 15:18:38 2016 Kevin Bergeal
// Last update Wed Jun 15 16:40:22 2016 Kevin Bergeal
//

#include "zfraction.h"

using namespace std;

bool	operator==(Zfraction a, Zfraction b)
{
  return (a.is_equal(b));
}

bool	operator>(Zfraction a, Zfraction b)
{
  return (a.is_sup(b));
}

Zfraction	operator+(Zfraction a, Zfraction b)
{
  Zfraction	res;

  res.add_fraction(a, b);
  return (res);
}

Zfraction	operator*(Zfraction a, Zfraction b)
{
  Zfraction	res;

  res.mult_fraction(a, b);
  return (res);
}

ostream&	operator<<(ostream &flux, Zfraction a)
{
  a.aff_fraction(flux);
  return (flux);
}

int	main()
{
  Zfraction	a(4, 5);
  Zfraction	b(2);
  Zfraction	c,d;

  c = a + b;
  d = a * b;
  cout << a << " + " << b << " = " << c << endl;
  cout << a << " * " << b << " = " << d << endl;
  if (a > b)
    cout << "a est plus grand que b." << endl;
  else if (a == b)
    cout << "a est egal à b." << endl;
  else
    cout << "a est plus petit que b." << endl;
  return (0);
}
