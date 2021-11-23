#include <stdio.h>
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

				

