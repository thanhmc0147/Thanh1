#include <stdio.h>
int main(){
float a,b,c,dt,x1,x2;
printf ("Nhap so a:");
scanf("%f",&a);
printf("Nhap so b:");
scanf("%f",&b);
printf("Nhap so c:");
scanf("%f",&c);
if (a == 0){
    if ( b ==0){
        if (c == 0){
            printf("phuong trinh vo so nghiem");
        }else{
            printf ("phuong trinh vo nghiem");
        }
        printf ("phuong trinh co nghiem duy nhat %.2f",-c/b);
        }
    } else {
        dt = b*b - 4*a*c;
        if (dt > 0) {
            x1= ( -b + sqrt(dt))/(2*a);
            x2= ( -b - sqrt(dt))/(2*a);
            printf("Nghiem x1=%.2f ", x1);
            printf("Nghiem x2=%.2f ", x2);
        } else if (dt == 0){
            printf("Nghiem kep la %.2f ", -b/(2*a));
        } else {
            printf("Phuong trinh vo nghiem ");
        }
    }
}