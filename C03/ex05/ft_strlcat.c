/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 07:50:38 by kali              #+#    #+#             */
/*   Updated: 2025/03/08 10:41:54 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *str) {
    unsigned int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int i;
    unsigned int j = 0;
    i = ft_strlen(dest);
    unsigned int dest_lenght = i;

    if(dest_lenght >= size) return size + ft_strlen(src);

    while(src[j] != '\0' && i < size - 1) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    if(dest_lenght < size) return dest_lenght;
    // if(src == 3) {}
    return ft_strlen(src) + dest_lenght;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20] = "hello worl ";
//     char src[] = " from";

//     printf("%d\n%s\n", strlcat(dest, src, 18), dest);
//     // printf("%d\n%s", ft_strlcat(dest, src, 25), dest);
// }
