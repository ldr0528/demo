#include <stdio.h>
#include <string.h>

int main() {
    // ����һ���ַ��������洢������ַ���
    char str[100];
    // ��ʾ�û�����һ���ַ���
    // ʹ�� %s ��ȡһ���ַ���
    scanf("%s", str);

    // �����ַ����ĳ���
    int len = strlen(str);
    // ����һ���ַ��������洢��ת����ַ���
    char reverse_str[100];

    // ѭ����ת�ַ���
    for (int i = 0; i < len; i++) {
        reverse_str[i] = str[len - i - 1];
    }

    // �ڷ�ת����ַ���ĩβ��ӿ��ַ������γ�һ����Ч�� C �ַ���
    reverse_str[len] = '\0';

    // ʹ�� strcmp �Ƚ�ԭʼ�ַ����ͷ�ת����ַ���
    int cmp = strcmp(str, reverse_str);

    // ���ݱȽϵĽ�������Ӧ����Ϣ
    if (cmp == 0) {
        printf("0\n");
    } else if (cmp < 0) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    return 0;
}

