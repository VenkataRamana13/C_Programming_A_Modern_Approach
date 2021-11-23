/*#include <stdio.h>
#include <ctype.h>
int main(){
	char a[20], b[20]; int i = 0, j = 0, k = 0, n, flag = 0; int alph_array_1[26] = {0}, alph_array_2[26] = {0};
	printf("Enter first word: ");
	while ((a[i++] = getchar()) != '\n')
		;
    for (; j < i; j++){
        a[j] = tolower(a[j]);}
    for (; j < i; j++){
        b[j] = tolower(b[j]);}
	printf("Enter second word: ");
	while ((b[k++] = getchar()) != '\n')
		;
	for (j = 0; j<i; j++){
		n = a[j] - 'a';
		++alph_array_1[n];
	}
	for (j = 0; j<k; j++){
		n = b[j] - 'a';
		++alph_array_2[n];
	}
	for (j = 0; j < 26; j++){
		if (alph_array_1[j] != alph_array_2[j])
			break;
			
		else{
			flag = 1;}
		}
	
	if (flag == 0){
		printf("The words are not anagrams\n");
		}
	else{
		printf("The words are anagrams\n");
	}
}

*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
void read_word(int counts[26], char a[]);
bool equal_array(int counts1[26], int counts2[26]);
int main(){
    char a[20],b[20]; int i = 0, j = 0; 
    printf("Enter the first word: ");
    while ((a[i++] = getchar()) != '\n')
        ;
    int counts_1[26] = {0}, counts_2[26] = {0};
    printf("Enter the second word: ");
    while ((b[j++] = getchar()) != '\n')
        ;
    read_word(counts_1, a);
    read_word(counts_2, b);
    equal_array(counts_1, counts_2);
    if (equal_array)
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");
}
void read_word(int counts[26], char a[]){
    int n;
    for (int j = 0; j < 20; j++){
		n = a[j] - 'a';
        ++counts[n];
	}}
bool equal_array(int counts1[26], int counts2[26]){
     int flag = 0;
     for (int j = 0; j < 26; j++){
		if (counts1[j] != counts2[j])
			break;
			
		else{
			flag = 1;}
		}
     if (flag)
         return true;
     else 
         return false;
}
