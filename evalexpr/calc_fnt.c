/*
** calc_fnt.c for calc_fnt in /home/arthur/delivery/CPool_EvalExpr
** 
** Made by Arthur Knoepflin
** Login   <arthur@epitech.net>
** 
** Started on  Tue Oct 25 22:49:03 2016 Arthur Knoepflin
** Last update Tue Oct 25 23:01:09 2016 Arthur Knoepflin
*/
#include "my.h"
#include "eval_expr.h"

int	add(int a, int b)
{
  return (a + b);
}

int	less(int a, int b)
{
  return (a - b);
}

int	times(int a, int b)
{
  return (a * b);
}

int	divide(int a, int b)
{
  return (a / b);
}

int	modulo(int a, int b)
{
  return (a % b);
}