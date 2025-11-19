#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>  // 错误码定义

// 冒泡排序函数
void sort_string(char* str, size_t len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE* fa = NULL, * fb = NULL, * fc = NULL;
    errno_t err;
    char buffer[256] = { 0 };  // 合并缓冲区
    size_t len = 0;

    // 1. 打开文件A（只读）
    if ((err = fopen_s(&fa, "A.txt", "r")) != 0) {
        perror("打开A文件失败");
        return EXIT_FAILURE;
    }

    // 2. 打开文件B（只读）
    if ((err = fopen_s(&fb, "B.txt", "r")) != 0) {
        perror("打开B文件失败");
        fclose(fa);
        return EXIT_FAILURE;
    }

    // 3. 创建文件C（写入）
    if ((err = fopen_s(&fc, "C.txt", "w")) != 0) {
        perror("创建C文件失败");
        fclose(fa);
        fclose(fb);
        return EXIT_FAILURE;
    }

    // 4. 读取A文件内容并合并
    if (fgets(buffer, sizeof(buffer), fa) != NULL) {
        len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') buffer[--len] = '\0';  // 移除换行符
    }

    // 5. 读取B文件内容并追加
    if (fgets(buffer + len, sizeof(buffer) - len, fb) != NULL) {
        len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') buffer[--len] = '\0';
    }

    // 6. 按字母顺序排序
    sort_string(buffer, len);

    // 7. 写入文件C
    fputs(buffer, fc);
    printf("合并排序完成！结果已写入C.txt\n");

    // 8. 关闭所有文件
    fclose(fa);
    fclose(fb);
    fclose(fc);
    return EXIT_SUCCESS;
}