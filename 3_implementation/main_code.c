#include<stdio.h>
#include "inc/output_printing.h"


//void output_matrix_hor(int n,int m);
//void output_matrix_ver(int n, int m);


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
    //function to print across words
    output_hor(n,m);
    // function to print down words
    output_ver(n,m);
}





