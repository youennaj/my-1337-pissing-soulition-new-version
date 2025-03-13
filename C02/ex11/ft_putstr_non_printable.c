/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 06:21:27 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 06:34:01 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_put_char_to_hexadicimal(char c) {
    char *hex = "0123456789abcdef";
    
    write(1, &hex[c / 16], 1);
    write(1, &hex[c % 16], 1);
}

void ft_putstr_non_printable(char *str) {
    int i = 0;
    while (str[i]) {
        if(str[i] < 32 || str[i] > 126) {
            ft_putchar('\\');
            ft_put_char_to_hexadicimal(str[i]);
        }
        else ft_putchar(str[i]);
        i++;
    }
}

// int main() {
//     ft_putstr_non_printable("Coucou\ntu vas bien ?");
// }