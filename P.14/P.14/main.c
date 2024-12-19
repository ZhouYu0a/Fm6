/* 顯示檔案內容，並計算字元數 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr; // 宣告指向檔案的指標fptr
    char ch;     // 宣告字元變數ch，用來讀取每個字元
    int count = 0; // 宣告整數count，用來計算字元數

    fptr = fopen("welcome.txt","r");// 嘗試開啟檔案"welcome.txt"並讀取
    if (fptr != NULL) { // 如果fopen成功
        while ((ch = fgetc(fptr)) != EOF) { // 讀取檔案直到檔案結尾
            printf("%c", ch); // 顯示字元
            count++; // 計算字元數
        }
        fclose(fptr); // 關閉檔案
        printf("\n總共有%d個字元\n", count); // 顯示總字元數
    }
    else {
        printf("檔案開啟失敗！！\n"); // 如果檔案無法開啟
    }

    system("pause"); // 暫停程式執行，等待使用者操作
    return 0;
}
