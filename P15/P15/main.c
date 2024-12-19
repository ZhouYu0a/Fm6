/* 將檔案內容複製到其他的檔案 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr1, * fptr2; // 宣告兩個檔案指標 fptr1 與 fptr2
    char ch; // 宣告字元變數 ch
    fptr1 = fopen("welcome.txt", "r"); // 開啟可讀取的檔案
    fptr2 = fopen("output.txt", "w"); // 開啟可寫入的檔案

    if ((fptr1 != NULL) && (fptr2 != NULL)) { // 如果檔案成功開啟
        while ((ch = fgetc(fptr1)) != EOF) { // 判斷是否到達檔案結尾
            fputc(ch, fptr2); // 將讀取的字元寫入到 fptr2 指向的檔案
        }
        fclose(fptr1); // 關閉 fptr1 指向的檔案
        fclose(fptr2); // 關閉 fptr2 指向的檔案
        printf("檔案拷貝完成！！\n"); // 顯示拷貝完成訊息
    }
    else {
        printf("檔案開啟失敗！！\n"); // 如果檔案無法開啟
    }

    system("pause"); // 暫停程式執行，等待使用者操作
    return 0;
}
