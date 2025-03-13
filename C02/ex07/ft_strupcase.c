/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:41:54 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:36:27 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char *ft_strupcase(char *str) {

// }
#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        //     104 >= 97 &&    104 <= 122 = true 
        {
            str[i] -= 32;
            // 104 - 32 = 72 = H 
            // 101 - 32 = 69 = E
        }
        
        i++;
    }
    return str;
}

// int main() {
//     #include <stdio.h>
//     // char c = 'a' - 32;
//     // printf("%c", c);
//     char c[] = "dshfdsjkhdfHKLJ";
//     // ft_strupcase(c);
//     printf("%s", ft_strupcase("sadhdffd"));
// }