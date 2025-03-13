/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 10:21:22 by kali              #+#    #+#             */
/*   Updated: 2025/03/09 10:58:28 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_power(int nb, int power) {
  if(power < 0) {
    return 0;
  }
  if(power == 0)
    return 1;
  return nb * ft_recursive_power(nb, power - 1);
}


// // 5 power 3 = 5 * 5 * 5 || 5 power 2 = 5 * 5
// int main() {
//   printf("%d", ft_recursive_power(5, 2));
// }



// First call: ft_recursive_power(5, 5) --→ 5 * ft_recursive_power(5, 4)  (waits for result)
// Second call: ft_recursive_power(5, 4) -→ 5 * ft_recursive_power(5, 3)  (waits for result)
// Third call: ft_recursive_power(5, 3) --→ 5 * ft_recursive_power(5, 2)  (waits for result)
// Fourth call: ft_recursive_power(5, 2) -→ 5 * ft_recursive_power(5, 1)  (waits for result)
// Fifth call: ft_recursive_power(5, 1) --→ 5 * ft_recursive_power(5, 0)  (waits for result)

// Base case: ft_recursive_power(5, 0) → returns 1

// Now, returning step by step:
// ft_recursive_power(5, 1) → 5 * 1 = 5
// ft_recursive_power(5, 2) → 5 * 5 = 25b
// ft_recursive_power(5, 3) → 5 * 25 = 125
// ft_recursive_power(5, 4) → 5 * 125 = 625
// ft_recursive_power(5, 5) → 5 * 625 = 3125

    // after recursive :

// Fifth call: ft_recursive_power(5, 1) --→ 5 * ft_recursive_power(5, 0)  (result is 5)
// Fourth call: ft_recursive_power(5, 2) -→ 5 * ft_recursive_power(5, 1)  (result is 25)
// Third call: ft_recursive_power(5, 3) --→ 5 * ft_recursive_power(5, 2)  (result is 125)
// Second call: ft_recursive_power(5, 4) -→ 5 * ft_recursive_power(5, 3)  (result is 625)
// First call: ft_recursive_power(5, 5) --→ 5 * ft_recursive_power(5, 4)  (result is 3125)