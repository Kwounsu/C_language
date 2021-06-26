#include <stdio.h>
#include <string.h>

int main() {
    int i, len;
    char s[100];
    
    // 공백 포함 string 입력
    fgets(s, 100, stdin);
    len = strlen(s);
    while (s[len - 1] == '\n' || s[len - 1] == '\r')
        s[--len] = '\0';
    
    // 단어 분리
    char word[50][100];
    int wcount = 0, wlen = 0;
    for (i = 0; i < len; i++){
        if (s[i] == ' '){
            word[wcount][wlen] = '\0';
            wcount++;
            wlen = 0;
        } else{
            word[wcount][wlen] = s[i];
            wlen++;
        }
    }
    word[wcount][wlen] = '\0';
    wcount++;
    
    // 단어 출력
    for (i = 0; i < wcount; i++){
        puts(word[i]);
    }
    
    return 0;
}
