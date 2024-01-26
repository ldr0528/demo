#include <stdio.h>
#include <string.h>

int main() {
    // 声明一个字符数组来存储输入的字符串
    char str[100];
    // 提示用户输入一个字符串
    // 使用 %s 读取一个字符串
    scanf("%s", str);

    // 计算字符串的长度
    int len = strlen(str);
    // 声明一个字符数组来存储反转后的字符串
    char reverse_str[100];

    // 循环反转字符串
    for (int i = 0; i < len; i++) {
        reverse_str[i] = str[len - i - 1];
    }

    // 在反转后的字符串末尾添加空字符，以形成一个有效的 C 字符串
    reverse_str[len] = '\0';

    // 使用 strcmp 比较原始字符串和反转后的字符串
    int cmp = strcmp(str, reverse_str);

    // 根据比较的结果输出相应的信息
    if (cmp == 0) {
        printf("0\n");
    } else if (cmp < 0) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    return 0;
}

