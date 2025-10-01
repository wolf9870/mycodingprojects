#include <bits/stdc++.h>
using namespace std;
int main(){
    // ax^2 + bx + c = 0 
    char exp[100];
    scanf("%s",exp); 
    int a=exp[0]-'0';
    int b=exp[5]-'0';
    int c=exp[8]-'0';
    int d=pow(b,2)-4*a*c;
    if(d>0){
        printf("Roots are real and distinct");
    }
    else if(d==0){
        printf("Roots are real and equal");
    }
    else{
        printf("Roots are complex");
    }



}