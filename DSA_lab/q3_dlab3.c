#include<stdio.h>

struct employee{
    char name[20];
    char gender[10];
    char department[10];
    int basic_pay;
    int gross_pay;
};

int main(){
    struct employee e[3];
    float gross_pay[3];
    for(int i=0;i<3;i++){
        printf("enter the name, gender, department and basic pay of the employee : \n");
        scanf("%s %s %s %d",&e[i].name,&e[i].gender,&e[i].department,&e[i].basic_pay);
    }
    for(int i=0;i<3;i++){
        gross_pay[i]= (((0.25)*e[i].basic_pay)+((0.75)*e[i].basic_pay)+e[i].basic_pay);
    }
    printf("the gross salary of the each employee is \n");
    for(int i=0;i<3;i++){
        printf("%s : %f \n",e[i].name,gross_pay[i]);
    }
}
