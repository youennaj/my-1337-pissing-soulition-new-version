/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 10:58:50 by kali              #+#    #+#             */
/*   Updated: 2025/03/09 11:51:32 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index) {// index == 3
  if(index < 0) return -1;
  if(index == 0) return 0;
  if(index == 1 || index == 2) return 1;
  // printf(" %d ", nb);
  return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

// #include <stdio.h>
// int main() {
//   printf("%d", ft_fibonacci(6));
// }