
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

int is_valid_character(char c, char *base){
    int i = 0;        //     0123456789012345
    while(base[i]){   //base:0123456789abcdef
        if(base[i] == c) return i;//4545
        i++;
    }
    return -1;
}
// had function bax tbdel lbas li 3jbek(hexadisimal || bainary || octal || decimal) l decimal(base 10)
int ft_convert_base(char *str, char *base, int index) {//123a
    int i = index;
    int nb = 0;
    int base_lenght = ft_strlen(base);// 16
    while(str[i]) {
        if(is_valid_character(str[i], base) == -1)
        break;
        else {
            nb = nb * base_lenght + is_valid_character(str[i], base);//4666
        }
        i++;
    }
    return nb;
}

int ft_atoi_base(char *str, char *base) {
    int i;
    int sign = 1;
    int nb;
    if(ft_check_is_valid_base(base) == 0) {
        return 0;
    }
    i = 0;
    // this while to sckip white spaces
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32) {
        i++;
    }
    // this while to skip '+' and '-'
    while(str[i] == '+' || str[i] == '-') {
        if(str[i] == '-') {
            sign = -sign;
        }
        i++;
    }
    // had function bax tbdel lbas li 3jbek(hexadisimal || bainary || octal || decimal) l decimal(base 10)
    nb = ft_convert_base(str, base, i);
    return sign * nb;
}

// #include <stdio.h>

// int main() {// " "
//     // printf("%d", ft_convert_base("123a", "0123456789abcdef))
//     printf("%d", ft_atoi_base(" \t---+-2345", "0123456789"));
//   // ft_check_is_valid_base("0123445678");
// }