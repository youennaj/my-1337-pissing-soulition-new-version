/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:29:08 by kali              #+#    #+#             */
/*   Updated: 2025/03/11 11:54:01 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

int main(int argc, char *argv[]) {
  if(argc > 1) {
    int i = 1;
    while(argv[i]) {
      int j = 0;
      while(argv[i][j] != '\0') {
        ft_putchar(argv[i][j]);
        j++;
      }
      ft_putchar('\n');
      i++;
    }
  }
}