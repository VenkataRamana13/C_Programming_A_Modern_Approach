#nclude <stdio.h>
int main(){
	char a[80], c; int n, j, i = 0;
	printf("Enter message to be encrypted: ");
	while((a[i++] = getchar()) != '\n')
	       ;
	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);
	for (j = 0; j<i; j++){
		if (a[j] >= 'a' && a[j] <= 'z'){
			printf("%c", ((a[j] - 'a') + n) % 26 + 'a');}
		else if (a[j] >= 'A' && a[j] <= 'Z'){
			printf("%c", ((a[j] - 'A') + n) % 26 + 'A');}
		else
			printf("%c", a[j]);
		}
	printf("\n");
}
