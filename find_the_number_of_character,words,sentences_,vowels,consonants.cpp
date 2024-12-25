#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, sentences = 0, vowels = 0, consonants = 0, punctuation = 0;

    fp = fopen("filename.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (isspace(ch)) {
            words++;
        } else if (ispunct(ch)) {
            punctuation++;
        } else {
            if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        if (ch == '.' || ch == '?' || ch == '!') {
            sentences++;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words + 1); // Account for the last word
    printf("Sentences: %d\n", sentences);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Punctuation marks: %d\n", punctuation);

    return 0;
}
