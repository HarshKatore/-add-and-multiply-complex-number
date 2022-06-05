// C program with functions to 1)read complex number 2)add  3)multiply
#include<stdio.h>
typedef struct complex{
    int c1;
    int c2;
    int c3;
    int c4;
} p;
p readcomplex(){
p a;
printf("ENTER THE REAL PART OF FIRST COMPLEX NUMBER: ");
scanf("%d",&a.c1);
printf("ENTER THE COMPLEX PART OF FIRST COMPLEX NUMBER: ");
scanf("%d",&a.c2);
printf("ENTER THE REAL PART OF SECOND COMPLEX NUMBER: ");
scanf("%d",&a.c3);
printf("ENTER THE COMPLEX PART OF SECOND COMPLEX NUMBER: ");
scanf("%d",&a.c4);
return a;
}
void complexoperation(p a){
    //addition
    printf("\nTHE ADDITION OF COMPLEX NUMBER COMES TO BE: %d+%di",a.c1+a.c3,a.c2+a.c4);
    //MULTIPLICATION
    printf("\nTHE MULTIPLICATION OF COMPLEX NUMBER COMES TO BE: %d+%di",((a.c1*a.c3)-(a.c2*a.c4)),((a.c1*a.c4)+(a.c2*a.c3)));
}
int main(){

 p a=   readcomplex();
complexoperation(a);
    return 0;
}