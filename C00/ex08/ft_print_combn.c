/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 03:34:56 by kali              #+#    #+#             */
/*   Updated: 2025/03/09 08:44:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// methode 1 int main in the commant
void ft_initial_array(int arr[], int nb) {
    int i = 0;
    while(i < nb) {
        arr[i] = i;
        i++;
    }
}

void ft_print_array(int arr[], int nb) {
    int i = 0;
    char c;
    while(i < nb) {
        c = arr[i] + '0';
        write(1, &c, 1);
        i++;
    }
}

void ft_increment_array_element(int arr[], int i, int nb) {
    while(i >= 0) {
        if (arr[i] < 9 - (nb - 1 - i)) {
            arr[i]++;
            i++;
            while (i < nb) {
                arr[i] = arr[i - 1] + 1;
                i++;
            }
            break;
        }
        i--;
    }
}

void ft_print_combn(int nb) {
    int arr[nb];
    int i;

    if(nb < 1 || nb > 9)
        return;
    ft_initial_array(arr, nb);
    int k = 0;
    while(k < 111) {
        ft_print_array(arr, nb);
        if (arr[0] == 10 - nb) {
            break;
        }
        write(1, ", ", 2);
        i = nb - 1;
        ft_increment_array_element(arr, i, nb);
    }
}

// methode 2 hard code

// void ft_print1_comb() {
//     int n = '0';
//     while (n <= '9') {
//         write(1, &n, 1);
//         if (n != '9')
//             write(1, ", ", 2);
//         n++;
//     }
// }

// void ft_print2_comb() {
//     int n = '0';
//     int j;
//     while (n <= '8') {
//         j = n + 1;
//         while(j <= '9') {
//             write(1, &n, 1);
//             write(1, &j, 1);
//             if (n != '8')
//                 write(1, ", ", 2);
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print3_comb() {
//     int n = '0';
//     int j, k;
//     while (n <= '7') {
//         j = n + 1;
//         while(j <= '8') {
//             k = j + 1;
//             while (k <= '9') {
//                 write(1, &n, 1);
//                 write(1, &j, 1);
//                 write(1, &k, 1);
//                 if (n != '7')
//                     write(1, ", ", 2);
//                 k++;
//             }
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print4_comb() {
//     int n = '0';
//     int j, k, h;
//     while (n <= '6') {
//         j = n + 1;
//         while(j <= '7') {
//             k = j + 1;
//             while (k <= '8') {
//                 h = k + 1;
//                 while(h <= '9') {
//                     write(1, &n, 1);
//                     write(1, &j, 1);
//                     write(1, &k, 1);
//                     write(1, &h, 1);
//                     if (n != '6')
//                         write(1, ", ", 2);
//                     h++;
//                 }
//                 k++;
//             }
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print5_comb() {
//     int n = '0';
//     int j, k, h, f;
//     while (n <= '5') {
//         j = n + 1;
//         while(j <= '6') {
//             k = j + 1;
//             while (k <= '7') {
//                 h = k + 1;
//                 while(h <= '8') {
//                     f = h + 1;
//                     while(f <= '9') {
//                         write(1, &n, 1);
//                         write(1, &j, 1);
//                         write(1, &k, 1);
//                         write(1, &h, 1);
//                         write(1, &f, 1);
//                         if (n != '5')
//                             write(1, ", ", 2);
//                         f++;
//                     }
//                     h++;
//                 }
//                 k++;
//             }
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print6_comb() {
//     int n = '0';
//     int j, k, h, f, m;
//     while (n <= '4') {
//         j = n + 1;
//         while(j <= '5') {
//             k = j + 1;
//             while (k <= '6') {
//                 h = k + 1;
//                 while(h <= '7') {
//                     f = h + 1;
//                     while(f <= '8') {
//                         m = f + 1;
//                         while (m <= '9') {
//                             write(1, &n, 1);
//                             write(1, &j, 1);
//                             write(1, &k, 1);
//                             write(1, &h, 1);
//                             write(1, &f, 1);
//                             write(1, &m, 1);
//                             if (n != '4')
//                                 write(1, ", ", 2);
//                             m++;
//                         }
//                         f++;
//                     }
//                     h++;
//                 }
//                 k++;
//             }
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print7_comb() {
//     int n = '0';
//     int j, k, h, f, m, i;
//     while (n <= '3') {
//         j = n + 1;
//         while(j <= '4') {
//             k = j + 1;
//             while (k <= '5') {
//                 h = k + 1;
//                 while(h <= '6') {
//                     f = h + 1;
//                     while(f <= '7') {
//                         m = f + 1;
//                         while (m <= '8') {
//                             i = m + 1;
//                             while (i <= '9') {
//                                 write(1, &n, 1);
//                                 write(1, &j, 1);
//                                 write(1, &k, 1);
//                                 write(1, &h, 1);
//                                 write(1, &f, 1);
//                                 write(1, &m, 1);
//                                 write(1, &i, 1);
//                                 if (n != '3')
//                                     write(1, ", ", 2);
//                                 i++;
//                             }
//                             m++;
//                         }
//                         f++;
//                     }
//                     h++;
//                 }
//                 k++;
//             }
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print8_comb() {
//     int n = '0';
//     int j, k, h, f, m, i, l;
//     while (n <= '2') {
//         j = n + 1;
//         while(j <= '3') {
//             k = j + 1;
//             while (k <= '4') {
//                 h = k + 1;
//                 while(h <= '5') {
//                     f = h + 1;
//                     while(f <= '6') {
//                         m = f + 1;
//                         while (m <= '7') {
//                             i = m + 1;
//                             while (i <= '8') {
//                                 l = i + 1;
//                                 while(l <= '9') {
//                                     write(1, &n, 1);
//                                     write(1, &j, 1);
//                                     write(1, &k, 1);
//                                     write(1, &h, 1);
//                                     write(1, &f, 1);
//                                     write(1, &m, 1);
//                                     write(1, &i, 1);
//                                     write(1, &l, 1);
//                                     if (n != '2')
//                                         write(1, ", ", 2);
//                                     l++;
//                                 }
//                                 i++;
//                             }
//                             m++;
//                         }
//                         f++;
//                     }
//                     h++;
//                 }
//                 k++;
//             }
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print9_comb() {
//     int n = '0';
//     int j, k, h, f, m, i, l, b;
//     while (n <= '1') {
//         j = n + 1;
//         while(j <= '2') {
//             k = j + 1;
//             while (k <= '3') {
//                 h = k + 1;
//                 while(h <= '4') {
//                     f = h + 1;
//                     while(f <= '5') {
//                         m = f + 1;
//                         while (m <= '6') {
//                             i = m + 1;
//                             while (i <= '7') {
//                                 l = i + 1;
//                                 while(l <= '8') {
//                                     b = l + 1;
//                                     while(b <= '9') {
//                                         write(1, &n, 1);
//                                         write(1, &j, 1);
//                                         write(1, &k, 1);
//                                         write(1, &h, 1);
//                                         write(1, &f, 1);
//                                         write(1, &m, 1);
//                                         write(1, &i, 1);
//                                         write(1, &l, 1);
//                                         write(1, &b, 1);
//                                         if (n != '1')
//                                             write(1, ", ", 2);
//                                         b++;
//                                     }
//                                     l++;
//                                 }
//                                 i++;
//                             }
//                             m++;
//                         }
//                         f++;
//                     }
//                     h++;
//                 }
//                 k++;
//             }
//             j++;
//         }
//         n++;
//     }
// }

// void ft_print_combn1(int n)
// {
//     if (n == 1)
//         ft_print1_comb();
//     else if (n == 2)
//         ft_print2_comb();
//     else if (n == 3)
//         ft_print3_comb();
//     else if (n == 4)
//         ft_print4_comb();
//     else if (n == 5)
//         ft_print5_comb();
//     else if (n == 6)
//         ft_print6_comb();
//     else if (n == 7)
//         ft_print7_comb();
//     else if (n == 8)
//         ft_print8_comb();
//     else if (n == 9)
//         ft_print9_comb();
// }


// #include <unistd.h>

// void ft_initiali_array(int *arr, int n) {
//     int i = 0;
//     while (i < n) {
//         arr[i] = i;
//         i++;
//     }
// }

// void ft_print_array(int *arr, int n) {
//     int i;
//     char c;

//     i = 0;
//     while (i < n) {
//         c = arr[i] + '0';
//         write(1, &c, 1);
//         i++;
//     }
// }

// void ft_print_combn1(int n) {
//     int arr[9];
//     ft_initiali_array(arr, n);
//     int k = 0;
//     while(k < 50) {
//         ft_print_array(arr, n);
//         if(arr[0] == 10 - n)
//             break;
//         write(1, ", ", 2);

//         arr[n - 1]++;

//         int i = n - 1;
//         int j;
//         while (i >= 0) {
//             if(arr[i] == 9 - (n -  1 - i)) {
//                 arr[i] = arr[i - 1]++;
//                 arr[i - 1]++;
//                 break;
//             }
//             i--;
//         }
//         k++;
//     }
// }

// int main() {
//     int p = 1;
//     ft_print_combn(5);
// }

// output if nb = 3
/*
012, 013, 014, 015, 016, 017, 018, 019, 023,
024, 025, 026, 027, 028, 029, 034, 035, 036,
037, 038, 039, 045, 046, 047, 048, 049, 056,
057, 058, 059, 067, 068, 069, 078, 079, 089,
123, 124, 125, 126, 127, 128, 129, 134, 135,
136, 137, 138, 139, 145, 146, 147, 148, 149,
156, 157, 158, 159, 167, 168, 169, 178, 179,
189, 234, 235, 236, 237, 238, 239, 245, 246,
247, 248, 249, 256, 257, 258, 259, 267, 268,
269, 278, 279, 289, 345, 346, 347, 348, 349,
356, 357, 358, 359, 367, 368, 369, 378, 379,
389, 456, 457, 458, 459, 467, 468, 469, 478,
479, 489, 567, 568, 569, 578, 579, 589, 678,
679, 689, 789
*/
