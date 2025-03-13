/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 07:39:13 by kali              #+#    #+#             */
/*   Updated: 2025/02/26 17:19:24 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src) {
    int dest_index = 0;
    int src_index = 0;
    while(dest[dest_index]) {
        dest_index++;
    }
    while(src[src_index]) {
        dest[dest_index++] = src[src_index++];
    }
    dest[dest_index] = '\0';
    return dest;
}

// int main() {
//     char src[] = " moljlaba";
//     char dest[] = "hello";
//     #include <stdio.h>
//     printf("%s", ft_strcat(dest, src));
// }