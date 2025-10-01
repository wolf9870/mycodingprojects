#include <stdio.h>
int main(){
    auto x=0;
    int a=10,b=50,c=300;
    int max=a>b?a>c?a:c:b>c?b:c;
    printf("%d",max);
    printf("%d",x);

}