/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 05:50:19 by kali              #+#    #+#             */
/*   Updated: 2025/03/12 11:33:33 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void ft_sort_int_tab(int *tab, int size)// 1,35,8,2|| 1, 2, 8 ,35
{
    int i;
    while (size >=0 )
    {
        i=0;
        while (i <size - 1  )
        {
            if (tab[i] > tab[i+1] )
            {
              ft_swap(&tab[i], &tab[i+1]);
            }
            i++;
        }
        size--;
    }
}

// #include <stdio.h>
// int main() {
//     int nb[6] = {169, 807, 192, 33, 4422, 115};
//     int i = 0;
//     while(i < 6) {
//         printf("%d ", nb[i]);
//         i++;
//     }
//     printf("\n");
//     ft_sort_int_tab(nb, 6);

//     i = 0;
//     while(i < 6) {
//         printf("%d ", nb[i]);
//         i++;
//     }
// }