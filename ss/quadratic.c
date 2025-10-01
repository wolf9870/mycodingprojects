#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    float d,root1,root2;
    scanf("%d %d %d",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots are : %f,%f",root1,root2);
        return 0;

    }
    else if(d==0){
        root1=-b/2*a;
        root2=root1;
        printf("Roots are : %f,%f",root1,root2);
        return 0;
    }
    else{
        printf("Roots are complex");
        return 0;
    }
}