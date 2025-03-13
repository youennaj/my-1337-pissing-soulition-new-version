/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:45:29 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:40:11 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 97 || str[i] > 122)
        {
            return(0);
        }
        i++;
    }
    return(1);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     printf("%d\n", ft_str_is_lowercase("\0"));
//     printf("%d\n", ft_str_is_lowercase("1qwertyuiopasdfghjklzxcvbn"));
//     printf("%d\n", ft_str_is_lowercase("qwertyuiopasdfghjklz2xcvbn"));
//     printf("%d\n", ft_str_is_lowercase("qwertyuiopasdfghjklzxAcvbn"));
//     printf("%d\n", ft_str_is_lowercase("qwertyuiopasdfghjklzxc{vbn"));
//     return 0;
// }