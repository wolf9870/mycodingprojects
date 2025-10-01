#include <stdio.h>

int main(){
    int day,month,year,ly;

    scanf("%d %d %d",&day,&month,&year);
    if(year%4==0){
        if(year%100==0 && year%400!=0){
            ly=0;
        }
        else ly=1;
    }
    else ly=0;
    if(day!=30 && day!=31 && month!=2){
        day+=1;
        printf("%d - %d - %d",day,month,year);
        return 0;

    }
    else if(day==30){
        if(month==4 || month==6 || month==9 || month==11){
            day=1;
            month+=1;
            printf("%d - %d - %d",day,month,year);
            return 0;

        }
        else {
            day+=1;
            printf("%d - %d - %d",day,month,year);
             return 0;
        }
    }
    else if(day==31){
        if(month!=12){
        month+=1;
        day=1;
        printf("%d - %d - %d",day,month,year);
         return 0;}
        else{
            day=1;
            month=1;
            year+=1;
            printf("%d - %d - %d",day,month,year);
            return 0;
        }
    }
    if(month==2){
        if(day==28){
            if(ly==1){
                day+=1;
                printf("%d - %d - %d",day,month,year);
                 return 0;
            }
            else{
                day=1;
                month+=1;
                printf("%d - %d - %d",day,month,year);
                 return 0;
            }
        }
        else{
            day+=1;
            printf("%d - %d - %d",day,month,year);
            return 0;

        }
    }
}