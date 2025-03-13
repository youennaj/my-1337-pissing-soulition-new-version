/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:35:33 by kali              #+#    #+#             */
/*   Updated: 2025/03/07 10:40:20 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb) {//nb = 5
  int i;
  int nb_v = nb;
  if(nb < 0) return 0;
  if(nb == 0) return 1;

  i = 1;
  while(i < nb_v) {
    nb = nb * i;//5 * 4 * 3 * 2 * 1
    i++;
  }
  return nb;
}

// #include <stdio.h>
// int main() {
//   printf("%d\n", ft_iterative_factorial(1000));
//   printf("%d\n", ft_iterative_factorial(1));
//   printf("%d\n", ft_iterative_factorial(0));
//   printf("%d\n", ft_iterative_factorial(-5));
// }