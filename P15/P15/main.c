/* �N�ɮפ��e�ƻs���L���ɮ� */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr1, * fptr2; // �ŧi����ɮ׫��� fptr1 �P fptr2
    char ch; // �ŧi�r���ܼ� ch
    fptr1 = fopen("welcome.txt", "r"); // �}�ҥiŪ�����ɮ�
    fptr2 = fopen("output.txt", "w"); // �}�ҥi�g�J���ɮ�

    if ((fptr1 != NULL) && (fptr2 != NULL)) { // �p�G�ɮצ��\�}��
        while ((ch = fgetc(fptr1)) != EOF) { // �P�_�O�_��F�ɮ׵���
            fputc(ch, fptr2); // �NŪ�����r���g�J�� fptr2 ���V���ɮ�
        }
        fclose(fptr1); // ���� fptr1 ���V���ɮ�
        fclose(fptr2); // ���� fptr2 ���V���ɮ�
        printf("�ɮ׫��������I�I\n"); // ��ܫ��������T��
    }
    else {
        printf("�ɮ׶}�ҥ��ѡI�I\n"); // �p�G�ɮ׵L�k�}��
    }

    system("pause"); // �Ȱ��{������A���ݨϥΪ̾ާ@
    return 0;
}
