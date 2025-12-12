#include <stdio.h>
#include <string.h>
#include <math.h>

// 函数声明

void countChars(char str[], int* letters, int* digits, int* spaces, int* others);

int main() {
    // 第1题
    

    // 第3题
    char str2[100];
    int letters = 0, digits = 0, spaces = 0, others = 0;
    printf("请输入一个字符串：");
    gets(str2);
    countChars(str2, &letters, &digits, &spaces, &others);
    printf("字母个数：%d\n", letters);
    printf("数字个数：%d\n", digits);
    printf("空格个数：%d\n", spaces);
    printf("其他字符个数：%d\n", others);

    return 0;
}

// 函数定义


void countChars(char str[], int* letters, int* digits, int* spaces, int* others) {
   // *letters = *digits = *spaces = *others = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) (*letters)++;
        else if (c >= '0' && c <= '9') (*digits)++;
        else if (c == ' ') (*spaces)++;
        else (*others)++;
    }
}