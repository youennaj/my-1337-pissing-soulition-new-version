/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:56:35 by kali              #+#    #+#             */
/*   Updated: 2025/03/09 08:48:47 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_int_range(int nb) {
    int arr[10];
    int c;
    int stock;
    int i = 0;
    if(nb == 0) {
        write(1, "0", 1);
        return;
    }
    while(nb > 0) { //nb = 789
        stock = nb % 10;// stock = 7
        nb = nb / 10;// nb = 0
        arr[i] = stock;// arr[0] = 9 | arr[1] = 8 | arr[2] = 7
        i++; // i = 3
    }
    i--;
    while (i >= 0) {
        c = arr[i] + '0';
        write(1, &c, 1);
        i--;
    }
}

void ft_putnbr(int nb) {
    if(nb == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if(nb < 0) {
        nb =  -1 * nb;
        write(1, "-", 1);
    }
    ft_print_int_range(nb);
}


// #include <stdio.h>
// int main() {
//     int arr[3];
//     // printf("%d", INT_MIN);
//     ft_putnbr(65);
//     // ft_putnbr(-42);// nb = 78 || arr[2] = 9
//     //                 nb 7 || arr[1] = 8
//     //                 nb 0 || arr[0] = i
//     //
//     //                 ffgfd
//     // ft_putnbr(2147483647);
//     // ft_putnbr(-2147483648);
//     // ft_putnbr(0);
// }
