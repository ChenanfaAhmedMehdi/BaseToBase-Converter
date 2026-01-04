#include <stdio.h>
#include <math.h>
int main(){
    int a[10]={0,0,0,0,0,0,0,0,0,0},b=0,choice,ch;
    printf("Please choose your case (1 or 2)\n1- binary to decimal.\n2- decimal to binary.\n");
    while (1){
        if (scanf("%d",&choice)!=1){
            printf("error\n");
            while (getchar() != '\n');
            continue;
        } else {
            if(choice!=2 && choice!=1){
                printf("choose 1 or 2\n");
                continue;
            }
        }
        break;
    }
    while((ch=getchar())!='\n' && ch !=EOF){
        //printf("removed\n"); 
    }
    printf("enter your number: ");
    switch (choice){
        case 1:
            while (1){
                ch = getchar();
                if (ch=='\n' || ch==' ' || ch==EOF) break;
                ch= ch -'0';
                if (ch!=0 && ch!=1) continue;
                if (b<10){
                    a[b++]=ch;
                    //printf("%d",a[b+1]);
                } 
            }   
            ch=--b;
            b=0;
            for (int i=0; i<10;i++){
                if(ch>=0){
                    //printf("%d",a[i]);
                    b = b+ a[i]*pow(2,ch--);
                } else break;
            }    
            printf("\n%d",b);
            break;
        case 2:
            while (1){
                ch = getchar();
                if (ch=='\n' || ch==' ' || ch==EOF) break;
                ch= ch -'0';
                if (ch<0 || ch>9) continue;
                if (a[0]<10){
                    b= b*10 + ch;
                    a[0]=a[0]+1;
                } 
            }
            a[0]=0;
            ch=-1;
            do{
                a[++ch]=b%2;
                b=b/2;
            } while (b!=0);
            do{
                printf("%d",a[ch--]);
            }while (ch>=0);
            
            /*for (int i=0; i<10;i++){
                if(choice!=0){
                    choice = b /2;
                    //printf("%d",a[i]);
                    b = b+ a[i]*pow(2,ch--);
                } else break;
            }*/    
            break;   
        default:
            break;
    }
    
    

}