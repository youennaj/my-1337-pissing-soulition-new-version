/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:09:44 by kali              #+#    #+#             */
/*   Updated: 2025/02/26 16:20:30 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlen(char *str) {
    unsigned int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)// dest = "f\0" src = "from" size 2
{
    unsigned int i;
    i = 0 ;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while (i < size)
    {
        dest[i] = '\0';
        i++;
    }
    return ft_strlen(src);
}

// #include <string.h>

// int main() {
//     char c[] = "hellf\0";
//     char b[20] = "goding with moljlaba";
//     // char d[16] = "shjf dfhdf df l";
//     printf("%d\n %s\n", ft_strlcpy(b, c, 8), b);//give in output of my function
//     printf("%ld\n %s\n", strlcpy(b, c, 8), b);// give in output of c function
// }