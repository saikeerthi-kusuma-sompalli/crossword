#include<stdio.h>
#include "../inc/output_printing.h"



void output_hor(int n,int m){
    printf("###Across###\n");
    for(int i = 0;i<n;i++){
        if(a[i][0] !='*' && i !=0){
            printf("\n");
        }
        int f = 0;
        for(int j = 0;j<m;j++){
            if(a[i][j] != '*'){
                if(f==0){
                    printf("%d.",b[i][j]);
                }
                f++;
                printf("%c",a[i][j]);
            }
            else{
                f=0;
                if(j!=m-1){
                printf("\n");
                }
            }
        }
    }
    
    printf("\n");

}

void output_ver(int n,int m){
    printf("###Down###\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int u=1;
            int v=1;
            int g=0;
            for(int k = i;k<n;k++){
                if (a[k][j] != '0'){
                    if(a[k][j] != '*'){
                        if(g == 0){
                            printf("%d.",b[k][j]);
                        }
                        g++;
                        printf("%c",a[k][j]);
                        a[k][j] = '0';
                    }
                    else{
                        v=0;
                        break;
                    }
                    }
                else{
                    u=0;
                }
            }
            if(u==1 && v==1)printf("\n");
            if(u==1 && v ==0&&g!=0)printf("\n");
            }
        }
}
