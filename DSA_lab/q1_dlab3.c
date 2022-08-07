#include <stdio.h>

struct distance{
    int km;
    int mtr;
};
void dist(struct distance s1,struct distance s2){
    printf("Enter the distance in km,mtr:\n");
    scanf("%d %d",&s1.km,&s1.mtr);
    scanf("%d %d",&s2.km,&s2.mtr);
    int tot_km,tot_m;
    tot_m=s1.mtr+s2.mtr;    
    tot_km=s1.km+s2.km;    

    if(tot_m>=1000){
        tot_km++;
        tot_m-=1000;

    }
    printf("The total distance is %d km and %d m",tot_km,tot_m);

}
int main(){
    struct distance d1,d2;
    dist(d1,d2);
    return 0;
}