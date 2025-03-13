int ft_atoi(char *str) {// "\n \t \a ---+--+1234ab567"
    int i = 0;
    int calcMins = 0;
    int nb = 0;
    //for skip white space
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    // this while to skip - and + and select signed of str
    while (str[i] == '+' || str[i] == '-') {
        if(str[i] == '-') {
            calcMins++;
            // sign = sign * -1;// -1 * -1
        }
        i++;
    }
    // this while to convert str to int
    while(str[i] >= '0' && str[i] <= '9') {// 123a \| nb * 10 + (str[i] - '0')
        nb = nb * 10 + (str[i] - '0');
        i++;
    }

    if(calcMins % 2 != 0) nb = -nb;
    return nb;
}

// #include <stdio.h>
// #include <limits.h>
// int main() {
//     // printf("%d \n", 2147483647 - (-2147483648));
//     printf("%d\n", ft_atoi("\n \t  ---+--+1234ab567"));
// }