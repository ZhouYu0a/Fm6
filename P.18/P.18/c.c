#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE* in, * out;        // �ŧi����ɮ׫��СGin(Ū���ɮ�)�Aout(�g�J�ɮ�)
    int cnt;               // �ΨӦs�x fscanf ���^�ǭ�
    char str[100];         // �r���}�C�A�ΨӦs�x�q�ɮ�Ū�����r��

    in = fopen("welcome.txt", "r");  // �HŪ���Ҧ�(r)���} welcome.txt
    out = fopen("output.txt", "w");  // �H�g�J�Ҧ�(w)���} output.txt

    while (!feof(in))                // ��|��Ū���ɮ׵�����
    {
        cnt = fscanf(in, "%s", str); // �q�ɮ� in ��Ū���@�Ӧr��
        if (cnt > 0)                // �p�G���\Ū����r��
            fprintf(out, "%s\n", str); // �N�r��g�J���ɮ� out ���A�ô���
    }

    fclose(in);  // ����Ū�����ɮ�
    fclose(out); // �����g�J���ɮ�
    system("pause"); // �Ȱ��{�� (Windows ����)
    return 0;
}
