/*Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The sum of diagonal elements of an Array: 13
*/
#include<stdio.h>

void main(){

int i,r,c,sum=0;

printf("enter the size of Row & colum =   ");
scanf("%d",&i);

int a[i][i];

printf("enter the array's elements\n");
for(r=0;r<i;r++){
   for(c=0;c<i;c++){
    
    printf("a[%d][%d] =  ",r,c);
    scanf("%d",&a[r][c]);
   }
}

for(r=0;r<i;r++){
   for(c=0;c<i;c++){
    if(r==c){
      sum = sum + a[r][c];
   }
}
}

printf(" the sum of diagonal is : %d",sum);
}
