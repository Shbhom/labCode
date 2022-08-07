#include <stdio.h>

struct time{
    int hr;
    int min;
    int sec;
};
void func(struct time s1,struct time s2,int a){
    printf("Enter the time in hrs,mins,secs:\n");
    scanf("%d %d %d",&s1.hr,&s1.min,&s1.sec);
    scanf("%d %d %d",&s2.hr,&s2.min,&s2.sec);
    printf("\nif you want to add them enter 1 or if you want to subtract them enter 2 : ");
    scanf("%d",&a);
    int tot_hr,tot_min,tot_sec;
    if (a==1){
        tot_hr=s1.hr+s2.hr;
        tot_min=s1.min+s2.min;
        tot_sec=s1.sec+s2.sec;
        if(tot_sec>=60){
            tot_min++;
            tot_sec-=60;
        }
        if(tot_min>=60){
            tot_hr++;
            tot_min-=60;
        }
    }

    else{
        tot_hr=s1.hr-s2.hr;
        tot_min=s1.min-s2.min;
        tot_sec=s1.sec-s2.sec;
        if(tot_sec<0){
            tot_min--;
            tot_sec+=60;
        }
        if(tot_min<0){
            tot_hr--;
            tot_min+=60;
        }
    }
    printf("The total time is %d hr %d min %d sec",tot_hr,tot_min,tot_sec);
}
int main(){
    struct time t1,t2;
    int n;
    func(t1,t2,n);
    return 0;
}