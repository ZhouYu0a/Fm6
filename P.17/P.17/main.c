/* �ϥ� fread() ���Ū���ɮפ��e */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE *fptr;
    char str[MAX]; // �x�sŪ�������e
    int bytes;     // �x�s fread() ���\Ū�����r����
    fptr = fopen("output.txt", "r"); // �}���ɮ׶i��Ū��

    while (!feof(fptr)) // �p�G�٨SŪ���ɮ׵���
    {
        bytes = fread(str, sizeof(char), MAX - 1, fptr);
        str[bytes] = '\0'; // �K�[�r�굲���Ÿ�
        printf("%s\n", str); // �L�XŪ�������e
    }

    fclose(fptr); // �����ɮ�
    system("pause"); // �Ȱ��{�� (Windows ����)
    return 0;
}
