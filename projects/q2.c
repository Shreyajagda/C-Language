#include<stdio.h>
 int main(){
    float salary,HRA,DA,TA ;
    printf("Enter the base salary : ");
    scanf("%f", &salary);
    HRA = (salary *10)/100;
    DA = (salary *5)/100;
    TA = (salary *8)/100;

    float gloss_salary = salary + HRA + DA + TA;
    printf(" Your gloss salary : %f", gloss_salary);
    return 0;
}