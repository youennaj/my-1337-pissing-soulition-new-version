/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:36 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:42:31 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)// "hell0\0" n = 10
{
    unsigned int i;
    i = 0 ;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
// #include <string.h>
// int main ()
// {

//     char s1[]="hello bro iowjdo ijeod ijed";
//     char dest2[30] = "dsfhkdfgjhkdsjffhdjkhdskg";
//     char dest3[30];
//     char dest4[30];
   
//     ft_strncpy(dest2,s1,2);
//     // dest2[7] = '\0';
//     ft_strncpy(dest3,s1,10);
//     ft_strncpy(dest4,s1,15);
//     printf ("dest2 : %s \n",dest2);
//     printf ("dest3 : %s \n",dest3);
//     printf ("dest4 : %s \n",dest4);

// }