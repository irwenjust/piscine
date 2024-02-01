#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}
void ft_putnbr(int nb)
{
  unsigned int nbr;
  nbr = nb;
    if (nbr / 10 != 0)
         ft_putnbr(nbr / 10);
    ft_putchar(nbr % 10 + 48);
}
int  ft_strlen(char *str)
{
  int  i;
  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
int ft_atoi(char *str)
{
  int i;
  int nbr;
  nbr = 0;
  while (str[i] != '\0')
  {
    nbr = (str[i] - '0') + (nbr * 10);
    i++;
  }
  return (nbr);
}
int *convert_input(char *str)
{
  int  i;
  int  j;
  int  num[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  char  *str_num;
  i = 0;
  j = 0;
  while (str[i] != '\0')
  {
    if (str[i] == ' ')
    {
      i++;
    }
    if (str[i] >= '1' && str[i] <= '4')
    {
      str_num[j] = str[i];
      i++;
    }
  }
  *num = ft_atoi(str_num);
  return (num);
}

int main(void)
{
  int   argc = 2;
  char  argv[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
  int  *clues;
  int   nb;
  int   i;
  clues = convert_input(argv);
  i = 0;
  while (clues[i] != '\0')
  {
      nb = clues[i];
      ft_putnbr(nb);
      i++;
  }
  return (0);
}