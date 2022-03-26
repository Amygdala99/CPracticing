#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
/*pyramid*/
/*
int main()
{   int totalRowNo, row, space, symbol;
    printf("Enter the number of rows:\n");
    scanf("%d",&totalRowNo);
    for (row=1; row<=totalRowNo; row++){
        for (space=1; space<=totalRowNo-row; space++){
            printf(" ");
        }
        for (symbol=1; symbol<=((2*row)-1); symbol++){
        printf("*");
        }

    printf("\n");
    }
    return 0;
}
/*-----------------------------------------------------------*/
/*rectangular*/
/*
int get_dimension(void);
void print_rect(int);
int main(void){
    int dimension;
    dimension=get_dimension();
    print_rect(dimension);
    }

int get_dimension(void){
    int dimension;
    printf("\n Please enter the dimension: ");
    scanf("%d",&dimension);
    return dimension;
}

void print_rect(int dimension){
    int x,y;
    for (y=0; y<dimension; y++){
        printf("\n");
        for (x=0; x<dimension; x++){
            printf("*");
        }
    }
return;
}
*/
/*------------------------------------------------------*/

/*modified rectangular (perimeter)*/
/*
int get_dimension(void);
void print_rect(int);
int is_perimeter(int, int, int);
int is_rectangular(int, int);

int main(void){
    int dimension;
    dimension=get_dimension();
    print_rect(dimension);
    return 0;
    }

int get_dimension(void){
    int dimension;
    printf("\n Please enter the dimension: ");
    scanf("%d",&dimension);
    return dimension;
}

void print_rect(int dimension){
    int x,y;
    for (y=1; y<=dimension; y++){
        printf("\n");
        for (x=1; x<=dimension; x++){

            if ((is_perimeter(x, y, dimension))==1||(is_diagonal(x, y))==1)
                printf("+");
                else printf("*");
        }
    }
return;
}

int is_perimeter(int x, int y, int dimension){
    if (x==1||x==(dimension)||y==1||y==(dimension))
        return 1;
        else return 0;}

int is_diagonal(int x, int y, int dimension){
        if (x==y||x==(dimension-y))
            return 1;
            else return 0;
}
*/
/*---------------------------------------------------------------*/
/*orthogonio trigono*/
/*
int get_total_row_number(void);
void print_orthogonal_triangle(int);

int main(){

int row, symbol, space, totalRowNumber;

totalRowNumber=get_total_row_number();
print_orthogonal_triangle(totalRowNumber);
return 0;
}

int get_total_row_number(){
    int totalRowNumber;
    printf("\nPlease enter the total number of rows: \n");
    scanf("%d",&totalRowNumber);
    return totalRowNumber;
}

void print_orthogonal_triangle(int totalRowNumber){
    int symbol, space, row;
    for (row=1; row<=totalRowNumber; row++){
        for (symbol=1; symbol<=row; symbol++){
            printf("*");}
        for (space=1; space<=totalRowNumber-row; space++){
            printf(" ");}
    printf("\n");
    }
}
*/
/*-------------------------------------------------------------------*/
/*anapodo isoskeles trigono*/
/*
int get_total_row_number(void);
void print_orthogonal_triangle(int);

int main(){

int row, symbol, space, totalRowNumber;

totalRowNumber=get_total_row_number();
print_orthogonal_triangle(totalRowNumber);
return 0;
}

int get_total_row_number(){
    int totalRowNumber;
    printf("\nPlease enter the total number of rows: \n");
    scanf("%d",&totalRowNumber);
    return totalRowNumber;
}

void print_orthogonal_triangle(int totalRowNumber){
    int symbol, space, row;
    for (row=1; row<=totalRowNumber; row++){
        for (symbol=1; symbol<=(totalRowNumber-(row-1)); symbol++){
            printf("*");}
        for (space=1; space<=row-1; space++){
            printf(" ");}
    printf("\n");
    }
}
*/
/*-------------------------------------------------------------------------------*/
/*anapodi pyramida*/
/*
int main()
{   int totalRowNo, row, space, symbol;
    printf("Enter the number of rows:\n");
    scanf("%d",&totalRowNo);
    for (row=1; row<=totalRowNo; row++){
        for (space=1; space<=row-1; space++){
            printf(" ");

        }
    for (symbol=1; symbol<=(2*totalRowNo)-((2*row)-1); symbol++){
        printf("*");
                    }

    printf("\n");
    }
    return 0;
}
*/
/*-----------------------------------------------------------------------------*/
/*rombos*/
/*
int main()
{   int totalRowNo, row, space, symbol,k;
    printf("Enter the number of rows:\n");
    scanf("%d",&totalRowNo);
    for (k=1; k=2; k++){
        for (row=1; row<=(totalRowNo+1)/2; row++){
            for (space=1; space<=totalRowNo-row; space++){
                printf(" ");
        }
            for (symbol=1; symbol<=((2*row)-1); symbol++){
            printf("*");
        }
        printf("\n");
    }
    for (row=(totalRowNo+1)/2; row<=totalRowNo; row++){
        for (space=1; space<=row-1; space++){
            printf(" ");

        }
    for (symbol=1; symbol<=(2*totalRowNo)-((2*row)-1); symbol++){
        printf("*");
                    }
    printf("\n");
    }
    return 0;
    }
}
*/
/*------------------------------------------------------------------------------*/
/*omorfo trigono*/
/*
int main()
{

    int totalRowNo,i,j,space;

    printf("Enter the total number of rows you wish: \n");
    scanf("%d",&totalRowNo);

    for (i=1; i<=totalRowNo; i++)
    {
        for (space=1; space<=totalRowNo-i; space++)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
*/
/*-----------------------------------------------------------------------------------------*/
/*megethos typwn dedomenwn*/
/*
int main(){
    signed int a=-10;
    printf("%lu", sizeof(a));
    return 0;
}
*/
/*-----------------------------------------------------------------------------------------*/
/*ARRAYS*/
/*array making*/
/*
int main(){
    int i;
    int a[5];
    printf("Enter the elements of array: \n");
    for (i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    for (i=0; i<5; i++){
        printf("\narray element at index %d is %d\n",i,a[i]);
    }
    for (i=4; i>=0; i--){
        printf("\narray element at index %d is %d\n",i,a[i]);
    }
}
*/
/*-----------------------------------------------------------------*/
/*student marks*/
/*
int main(){
    int i;
    float marks[5];
    float sum=0, average;

    for (i=0; i<5; i++){
        printf("Give me the mark: \n");
        scanf("%f",&marks[i]);
    }
    for (i=0; i<5; i++){
        sum=sum+marks[i];
    }
average=sum/5;

printf("Sum is: %f\n",sum);
printf("Average is: %f\n",average);
}
*/
/*----------------------------------------------------*/
/*total of even and odd numbers given*/
/*
int main(){
    int i, even=0, odd=0, a[10];
    for (i=0; i<10; i++){
        printf("Give a number: \n");
        scanf("%d", &a[i]);
    }
    for (i=0; i<10; i++){
        if (a[i]%2==0)
            even++;
        else odd++;

    }
printf("Even elements are: %d\n", even);
printf("Odd elements are: %d\n", odd);
}
*/
/*-------------------------------------------------------*/
/*sum of 2 arrays in a 3rd array*/
/*
int main(){
    int i, arr1[5], arr2[5], sumarr[5];
    for (i=0; i<5; i++){
        printf("Give value for 1st array: \n", arr1[i]);
        scanf("%d", &arr1[i]);
    }
    for (i=0; i<5; i++){
        printf("Give value for 2nd array: \n", arr2[i]);
        scanf("%d", &arr2[i]);
    }
    for (i=0; i<5; i++){
        sumarr[i]=arr1[i]+arr2[i];
        printf("\nArray element at index %d is %d\n",i,sumarr[i]);
}
}
*/
/*---------------------------------------------------------*/
/*2D arrays practicing*/
/*
int main(){
    int i, j, sum=0, a[2][3];
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("Give next right element of matrix: \n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is: \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
    printf("\n");
    }
    printf("Sum of all elements given in the matrix is: %d\n",sum);
}
*/
/*--------------------------------------------------*/
/*
int main(){
    int marks[2][3]={{11,22,33},{44,55,66}};
    printf("%d",marks[1][1]);
}
*/
/*print transpose of a matrix*/
/*
int main(){
    int i, j, a[2][3], b[3][2];
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("Give next right element of matrix: \n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Given matrix is: \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
            }
    printf("Transpose matrix is: \n");
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }

}
*/
/*----------------------------------------------------------*/
/*sum of individual rows and columns*/
/*
int main(){
    int i, j, a[3][3], SR, SC;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Give next right element of matrix: \n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Given matrix is: \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
            }
    for (i=0; i<3; i++){
        SR=SC=0;
        for (j=0; j<3; j++){
            SR=SR+a[i][j];
            SC=SC+a[j][i];
        }
    printf("Sum of rows is: %d\n",SR);
    printf("Sum of columns is: %d\n",SC);
    }
}
*/
/*----------------------------------------------------*/
/*prosthesi pinakwn*/
/*
int main(){
    int i, j, a[2][3], b[2][3], c[2][3];
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("Give next right element of 1st matrix: \n");
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("Give next right element of 2nd matrix: \n");
            scanf("%d", &b[i][j]);
        }

    }
    printf("First matrix is: \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
            }

    printf("Second matrix is: \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d\t",b[i][j]);
            }
            printf("\n");
            }

    printf("The sum of the 2 matrices given is the matrix: \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            }
            printf("\n");
            }
}
*/
/*-----------------------------------------------------------------*/
/*pollaplasiasmos pinakwn*/
/*
#define N 10

int main(){
    int i, j, k, sum, r1, c1, r2, c2, a[N][N], b[N][N], c[N][N];

    printf("Enter rows and columns of 1st matrix: \n");
    scanf("%d %d", &r1, &c1);

    for (i=0; i<r1; i++){
        for (j=0; j<c1; j++){
            printf("Give next right element of 1st matrix: \n");
            scanf("%d", &a[i][j]);
        }
    }

    printf("First matrix is: \n");
    for (i=0; i<r1; i++){
        for (j=0; j<c1; j++){
            printf("%d\t",a[i][j]);
            }
            printf("\n");
            }

    printf("Enter rows and columns of 2nd matrix: \n");
    scanf("%d %d", &r2, &c2);

    for (i=0; i<r2; i++){
        for (j=0; j<c2; j++){
            printf("Give next right element of 2nd matrix: \n");
            scanf("%d", &b[i][j]);
        }
    }

    printf("Second matrix is: \n");
    for (i=0; i<r2; i++){
        for (j=0; j<c2; j++){
            printf("%d\t",b[i][j]);
            }
            printf("\n");
            }

    if (c1!=r2) {
        printf("Multiplication of matrices is impossible\n");
    }
    else {
    for (i=0; i<r1; i++){
        for (j=0; j<c2; j++){
            sum=0;
            for (k=0; k<3; k++){
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("The product matrix is: \n");
    for (i=0; i<r2; i++){
        for (j=0; j<c1; j++){
            printf("%d\t",c[i][j]);
            }
            printf("\n");
            }
}
}
*/
/*tetragona arithmwn, sum and average arrays*/
/*
#define N 7
void initialize(int x[N]);
void print(const int x[N]);
int sum_array(int x[N]);
float average_array(int x[N]);
int main(){
    int x[N]={0};

    initialize(x);
    print(x);
    printf("Sum is: %d and average value is: %f\n", sum_array(x), average_array(x));
    return 0;
}

void initialize(int x[N]){
    int i;

    for (i=0; i<N; i++){
        x[i]=i*i;
    }
return;
}

void print(const int x[N]){
    int i;

    for (i=0; i<N; i++){
        printf("%d cell, memory address %p, value %d\n", i, &x[i], x[i]);
    }
return;
}

int sum_array(int x[N]){
    int i;
    int sum=0;

    for (i=0; i<N; i++){
        sum=sum+x[i];

    }
    return sum;
}

float average_array(int x[N]){
    return (float)sum_array(x)/N;
}
*/
/*--------------------------------------------------------------------------------------------------------*/
/*string practicing*/
/*
int main(){
    char a[]={'M','i','k','e'};
    char b[]="Mike";
    char s1[10];
    printf("Enter name: ");
    scanf("%4s", s1);
    printf("Given string is: %s\n", s1);
}
*/
/*-----------------------------------------------*/
/*
int main(){
    char name[10];
    printf("Enter name: \n");
    scanf("%s", name);
    printf("%.5s", name);
    printf("%10.5s", name);
    puts(name);
    puts(name);
    puts(name);
    printf("%s",&name[2]);
}
*/
/*---------------------------------------------*/
/*
int main(){
    char name[3];

    printf("Enter name: \n");
    gets(name);
    printf("%.5s", name);
    puts(name);
    puts(name);
    printf("%s\n", &name[3]);
}
*/
/*-------------------------------------------*/
/*string length*/
/*
int main(){

    char name[30];
    unsigned int count=0;

    printf("Enter name: \n");
    gets(name);
    count=strlen(name);
    printf("String length is %d", count);

}
*/
/*-------------------------------------------*/
/*string length (full code)*/
/*
int main(){
    int count, i=0;
    char name[30];
    printf("Enter name: \n");
    gets(name);

    while (name[i]!='\0'){
        count++;
        i++;
    }
    puts(name);
    printf("String length is: %d", count);
}
*/
/*-------------------------------------------*/
/*string union*/
/*
int main(){
    char s1[30]="Michail";
    char s2[30]="Skandalidis";

    strncat(s1, s2, 3);
    printf("New string is: %s", s1);

}
*/
/*------------------------------------------*/
/*string union (full code)*/
/*
int main(){
    char s1[30]="Michail";
    char s2[30]="Skandalidis";
    int i, len1, len2;

    len1=strlen(s1);
    len2=strlen(s2);

    for (i=0; i<=len2; i++){
        s1[len1+i]=s2[i];
    }

    printf("New string is: \n");
    puts(s1);
}
*/
/*------------------------------------------*/
/*string comparison*/
/*
int main(){
    int value;
    char s1[]="Hello";
    char s2[]="Welcome";

    value=strcmp(s1, s2);

    if (value==0)
        printf("Same words\n");
        else printf("Not same words\n");

    printf("The value is: %d", value);
}
*/
/*--------------------------------------------*/
/*string comparison (full code)*/
/*
int main(){
    int i, flag=0;
    char s1[30], s2[30];

    printf("Enter the 1st string: \n");
    gets(s1);

    printf("Enter the 2nd string: \n");
    gets(s2);

    for (i=0; s1[i]!='\0'||s2[i]!='\0'; i++){
        if (s1[i]!=s2[i]){
            flag=1;
            break;
        }
    }
    if (flag==1)
        printf("Not the same words\n");
        else printf("Same words\n");
}
*/
/*------------------------------------------*/
/*string reversal*/
/*
int main(){
    char s1[20]="Mike";
    strrev(s1);
    printf("%s", s1);
}
*/
/*------------------------------------------*/
/*string reversal (full code)#1*/
/*
#define N 50
int main(){
    int l, i;
    char s1[N], ch;

    printf("Enter string for reversal: \n");
    gets(s1);
    l=strlen(s1);

    for (i=0; i<l/2; i++){
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("The reversed given string is: \n");
    puts(s1);
}
*/
/*---------------------------------------------------*/
/*string reversal (full code)#2*/
/*
#define N 50
int main(){
    int l, i, j;
    char s1[N], ch;

    printf("Enter string for reversal: \n");
    gets(s1);
    l=strlen(s1);

    for (i=0, j=l-1; i<j; i++, j--){
        ch=s1[i];
        s1[i]=s1[j];
        s1[j]=ch;
    }
    printf("The reversed given string is: \n");
    puts(s1);
}
*/
/*--------------------------------------------------------*/
/*lowercase to uppercase string and vice versa*/
/*
#define N 50
int main(){
    char s1[N];

    printf("Enter string: \n");
    gets(s1);
    strlwr(s1);
    printf("New string is: \n");
    puts(s1);
}
*/
/*---------------------------------------------------------*/
/*lowercase to uppercase string and vice versa (full code)*/
/*
#define N 50
int main(){
    char s1[N];
    int i;

    printf("Enter string: \n");
    gets(s1);

    for (i=0; s1[i]!='\0'; i++){
        if (s1[i]>='A' && s1[i]<='Z')
            s1[i]=s1[i]+32;
    }

    printf("New string is: \n");
    puts(s1);
}
*/
/*----------------------------------------------------------*/
/*POINTERS*/
/*
int main(){
    int a=10, b=9;
    int c;
    int *p, *q;

    p=&a;
    q=&b;
    c=*q;
    *p=20;
    p=(&a, &b);

    printf("Value of a is: %d\n", *p);
    printf("Address of a in hex form is: %x\n", p);
    printf("Address of a in dec form is: %d\n", p);
    printf("Address of p in hex form is: %x\n", &p);
    printf("Address of p in dec form is: %d\n", &p);
    printf("Address of b in dec form is: %d\n", q);
    printf("The value of c is: %d\n", *q);
    printf("%d\n", a);
    printf("%x\n", p);

}
*/
/*------------------------------------------------------*/
/*pointer assignment*/
/*
int main(){
    int a=10, b=5;
    int *p, *q;

    p=&a;
    q=&b;
    *q=*p;

    printf("a= %d %d %d\n", a, *p, *q);

}
*/
/*-----------------------------------------------------*/
/*double pointer*/
/*
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    ***r=50;
    **q=30;

    printf("Value of a is: %d %d %d %d", a, *p, **q, ***r);

}
*/
/*-----------------------------------------------------*/
/*pointer arithmetic(addition)*/
/*
int main(){
    int a[5]={0,10,20,30,40};
    int *p=&a[0];


    printf("At first value is: %d\n", *p);
    printf("with address: %u\n", p);

    p=p+2;

    printf("but then value is: %d\n", *p);
    printf("with address: %u\n", p);

    *p=7;

    printf("and at last, value will be: %d\n", *p);
    printf("with address: %u\n", p);

}
*/
/*-------------------------------------------------------*/
/*pointer arithmetic(subtraction)*/
/*
int main(){
    int a[]={2,4,3,0,7};
    int *p=a;
    int *q=&a[3];

    printf("q-p= %d\n", q-p);
    printf("p-q= %d\n", p-q);

    printf("Value before q=q-2 is: %d\n", *q);
    q=q-2;
    printf("Value after q=q-2 is: %d\n", *q);

    p=p+2;
    printf("q-p= %d\n", q-p);

    q=q-3;
    printf("Value after second q=q-3 will be a garbage value cuz we'll go out of array: %d\n", *q);
}
*/
/*-----------------------------------------------------------*/
/*pointer arithmetic(increment/decrement)*/
/*
int main(){
    int a[]={3,2,67,0,56};
    int *p;

    p=&a[4];

    printf("Will be calculated from right to left: %d %d %d\n", --(*p), (*p)--, --(*p));
    printf("Will be calculated from right to left: %d %d %d\n", *p--, *--p, *--p);

}
*/
/*-----------------------------------------------------------*/
/*askhsh se pointers #1*/
/*
int main(){
    int a[]={10,11,-1,56,67,5,4};
    int *p, *q;

    p=a;

    printf("%d\n", *p);
    printf("%d %d %d\n", (*p)++, *p++, *++p);
    printf("%d\n", *p);

    q=p+3;

    printf("%d\n", *q-3);
    printf("%d\n", *--p+5);
    printf("%d\n", *p+*q);

}
*/
/*------------------------------------------------------------*/
/*askhsh se pointers #2*/
/*
int main(){
    int a[]={10,11,-1,56,67,5,4};
    int *p, *q;

    p=a;
    q=&a[0]+3;

    printf("%d\n", *q);
    printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
    printf("%d\n", *p);
    printf("%d\n", (*p)++);
    printf("%d\n", (*p)++);

    q--;

    printf("%d\n", (*(q+2))--);
    printf("%d\n", *q);
    printf("%d\n", *(q-1));
    printf("%d\n", *q-1);
    printf("%d\n", *(p+2)-2);
    printf("%d\n", *p);
    printf("%d\n", *(p++ -2)-1);

}
*/
/*-----------------------------------------------------------*/
/*askhsh se pointers #3*/
/*
int main(){
    char str[]="welcome to jenny's lectures";
    char *p;
    p=str;

    printf("%c\n", *p);
    printf("p address= %u\n", p);

    printf("%c\n", *(p++ +1));
    printf("p address= %u\n", p);

    printf("%c\n", *((p-- +5)-1)+3);
    printf("p address= %u\n", p);

    printf("%c\n", *(++p+10)-32);
    printf("%c %c %c\n", *p, *++p, *--p);

}
*/
/*------------------------------------------------------------*/
/*void pointer*/
/*
int main(){
    void *vp;
    int a=5;
    char b='0';
    float c=1.589;

    vp=&a;
    printf("a= %d\n", *(int*)vp);

    vp=&b;
    printf("b= %c\n", *(char*)vp);

    vp=&c;
    printf("c= %f\n", *(float*)vp);
}
*/
/*------------------------------------------------------------*/
/*null pointer*/
/*
int main(){
    int *p=NULL;

    if (p==NULL){
        printf("This is null pointer and uninitialized with address: %d\n", p);
    }
    else{
       printf("%d\n", *p);
        }

}
*/
/*---------------------------------------------------------*/
/*dangling pointer*/
/*
int main(){
    int *p=NULL;

    {
        int a=5;
        p=&a;
        printf("a= %d\n", *p);
    }

    printf("The following is garbage value cuz a=5 while inside the loop, outside of it it will give an unpredictable value: %d\n", *p);
}
*/
/*-----------------------------------------------------*/
/*wild pointer*/
/*
int main(){
    int *p=NULL;
    int x=5;

    p=&x;

    printf("%d\n", *p);
}
*/
/*----------------------------------------------------*/
/*athroisma me synarthseis*/
/*
void read(int x[2]);
int sum(int x[2]);

int main(){
    int x[2];

    read(x);
    sum(x);
}

void read(int x[2]){
    int i;
    for (i=0; i<=1; i++){
      printf("Give me a num: \n");
      scanf("%d", &x[i]);
    }
    printf("Given array is: \n");
    for (i=0; i<2; i++){
        printf("%d\t", x[i]);
    }
    return;
}

int sum(int x[2]){
    int i;
    int sum=0;
    for (i=0; i<2; i++){
        sum=sum+x[i];
    }
    printf("\nSum is: %d", sum);
}
*/
/*----------------------------------------------*/
/*athroisma xvris synarthseis*/
/*
int main(){
    int i, x[2];
    int sum=0;

    for (i=0; i<=1; i++){
      printf("Give me a num: \n");
      scanf("%d", &x[i]);
    }
    printf("Given array is: \n");
    for (i=0; i<2; i++){
        printf("%d\t", x[i]);
    }

    for (i=0; i<2; i++){

        sum=sum+x[i];
    }
    printf("\nSum is: %d", sum);

}
*/
/*------------------------------------------------------------------------*/
/*FUNCTIONS*/
/*basics*/
/*
float sum(void);
int main(){
    printf("Hello\n");
    sum();
    printf("Hello\n");
    }


float sum(){
    float a, b, sum=0;
    printf("Give me 2 nums: \n");
    scanf("%f %f", &a, &b);
    sum=a+b;
    printf("Sum is: %f\n", sum);
}
*/
/*---------------------------------------------------------------*/
/*function declaration*/
/*
char fun();
int main(){
    char ch;
    ch=fun();
    printf("ch= %c\n", ch);
    }


char fun(){
    char c;
    printf("Enter a character: \n");
    scanf("%c", &c);
    return c;
}
*/
/*------------------------------------------------------------*/
/*function definition*/
/*
float sum(float, float);
int main(){
    sum(5.3,3.1);
    printf("That's all folks\n");
    }

float sum(float a, float b){
    float sum=0;

    sum=a+b;
    printf("Sum is: %f\n", sum);
    return sum;
}
*/
/*----------------------------------------------------------*/
/*call by value and call by reference*/
/*
void fun(int *, int *);
int main(){
    int x=5, y=7;
    fun(&x, &y);
    printf("Inside main, x is: %d and y is: %d\n",x, y);
    }


void fun(int *a, int *b){
    *a=71;
    *b=51;
    printf("Inside fun, x is: %d and y is: %d\n",*a, *b);
}
*/
/*--------------------------------------------------------*/
/*no argument no return type*/
/*
void sum(void);

int main(){
    sum();
}

void sum(){
    int a, b;
    int sum=0;

    printf("Give me the first num: \n");
    scanf("%d", &a);
    printf("Give me the second num: \n");
    scanf("%d", &b);
    sum=a+b;
    printf("Sum is: %d\n", sum);
}
*/
/*------------------------------------------------------*/
/*
void sum();
int main(){
    sum(5,4);
}

void sum(void){
    int a=5, b=7, sum=0;
    sum=a+b;
    printf("Sum is: %d\n", sum);
}
*/
/*-----------------------------------------------*/
/*no argument with return type*/
/*
int sum(void);

int main(){
    int s;
    s=sum();
    printf("Sum is: %d\n", s);

}

int sum(){
    int a, b, sum=0;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    return sum;
}
*/
/*-----------------------------------------------*/
/*with argument no return type*/
/*
void sum(float, float);
int main(){
    float a, b;
    printf("Enter a and b: \n");
    scanf("%f %f", &a, &b);
    sum(a, b);
}



void sum(float x, float y){
    float s=0;
    s=x+y;
    printf("Sum is %f\n", s);
}
*/
/*-----------------------------------------------*/
/*with argument with return type*/
/*
int sum(int, int);
int main(){
    int x, y, c;
    printf("Enter x and y: \n");
    scanf("%d %d", &x, &y);
    c=sum(x, y);
    printf("Sum is: %d\n", c);
}

int sum(int a, int b){
    int s=0;
    s=a+b;
    return s;
}
*/
/*-----------------------------------------------*/
/*function problem #1*/
/*
int jumble(int a, int b){
    a=2*a+b;
    return a;
}

int main(){
    int x=2, y=5;
    y=jumble(y, x);
    x=jumble(y, x);
    printf("%d\n", x);
    return 0;
}
*/
/*-----------------------------------------------*/
/*function problem #2*/
/*
int incr(int i){
    static int count=0;
    count=count+i;
    return (count);
}

int main(){
    int i, j;
    for (i=0; i<=4; i++){
        j=incr(i);
        printf("j= %d\n", j);

    }
}
*/
/*-----------------------------------------------*/
/*function problem #3*/
/*
int r(){
    static int num=7;
    return num--;
}

int main(){
    for (r(); r(); r()){
        printf("%d", r());
    }
    return 0;
}
*/
/*----------------------------------------------*/
/*function problem #4*/
/*
void f(int *p, int m){
    m=m+5;
    *p=*p+m;
    return;
}

int main(){
    int i=5, j=10;
    f(&i, j);
    printf("%d", i+j);
}
*/
/*-----------------------------------------------------------*/
/*passing array as an argument*/

