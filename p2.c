#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countConsonants(char str[]) {
    int freq[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            freq[ch - 'a']++;
        }
    }

    printf("Consonant frequencies:\n");
    for (int i = 0; i < 26; i++) {
        char ch = i + 'a';
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') && freq[i] > 0) {
            printf("%c: %d\n", ch, freq[i]);
        }
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countConsonants(sentence);
    return 0;
}
