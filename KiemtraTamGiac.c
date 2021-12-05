#include <stdio.h>
 int main(){
     float a, b, c ;
     do {
        printf (" Nhap so a , b, c ");
            scanf("%f",&a);
            scanf("%f",&b);
            scanf("%f",&c);
    
     }while (a <= 0 || b <= 0 || c <= 0);
     

     if ((a < c + b) && (c < a + b) && (b < a + c)){

     printf ("3 canh la tam giac ");

     } else {

     printf ("3 canh ko la tam giac");}
}