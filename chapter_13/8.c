#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 20
int compute_scrabble_value(const char *word);
int main(void)
{
  char ch;
  char word[MAX_LENGTH];
  

  printf("Enter a word: ");
  gets(word);
  printf("scrabble value: %d\n", compute_scrabble_value(word));

}
int compute_scrabble_value(const char *word){
  int sum = 0; int i = 0;
  while (word[i] != '\0'){
    switch (toupper(word[i++])) {
      case 'D': case 'G':
        sum += 2; break;
      case 'B': case 'C': case 'M': case 'P':
        sum += 3; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
        sum += 4; break;
      case 'K':
        sum += 5; break;
      case 'J': case 'X':
        sum += 8; break;
      case 'Q': case 'Z':
        sum += 10; break;
      default:
        sum++; break;
    }}
  return sum;}

