// words tokenize
int w = 0, wl = 0;
for (i = 0; i < len; i++) {
    if (s[i] == ' '){
        words[w++][wl] = '\0';
        wl = 0;
    } else{
        words[w][wl++] = s[i];
    }
}
words[w++][wl] = '\0';
