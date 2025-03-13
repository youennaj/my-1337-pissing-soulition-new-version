/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:05:06 by kali              #+#    #+#             */
/*   Updated: 2025/02/25 17:00:15 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str) {
    int i = 0;
    char hex[] = "0123456789abcdef";

    while(str[i] != '\0') {
        if(str[i] < 32 || str[i] == 127) {
            write(1, "\\", 1);
            write(1, &hex[str[i] / 16], 1);
            write(1, &hex[str[i] % 16], 1);
        }
        else 
            write(1, &str[i], 1);
        i++;
    }
}

int main() {
    unsigned char c = 'C';
    #include <stdio.h>
    printf("%c\n", 128);
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
}