/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:31:06 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:38:34 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
        {
            return(0);
        }
        i++;
    }
    return(1);
}

// #include <stdio.h>

// int main() {
//     printf("%d\n", ft_str_is_uppercase("\0"));
//     printf("%d\n", ft_str_is_uppercase("QWERTYUIOPASDFGHJKLZXCBNM"));
//     printf("%d\n", ft_str_is_uppercase("qwertyuiopasdfghjklzxcvbn"));
//     printf("%d\n", ft_str_is_uppercase("qwertyuiopasdfghjklzxAcvbn"));
//     printf("%d\n", ft_str_is_uppercase("qwertyuiopasdfghjklzxc{vbn"));
//     return 0;
// }