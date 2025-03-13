/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:57:15 by kali              #+#    #+#             */
/*   Updated: 2025/02/05 04:57:37 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putPositiveNbr(int nb) {//576
    int i;
    char nbrs[10];

    if (nb == 0) {// handling case nb = 0
        ft_putchar('0');
        return;
    }// nbrs[2] == 5
    i = 0;// nbrs[1] == 7
    while (nb > 0) {// nbrs[0] = 6||
        nbrs[i] = nb % 10 + 48;//5
        nb = nb / 10;// nb == 5
        i++; // i == 3
    }
    
    while (i > 0) {
        i--;
        ft_putchar(nbrs[i]);//576
    }
}

void ft_putnbr(int nb) {
    if (nb == -2147483648) {// handling -2147483648 case
        write(1,"-2147483648", 11);
        return;
    }
    if (nb < 0) {// handling negative case
        ft_putchar('-');
        nb = - nb;
    }
    ft_putPositiveNbr(nb);// this function to print positive numbers
}