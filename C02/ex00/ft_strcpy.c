/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:43:44 by kali              #+#    #+#             */
/*   Updated: 2025/02/19 12:30:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src) {// "hello\0"
    int i = 0;

    while(src[i] != 0) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// #include <string.h>
// int main() {
//     char arr[] = "hello world";
//     char dest[20] = "feprfoeokffdfdkljfd";
    
//     #include <stdio.h>
//     printf("%s", ft_strcpy(dest, arr));
// }

// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>
// char *ft_strcpy(char *dest, char *src)
// {
//     strcpy(src,dest);
// }
// int main ()
// {
//     char s1[30]="hello world";
//     char s2[30]="hello";
//     printf ("%s ",s1);
//     printf ("%s ",s2);
//     ft_strcpy(s1,s2);
//     printf ("\n");
//     printf ("%s ",s1);
//     printf ("%s ",s2);
// }