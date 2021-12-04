//area of circle
#include<stdio.h>
void area_pri(float,float*,float*);
int main(){
    float radius,area,perimeter ;
    printf("enter radius of circle\n");
    scanf("%f",&radius);
    area_pri(radius,&area,&perimeter);
    printf("\n area of circle=%f2f\n",area);
    printf("\n perimeter of circle=%f2f\n",perimeter);
    return 0;
}
void area_pri(float r,float *a, float *p){
    *a=3.14*r*r;
    *p=2*3.14*r;
    
}