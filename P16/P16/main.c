/* ��J�ñN���e���[���ɮ� output.txt */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTER 13
#define MAX 80

int main(void) {
    FILE* fptr;
    char str[MAX]; // �ŧi�r���}�C str �Ψ��x�s����L��J���r��
    char ch; // �ŧi�r���ܼ� ch �Ψ�Ū���C����J���r��
    int i = 0;

    fptr = fopen("output.txt", "a"); // �}���ɮ� output.txt�A�åH���[�Ҧ��g�J
    printf("�п�J�r��A��ENTER�䵲����J�G\n");

    while ((ch = getche()) != ENTER && i < MAX) { // ���U ENTER �� i >= MAX �|����
        str[i++] = ch; // �N�C�����䪺�r���x�s��r���}�C str ��
    }

    putc('\n', fptr); // �N����Ÿ��g�J�ɮ�
    fwrite(str,sizeof(char),i, fptr);// �N�r���}�C str �g�J�ɮ�
    fclose(fptr); // �����ɮ�

    printf("\n�ɮת��[�����I�I\n");
    system("pause"); // �Ȱ��{������A���ݨϥΪ̾ާ@
    return 0;
}
