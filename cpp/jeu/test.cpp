//
// test.cpp for test in /home/bergea_k/autre/cpp
// 
// Made by Kevin Bergeal
// Login   <bergea_k@epitech.net>
// 
// Started on  Mon Jun 13 15:18:38 2016 Kevin Bergeal
// Last update Thu Jun 16 17:07:01 2016 Kevin Bergeal
//

#include <iostream>
#include <cstdio>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int	is_in_tab(int tmp, int cnt[], int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      if (cnt[i] == tmp)
	return (1);
      i++;
    }
  return (0);
}

int		the_game_sequel(string base, char new_word[], int size)
{
  int		i;
  string	answer;

  while (1)
    {
      i = 0;
      printf("Quel est ce mot ? ");
      while (i < size)
	printf("%c", new_word[i++]);
      printf("\n");
      cin >> answer;
      if (answer == base)
	{
	  printf("Bravo !\n");
	  return (0);
	}
    }
}

int	the_game(string base, int size)
{
  char	new_word[size];
  int	cnt[size];
  int	i;
  int	tmp;

  i = 0;
  while (i < size)
    {
      tmp = rand() % size;
      if (is_in_tab(tmp, cnt, size) == 0)
	{
	  new_word[i] = base[tmp];
	  cnt[i] = tmp;
	  i++;
	}
    }
  the_game_sequel(base, new_word, size);
}

int		main()
{
  string	base;
  int		size;

  srand(time(0));
  printf("Saisissez un mot:\n");
  cin >> base;
  size = base.size();
  the_game(base, size);
  return (0);
}
