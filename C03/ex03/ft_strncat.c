/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 07:46:44 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 07:48:14 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    unsigned int dest_index = 0;
    unsigned int src_index = 0;
    while(dest[dest_index]) {
        dest_index++;
    }
    while(src[src_index] && src_index < nb) {
        dest[dest_index++] = src[src_index++];
    }
    dest[dest_index] = '\0';
    return dest;
}