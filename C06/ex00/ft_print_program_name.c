/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:23:11 by kali              #+#    #+#             */
/*   Updated: 2025/03/11 11:26:21 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

#include <stdio.h>
int main(int argc, char *argv[]) {
  if(argc >= 1) {
    int i = 0;
    while(argv[0][i] != '\0') {
      ft_putchar(argv[0][i]);
      i++;
    }
    ft_putchar('\n');
  }
  return 0;
}