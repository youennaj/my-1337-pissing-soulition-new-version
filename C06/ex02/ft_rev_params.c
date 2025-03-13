/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:56:04 by kali              #+#    #+#             */
/*   Updated: 2025/03/12 10:06:36 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <errno>

void ft_putchar(char c) {
  write(1, &c, 1);
}

int main(int argc, char *argv[]) {
  if(argc > 1) {
    int i = argc - 1;
    while(i > 0) {
      int j = 0;
      while(argv[i][j] != '\0') {
        ft_putchar(argv[i][j]);
        j++;
      }
      ft_putchar('\n');
      i--;
    }
  }
}