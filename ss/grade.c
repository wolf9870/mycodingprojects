#include <stdio.h>

int main(){
    int grade;
    scanf("%d",&grade);
    
    if(grade<=34 && grade>=0){
        printf("Grade F");
    }
    else if(grade<=49){
        printf("Grade D");

    }
    else if(grade<=74){
        printf("Grade C");

    }
    else if(grade<=89){
        printf("Grade B");

    }
    else if(grade<=100){
        printf("Grade A");

    }
    else{
        printf("Invalid marks");

    }
}