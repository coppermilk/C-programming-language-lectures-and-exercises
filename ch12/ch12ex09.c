int main() {
        char ** pa;
        int count_words;
        char tmp_word[64];
        int len_word;

        printf("Input num of words: ");
        scanf("%d", & count_words);

        pa = malloc(count_words * sizeof(char * ));
        printf("Input words: ");
  
        for (int i = 0; i < count_words; i++) {
                scanf("%s", tmp_word);
                len_word = strlen(tmp_word) + 1;
                pa[i] = malloc(count_words * sizeof(char));
                strncpy(pa[i], tmp_word, len_word);
        }

        for (int i = 0; i < count_words; i++) {
                puts(pa[i]);
                free(pa[i]);
        }
  
        free(pa);
        return 0;
}
