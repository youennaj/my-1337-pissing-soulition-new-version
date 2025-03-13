/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 06:47:09 by kali              #+#    #+#             */
/*   Updated: 2025/02/05 04:53:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putdigits(char i, char j, char k) {
    ft_putchar(i);
    ft_putchar(j);
    ft_putchar(k);
}

void ft_print_comb(void) {
    int i;
    int j;
    int k;

    i = 0 + 48;
    while(i <= 7 + 48) {
        j = i + 1;
        while (j <= 8 + 48) {
            k = j + 1;
            while (k <= 9 + 48) {
                ft_putdigits(i, j, k);
                if (i != 7 + 48) {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
}