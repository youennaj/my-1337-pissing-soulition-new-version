/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:08:44 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:41:15 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_check_up(char* str, int i) {
    int check_up = (str[i]<  'A' || str[i] > 'Z');
    int check_lower = (str[i] < 'a' || str[i] > 'z');
    return check_lower && check_up;
}

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0') {
            if (ft_check_up(str, i)) {
            return 0;
        }
        i++;
    }
    return 1;
}

// int main() {
//     #include <stdio.h>
//     printf("%d\n", ft_str_is_alpha("qwertyuioopasdfghjklzxcvbn"));
//     printf("%d\n", ft_str_is_alpha("QWERTYUIOPASDFGHJKLZXCVBN"));
//     printf("%d\n", ft_str_is_alpha("qwertyuioopasdfghjklzxcvb2312n"));
//     printf("%d\n", ft_str_is_alpha("qwertyuioopasdfghjklzxcvb=n"));
// }