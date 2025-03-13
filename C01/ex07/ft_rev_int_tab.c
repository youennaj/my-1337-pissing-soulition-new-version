/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 06:55:35 by kali              #+#    #+#             */
/*   Updated: 2025/02/06 05:47:00 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void ft_rev_int_tab(int *tab, int size) {
    int i;
    int j;

    i = 0;
    j = size - 1;
    while (i < size / 2) {
        ft_swap(&tab[i], &tab[j]);
        i++;
        j--;
    }
}

// #include <stdio.h>
// int main() {
//     int nb[6] = {1, 2, 3, 4, 5, 6};
//     int i = 0;
//     while(i < 6) {
//         printf("%d ", nb[i]);
//         i++;
//     }
//     printf("\n");
//     ft_rev_int_tab(nb, 6);

//     i = 0;
//     while(i < 6) {
//         printf("%d ", nb[i]);
//         i++;
//     }
// }