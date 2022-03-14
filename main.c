#include <stdio.h>
#include <stdlib.h>
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
/*array practicing*/
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
int main(){
    /*int marks[2][3]={{0,0,0},{1,1,1}};/*first is row size and second is column size*/
    int a[2][3];
    for (i=0; i<2; i++){
        for (j=0; j<3, j++){
            printf("Give next right element: \n");
            scanf("%d", &a[i][j]);
        }
    }
}
