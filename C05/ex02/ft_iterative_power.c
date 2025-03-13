/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:46:49 by kali              #+#    #+#             */
/*   Updated: 2025/03/09 10:50:40 by kali             ###   ########.fr       */
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

// #include <stdio.h>
// int main() {
//   printf("%d", ft_iterative_power(10,3));
// }