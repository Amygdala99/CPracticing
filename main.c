#include <stdio.h>
#include <stdlib.h>
/*
void main (void) {
int a, b, c, sum;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
sum = a + b + c;
printf ("sum is %d", sum);
return;
}
*/
/*--------------------------------------------------------*/
/*
int main(void) {
int i, j;
int sum ;
i = 5 ;
j = 6 ;
sum = i + j ;
printf ("sum: %d\n", sum);
return 0;
}
*/
/*-------------------------------------------------------*/
/*
void display_square(){
printf("****\n");
printf("*  *\n");
printf("*  *\n");
printf("****\n");
}
int main(){
display_square();
display_square();
display_square();
return 0;
}
*/
/*------------------------------------------------------*/
/*
int main(){

int i=1;

//temp++;
i++;

printf("%d\n",i);
printf("%d\n",i++);
printf("%d\n",++i);
i++;
printf("%d\n",i);
++i;
printf("%d\n",++i);
return 0;
}
*/
/*--------------------------------------------------------*/
/*
int main(){
    char grade;
    int thes;
printf("Do u want to insert grade? yes-1 or no-0\n");
scanf("%d",&thes);
while (thes==1){
    printf("Gimme ur grade (A/B/C/D/F): ");
    scanf(" %c",&grade);
    switch(grade){

    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Well done\n");
        break;
    case 'C':
        printf("Well done\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'F':
        printf("Better try again\n");
        break;
    default:
        printf("Invalid grade\n");
                }
printf("Do u want to insert grade? yes-1 or no-0\n");
scanf("%d",&thes);
             }
printf("Ur last grade is %c \n",grade);
          }
*/
/*---------------------------------------------------------*/
/*
int main() {
int a = 1, b = 0;
if (a==1 || ++b ==1) {
printf("hello\n");
}
printf("value of b after if: %d\n", b);
return 0;
}
*/
/*-------------------------------------------------------*/

/*void foo(void);
void foo2(void);

int main(){

foo();
foo2();

return 0;
          }

void foo(void){
int x,y;
char z;
printf("Address of int x (foo): %lld\n",&x); //h entoli %lld briskei thesi sti mnimi tou integer
printf("Address of int y (foo): %lld\n",&y);
printf("Address of char z (foo): %lld\n",&z);
}

void foo2(void){
int x,y;
char z;
printf("Address of int x (foo2): %lld\n",&x);
printf("Address of int y (foo2): %lld\n",&y);
printf("Address of char z (foo2): %lld\n",&z);
}
*/
/*------------------------------------------------*/
/*
void read_print_char(void);
void read_print_int(void);
void read_print_float(void);

int main(){
read_print_char();
read_print_int();
//read_print_float();
return 0;
}

void read_print_char(void){
char ch;
printf("Please enter a character: ");
scanf("%c",&ch);
printf("The value is: %c and the allocated bytes are %lu\n",ch,(unsigned long)sizeof ch);
}
void read_print_int(void){
char k;
printf("Please enter an integer: ");
scanf("%d",&k);
printf("The value is: %d and the allocated bytes are %lu\n",k,(unsigned long)sizeof k);

void read_print_float(void){
float flo;
printf("Please enter a float: ");
scanf("%f",&flo);
printf("The value is: %f and the allocated bytes are %lu\n",fl,(unsigned long)sizeof flo);
}

return;
}

/*---------------------------------------------------*/
/*
int main(){
short int a;
printf("%llu\n",sizeof(a));
return 0;
}
/*----------------------------------------------------*/
/*ypologismos athroismatos 5 mh arnitikwn arithmwn*/
/*
int main(){
int a, i, sum=0;
for (i=0; i<=5; i++){
    printf("Enter a number: \n");
    scanf("%d", &a);
    if (a<0){ break;}
    else
    sum=sum+a;
    printf("Sum is: %d\n", sum);

}
}
*/
/*
int main(){
    int a, i, sum=0;
    for (i=0; i<=5; i++){

        printf("Please enter an integer: \n");
        scanf("%d", &a);

        if (a<0){
            continue;}
        sum=sum+a;
        printf("Sum is: %d\n", sum);

}


}
*/
/*------------------------------------------------------------*/
#define B 5
int main(){
    int a[B];
    return 0;}
