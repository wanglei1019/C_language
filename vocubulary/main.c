#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    printf("please input your want to check out vocubulary munber :\n");
    int n;
    scanf("%d", &n);
    printf("please input your want to check out sentences\n");
    // 为输入字符串分配足够的内存
    char* a = (char*)malloc(sizeof(char) * 10 * n); 
    // 使用 fgets 读取字符串，限制输入长度为 10*n
    getchar();
    fgets(a, 10 * n, stdin);
    printf("your input sentences is :%s\n", a);
    int counter = 0;
    // 遍历字符串，检查单词
    for (int i = 0; i < strlen(a); i++) 
    {
        // 如果当前字符是空格或换行符
        if (a[i] == ' ' || a[i] == '\n') 
        {
            // 如果前一个字符不是空格或换行符，说明遇到了单词的结束位置
            if (i > 0 && a[i - 1] != ' ' && a[i - 1] != '\n')
            {
                counter++;
            }
        }
    }
    printf("the vocubularies is :%d\n", counter);
    // 释放动态分配的内存
    free(a);
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, const char *argv[]) {
//     printf("evaluate the string has how many words\n");
//     int n = 0;
//     scanf("%d", &n);
//     printf("please input your want to know vocabulary number\n");
//     char *a = (char *)malloc(sizeof(char) * 10 * n);
//     // scanf("%s",a);
//     getchar();  // Consume the newline character left in the buffer
//     fgets(a, 10 * n, stdin);
//     printf("you input vocabulary is %s\n", a);
//     int counter = 0;
//     while (*a != '\0') 
//     {
//         if (*a == ' ' || *a == '\n') 
//         {
//             counter++;
//         }
//         a++;
//     }
//     printf("you have %d vocabularies\n", counter);
//     free(a);
//     return 0;
// }
