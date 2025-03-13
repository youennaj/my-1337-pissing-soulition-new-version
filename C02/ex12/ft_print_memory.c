/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 05:36:59 by kali              #+#    #+#             */
/*   Updated: 2025/02/25 17:04:32 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_split_arr(char split_arr[][16], char *arr, unsigned int size) {
    unsigned int arr_index = 0;
    unsigned int split_arr_row = 0;
    while(split_arr_row < size / 16 + 1) {
        int j = 0;
        while(arr[arr_index] != '\0' && j < 16) {
            split_arr[split_arr_row][j] = arr[arr_index];
            j++;
            arr_index++;
            if(arr[arr_index] == '\0') return;
        }
        split_arr_row++;
    }
}

void ft_print_address(void *addr) {
    char *hex;
    unsigned long address;
    char str_adrress[17];
    int i;
    
    address = (unsigned long)addr;
    hex = "0123456789abcdef";
    
    i = 15;
    while(i >= 0) {
        str_adrress[i] = hex[address & 0xF];
        address = address >> 4;
        i--;
    }
    str_adrress[16] = '\0';
    i = 0;
    while(str_adrress[i]) {
        write(1, &str_adrress[i], 1);
        i++;
    }
}

void ft_Convert_1D_array_to_hex1(char split_arr[][16], int split_arr_index, unsigned int size) {
    unsigned int i = 0;
    char *hex = "0123456789abcdef";
    unsigned int count_size = 0;
    char c[2];
    while (i < 16 && count_size < size) {
        int  j = 0;
            while (j < 2) {
                c[0] = hex[split_arr[split_arr_index][i] / 16];
                c[1] = hex[split_arr[split_arr_index][i] % 16];
                write(1, &c[0], 1);
                write(1, &c[1], 1);
                i++;
                count_size++;
                j++;
            }
        if(i % 2 == 0&& i <= 15) write(1, " ", 1);
    }
    while(i < size) {
        if(i % 2 == 0 && i <= 15) write(1, " ", 1);
        write(1, "  ", 2);
        i++;
    }
        // i++;
}

void ft_Convert_1D_array_to_hex(char split_arr[][16], int split_arr_index, unsigned int size) {
    int i = 0;
    char *hex = "0123456789abcdef";
    unsigned int count_size = 0;
    char c[2];
    while (i < 16 && count_size != size) {
        int  j = 0;
        if(split_arr[split_arr_index][i] == '\0') {
            write(1, "  ", 2);
            i++;
        }
        else {
            while (j < 2) {
                c[0] = hex[split_arr[split_arr_index][i] / 16];
                c[1] = hex[split_arr[split_arr_index][i] % 16];
                write(1, &c[0], 1);
                write(1, &c[1], 1);
                i++;
                count_size++;
                j++;
            }    
        }
        
        if(i % 2  == 0 && i != 15) write(1, " ", 1);
        
        // i++;
    }
}


void ft_print_1D_array(char split_arr[][16], int arr_index, unsigned int size) {
    int i = 0;
    unsigned int count_size = 0;
    while (i < 16 && count_size < size) {
        if (split_arr[arr_index][i] == 0 && count_size <= size - 1) {
            write(1, ".", 1);
            return;
        } 
        else if(split_arr[arr_index][i] < 32 || split_arr[arr_index][i] >= 127) {
            write(1, ".", 1);
        }
        else {
            write(1, &split_arr[arr_index][i], 1);  
        }
        i++;
        count_size++;
    }
}

#include <stdio.h>
void *ft_print_memory(void *addr, unsigned int size) {
    char *arr;
    arr = (char *)addr;
    char split_arr[size / 16 + 1][16];
    if (size == 0) return addr;
    ft_split_arr(split_arr, arr, size);
    unsigned int i = 0;
    while (i < size / 16 + 1) {
            ft_print_address(addr + (i * 16));
            write(1, ": ", 2);
            // printf("%p\n", &split_arr[i][0]);
            ft_Convert_1D_array_to_hex(split_arr, i,16);
            // write(1, " ", 1);
            ft_print_1D_array(split_arr, i, 16);
            write(1, "\n", 1);
        i++;
    }
    return addr;
}
//output khaso ikon hka
// 000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
// 000000010a161f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo
// 000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
// 000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
// 000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
// 000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000           ..lol.lol. .
int main() {
    char str[] = "Bonjour les aminches\t\t\tc\n est fou\atout\nce qu on peut faire avec\t\t\tprint_memory\t\t\t\tlol\tlol\n ";
    void *addr = str;
    ft_print_memory(addr, 92);
    // char *hex = "0123456789abcdef";
    // char x = hex[(60 / 16)];
    // char xl = hex[(60 % 16)];
    // write(1, &x, 1);
    // write(1, &xl, 1);
}