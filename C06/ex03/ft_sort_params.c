// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_sort_params.c                                   :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/03/12 10:11:42 by kali              #+#    #+#             */
// /*   Updated: 2025/03/12 11:07:21 by kali             ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


// #include <unistd.h>

// void ft_putchar(char c) {
//   write(1, &c, 1);
// }

// void ft_putstr(char *str) {//"hello\0"
//   int i = 0;
//   while(str[i] != '\0') {
//       ft_putchar(str[i]);
//       i++;
//   }
// }

// int ft_strcmp(char *s1, char *s2) {
//   int i = 0;
//   while(s1[i] != '\0' || s2[i] != '\0') {
//       if(s1[i] - s2[i] > 0)
//           return s1[i] - s2[i] ;
//       else if(s1[i] - s2[i] < 0)
//           return s1[i] - s2[i] ;
//       i++;
//   }
//   return 0;
// }

// void ft_swap(char **s1, char **s2) {
//   char *temp;
//   temp = *s1;
//   *s1 = *s2;
//   *s2 = temp;
// }

// int main(int ac, char *av[]) {
//   int i = 1;
//   int j = 1;
//   if(ac > 1) {
//     while(i < ac - 1) {
//       j = 1;
//       while(j < ac - 1) {
//         if(ft_strcmp(av[j], av[j + 1]) > 0) {
//           ft_swap(&av[j], &av[j + 1]);
//         }
//         j++;
//       }
//       i++;
//     }

//     i = 1;
//     while(i < ac) {
//       ft_putstr(av[i]);
//       ft_putchar('\n');
//       i++;
//     }
//   }
//   }

#include <unistd.h>
void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_putstr(char *str) {//"hello\0"
  int i = 0;
  while(str[i] != '\0') {
      ft_putchar(str[i]);
      i++;
  }
}

int ft_strcmp(char *s1, char *s2) {
  int i = 0;
  while((s1[i] == s2[i]) && s2[i] != '\0') {
      i++;
  }
  return s1[i] - s2[i];
}

void ft_swap_str(char **str1, char **str2) {
  char *temp;
  temp = *str1;
  *str1 = *str2;
  *str2 = temp;
}

int main(int ac, char *argv[]) {
  int i = ac - 1;
  int j;
//  z a d b || a b d z
  if(ac > 1) {
    while(i >= 0) {
      j = 1;
      while(j < i) {
        if(ft_strcmp(argv[j], argv[j + 1]) > 0) {
          ft_swap_str(&argv[j], &argv[j+1]);
        }
        j++;
      }
      i--;
    }

    i = 1;
    while(i < ac) {
      ft_putstr(argv[i]);
      ft_putchar('\n');
      i++;
    }
  }
}