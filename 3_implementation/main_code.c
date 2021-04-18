#include<stdio.h>
#include "inc/output_printing.h"

//char a[6][6];
//int b[6][6];


int main(){
    int n,m;
    int g = 1;
    printf("Enter the size of row you want: ");
    scanf("%d",&n);
    printf("Enter the size of column you want: ");
    scanf("%d",&m);
    char a[n][m];
    for(int i = 0;i<n;i++){
        printf("please enter %d row elements: ",i+1);
        for(int j = 0;j<m;j++){
            scanf("%s",&a[i][j]);
        }
    }
    // this for loop is for storing the index of the elements, which we use while printing
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if ((i == 0 && a[i][j] !='*') || (j ==0 && a[i][j] != '*')){
                b[i][j] = g++;
            }
            else if ((a[i-1][j] == '*' || a[i][j-1] == '*')&& a[i][j] != '*') {
                    b[i][j] = g++;
                }
            else{
                b[i][j] = 0;
            }
        }
    }
    // I am executing two codes main_code.c and output_printing.c at the same time (gcc main_code.c output_printing.c)
    //function to print across words
    hor(n,m,a);
    // function to print down words
    ver(n,m,a);
}
