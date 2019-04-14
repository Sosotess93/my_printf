/*
** my_strlen.c for my_strlen in /home/charra_s/Piscine_C_J04
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Oct  2 11:35:10 2014 Sofiane Charrad
** Last update Sun Nov 16 17:52:58 2014 Sofiane Charrad
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] !='\0')
    {
      i = i + 1;
    }
  return (i);
}
