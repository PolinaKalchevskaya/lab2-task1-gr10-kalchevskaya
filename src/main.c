/*
 * Author: Kalchevskaya Polina, group 10
 * Description: Program to count occurrences of a specific letter in three sentences
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Function: count_letter_in_sentence
 * Purpose: Count occurrences of a specific letter in a sentence
 * Parameters:
 *   sentence - the sentence to analyze
 *   letter - the letter to count (case insensitive)
 * Returns: number of occurrences
 */
int count_letter_in_sentence(const char *sentence, char letter) {
    int count = 0;
    char lower_letter = tolower(letter);
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (tolower(sentence[i]) == lower_letter) {
            count++;
        }
    }
    return count;
}

int main() {
    char sentence1[256], sentence2[256], sentence3[256];
    char letter;
    int total_count = 0;
    
    printf("=== Letter Counter Program ===\n");
    printf("Author: Kalchevskaya Polina, group 10\n\n");
    
    printf("Enter first sentence: ");
    fgets(sentence1, sizeof(sentence1), stdin);
    sentence1[strcspn(sentence1, "\n")] = 0;
    
    printf("Enter second sentence: ");
    fgets(sentence2, sizeof(sentence2), stdin);
    sentence2[strcspn(sentence2, "\n")] = 0;
    
    printf("Enter third sentence: ");
    fgets(sentence3, sizeof(sentence3), stdin);
    sentence3[strcspn(sentence3, "\n")] = 0;
    
    printf("Enter the letter to count: ");
    scanf("%c", &letter);
    
    printf("\n--- Results ---\n");
    printf("First sentence: \"%s\"\n", sentence1);
    printf("Count of '%c': %d\n", letter, count_letter_in_sentence(sentence1, letter));
    
    printf("Second sentence: \"%s\"\n", sentence2);
    printf("Count of '%c': %d\n", letter, count_letter_in_sentence(sentence2, letter));
    
    printf("Third sentence: \"%s\"\n", sentence3);
    printf("Count of '%c': %d\n", letter, count_letter_in_sentence(sentence3, letter));
    
    total_count = count_letter_in_sentence(sentence1, letter) + 
                  count_letter_in_sentence(sentence2, letter) + 
                  count_letter_in_sentence(sentence3, letter);
    
    printf("\nTOTAL count of '%c' in all sentences: %d\n", letter, total_count);
    
    return 0;
}
