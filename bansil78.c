/*Q.1 Write a Program to find the average of a given 2D array.
For example,
*/
#include<stdio.h>

void main(){

int i,j,r,c,sum=0;
float  b;
printf("enter the size of Row =   ");
scanf("%d",&i);
printf("enter the size of colum =   ");
scanf("%d",&j);

int a[i][j];

for(r=0;r<i;r++){
   for(c=0;c<j;c++){
    
    printf("a[%d][%d] =  ",r,c);
    scanf("%d",&a[r][c]);
   sum = sum + a[r][c];
   }
}

b=i*j;
printf("%.2f",sum/b);
}