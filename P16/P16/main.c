/* 輸入並將內容附加到檔案 output.txt */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ENTER 13
#define MAX 80

int main(void) {
    FILE* fptr;
    char str[MAX]; // 宣告字元陣列 str 用來儲存由鍵盤輸入的字元
    char ch; // 宣告字元變數 ch 用來讀取每次輸入的字元
    int i = 0;

    fptr = fopen("output.txt", "a"); // 開啟檔案 output.txt，並以附加模式寫入
    printf("請輸入字串，按ENTER鍵結束輸入：\n");

    while ((ch = getche()) != ENTER && i < MAX) { // 按下 ENTER 或 i >= MAX 會結束
        str[i++] = ch; // 將每次按鍵的字元儲存到字元陣列 str 中
    }

    putc('\n', fptr); // 將換行符號寫入檔案
    fwrite(str,sizeof(char),i, fptr);// 將字元陣列 str 寫入檔案
    fclose(fptr); // 關閉檔案

    printf("\n檔案附加完成！！\n");
    system("pause"); // 暫停程式執行，等待使用者操作
    return 0;
}
