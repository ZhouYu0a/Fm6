#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE* in, * out;        // 宣告兩個檔案指標：in(讀取檔案)，out(寫入檔案)
    int cnt;               // 用來存儲 fscanf 的回傳值
    char str[100];         // 字元陣列，用來存儲從檔案讀取的字串

    in = fopen("welcome.txt", "r");  // 以讀取模式(r)打開 welcome.txt
    out = fopen("output.txt", "w");  // 以寫入模式(w)打開 output.txt

    while (!feof(in))                // 當尚未讀到檔案結尾時
    {
        cnt = fscanf(in, "%s", str); // 從檔案 in 中讀取一個字串
        if (cnt > 0)                // 如果成功讀取到字串
            fprintf(out, "%s\n", str); // 將字串寫入到檔案 out 中，並換行
    }

    fclose(in);  // 關閉讀取的檔案
    fclose(out); // 關閉寫入的檔案
    system("pause"); // 暫停程式 (Windows 環境)
    return 0;
}
