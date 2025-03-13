/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:37:53 by kali              #+#    #+#             */
/*   Updated: 2025/03/10 11:57:09 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb) {
  int i = 2;
  if (nb < 2) return 0;
  while(i <= nb / 2) {
    if(nb % i == 0) return 0;
    i++;
  }
  return 1;
}

// #include <stdio.h>
int ft_find_next_prime(int nb) {
  if(nb < 2) return 2;
  if(ft_is_prime(nb) == 1)
    return nb;
  int i = nb;
  while(++i) {
    if(ft_is_prime(i) == 1)
      {
        return i;
      }
  }
  return 0;
}

// int main() {
//   printf("%d", ft_find_next_prime(100));
// }