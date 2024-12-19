/* 使用 fread() 函數讀取檔案內容 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE *fptr;
    char str[MAX]; // 儲存讀取的內容
    int bytes;     // 儲存 fread() 成功讀取的字元數
    fptr = fopen("output.txt", "r"); // 開啟檔案進行讀取

    while (!feof(fptr)) // 如果還沒讀到檔案結尾
    {
        bytes = fread(str, sizeof(char), MAX - 1, fptr);
        str[bytes] = '\0'; // 添加字串結尾符號
        printf("%s\n", str); // 印出讀取的內容
    }

    fclose(fptr); // 關閉檔案
    system("pause"); // 暫停程式 (Windows 環境)
    return 0;
}
