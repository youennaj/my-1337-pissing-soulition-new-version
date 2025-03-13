/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:23:24 by kali              #+#    #+#             */
/*   Updated: 2025/03/05 11:23:32 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check_is_valid_base(char *base) {
    int i = 0;
    int j;
    if(base[0] == '\0' || base[1] == '\0')
        return 0;
    while(base[i] != '\0') {
        j = i + 1;
        while(base[j] != '\0') {
            if(base[i] == base[j])
                return 0;
            j++;
        }
        if(base[i] == '-' || base[i] == '+')
            return 0;
        i++;
    }
    return 1;
}

int ft_strlen(char *str) {
    int i = 0;
    while(str[i]) {
        i++;
    }
    return i;
}

void ft_convert_base(int nbr, char* base) {
    unsigned int base_lenght = ft_strlen(base);
    char c;
    unsigned int nb;

    if(nbr < 0) {
        write(1, "-", 1);
        nb = -nbr;
        // return;
    }
    else {
        nb = nbr;
    }

    if(nb == 0) {
        write(1, "0", 1);
        return;
    }
    if(nb >= base_lenght)
        ft_convert_base(nb / base_lenght, base);//"01" "1"
    c = base[nbr % base_lenght];
    write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base) {
    if(!ft_check_is_valid_base(base))
        return;
    ft_convert_base(nbr, base);
}

void ft_putchar(char c) {
    write(1, &c, 1);
}

// #include <stdio.h>
// int main() {
//     // printf("%d", ft_check_is_valid_base("01"));
//     // printf("%d", ft_check_is_valid_base("0123456789"));
//     // ft_convert_base(0, "0123456789abcdef");
//     // ft_putnbr_base(-2147483648, "01");
//     int k = 000000001;
//     printf("%d", k);

// }