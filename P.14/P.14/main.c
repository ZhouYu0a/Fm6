/* ����ɮפ��e�A�íp��r���� */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr; // �ŧi���V�ɮת�����fptr
    char ch;     // �ŧi�r���ܼ�ch�A�Ψ�Ū���C�Ӧr��
    int count = 0; // �ŧi���count�A�Ψӭp��r����

    fptr = fopen("welcome.txt","r");// ���ն}���ɮ�"welcome.txt"��Ū��
    if (fptr != NULL) { // �p�Gfopen���\
        while ((ch = fgetc(fptr)) != EOF) { // Ū���ɮת����ɮ׵���
            printf("%c", ch); // ��ܦr��
            count++; // �p��r����
        }
        fclose(fptr); // �����ɮ�
        printf("\n�`�@��%d�Ӧr��\n", count); // ����`�r����
    }
    else {
        printf("�ɮ׶}�ҥ��ѡI�I\n"); // �p�G�ɮ׵L�k�}��
    }

    system("pause"); // �Ȱ��{������A���ݨϥΪ̾ާ@
    return 0;
}
