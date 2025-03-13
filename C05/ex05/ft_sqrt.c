/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:22:06 by kali              #+#    #+#             */
/*   Updated: 2025/03/10 10:58:08 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power) {
  if(power < 0) return 0;
  if(power == 0) return 1;// 5 power 3 == 5 x 5 x 5
  int mul = 1;
  int i = 0;
  while (i < power) {
    mul = mul * nb;
    i++;
  }
  return mul;
}

int ft_sqrt(int nb) {// nb == 9
  int i = 0;
  if (nb == 1) return 1;
  while(i < nb) {
    if(ft_iterative_power(i,2) == nb)
      return i;
    i++;
  }
  return 0;
}

// #include <math.h>
// #include <stdio.h>

// int main() {
//   // printf("%f\n", sqrt(9));
//   // printf("%f\n", sqrt(11));
//   // printf("%f\n", sqrt(0));
//   // printf("%f\n", sqrt(-1));
//   printf("%d\n", ft_sqrt(19));
// }