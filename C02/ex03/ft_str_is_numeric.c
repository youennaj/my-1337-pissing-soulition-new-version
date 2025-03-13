/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:31:05 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:40:27 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str) {
    int  i = 0;
    while(str[i]) {
        if(str[i] >= '0' && str[i] <= '9') 
            i++;
        else    return 0;
    }
    return 1;
}

// int main() {
//     #include <stdio.h>
//     printf("%d ", ft_str_is_numeric("123456789"));
//     printf("%d ", ft_str_is_numeric("12345A6789"));
//     printf("%d ", ft_str_is_numeric("12.3456789"));
//     printf("%d ", ft_str_is_numeric(""));
// }