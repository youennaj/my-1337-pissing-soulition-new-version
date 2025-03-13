/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:30:30 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:32:40 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_first_letter(char str[], int index) {
    if(index == 0) return 0;
    int  k = ((str[index - 1] >= 0 && str[index - 1] <= 47) ||
             (str[index - 1] >= 58 && str[index - 1] <= 64) ||
              (str[index - 1] >= 91 && str[index - 1] <= 96) ||
             (str[index - 1] >= 123));
    return k;
}

char *ft_strcapitalize(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        if ((str[0] >= 'a' && str[0] <= 'z') || ft_is_first_letter(str, i))
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        i++;
    }
    return str;
}

// int main() {
//     char c[] = "salut, coHHJmment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     #include <stdio.h>
//     printf("%s", ft_strcapitalize(c));
// }