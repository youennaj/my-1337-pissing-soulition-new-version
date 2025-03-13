
unsigned int ft_strlen(char *base) {
  unsigned int i;
  i = 0;
  while(base[i] != '\0')
      i++;
  return i;
}

int ft_check_is_valid_base(char *base) {// ""
  unsigned int i;
  unsigned int j;

  if(ft_strlen(base) == 0 || ft_strlen(base) == 1)
      return 0;
  i = 0;
  while(base[i] != '\0') {
      j = i + 1;
      while(base[j] != '\0') {
          if(base[i] == base[j])
              return 0;
          j++;
      }
      i++;
  }
  i = 0;
  while(base[i]) {
      if(base[i] == '+' || base[i] == '-' || (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
          return 0;
        i++;
  }
  return 1;
}

int ft_power(int nb, int power) {// power = 2 || nb = 5
  int i = 0;
  int mul = 1;
  if(power == 0) return 1;
  while(i < power) {
      mul = mul * nb;
      i++;
  }
  return mul;
}

int ft_convert_str_to_int(char *str, char* base, int first_caracter_in_base, int last_caracter_in_base, int base_lenght) {
  int j = 1;
  int i = last_caracter_in_base;
  int resoult = 0;
  int nb;
  while(i >= first_caracter_in_base) {
    nb = base[str[i] % base_lenght];
    nb = nb * ft_power(base_lenght, j);
    resoult = resoult + nb;
    j++;
    i--;
  }
  return resoult;
}


int ft_atoi_base(char *str, char *base) {
  int i;
  int sign = 1;
  int first_caracter_in_base;
  int j;
  int find_caracter_in_base = 0;
  int nb;
  if(ft_check_is_valid_base(base) == 0)
      return 0;
  i = 0;
  // this while to sckip white spaces
  while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
      i++;
  // this while to skip '+' and '-'
  while(str[i] == '+' || str[i] == '-') {
      if(str[i] == '-')
          sign = -sign;
      i++;
  }
  first_caracter_in_base = i;
  //this while to find the nember by base
  while(str[i]) {
    j = 0;
    while(base[j]) {
      if(base[j] == str[i]) {
        find_caracter_in_base = 1;
        break;
      }
      j++;
    }
    if(find_caracter_in_base == 0) break;
    i++;
  }
  nb = ft_convert_str_to_int(str, base, first_caracter_in_base, i - 1, ft_strlen(base));
  return nb;
}

#include <stdio.h>

int main() {// " "
  // printf("%d", ft_atoi_base(" \t---+10001234ab567klj", "01"));
  printf("%d", ft_convert_str_to_int("12341ab567", "0123456789", 0, 4, 16));
// ft_check_is_valid_base("0123445678");
}