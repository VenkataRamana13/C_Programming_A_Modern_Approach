#include <stdio.h>
int main(){
    int grade; char letter_grade;
    printf ("Enter numerical grade: ");
    scanf ("%d", &grade);
    grade = grade % 10;
    switch (grade){
        case 0: case 1: case 2: case 3: case 4: case 5: 
            letter_grade = 'F'; break;
        case 6: 
            letter_grade = 'D'; break;
        case 7: 
            letter_grade = 'C'; break;
        case 8: 
            letter_grade = 'B'; break;
        case 9: 
            letter_grade = 'A'; break;
        default:
            printf("error\n");                
    }
    printf("Letter grade: %c\n", letter_grade);
}