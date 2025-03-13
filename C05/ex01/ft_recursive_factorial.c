/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:47:54 by kali              #+#    #+#             */
/*   Updated: 2025/03/08 08:47:59 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb) {// 3
  if(nb == 0 || nb == 1) return 1;
  if(nb < 0) return 0;
  return nb * ft_recursive_factorial(nb - 1);
}
// //
// #include <stdio.h>
// int main() {
//   printf("%d", ft_recursive_factorial(5));
// }