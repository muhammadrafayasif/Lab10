#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{   char num1[10];
    char num2[10];
    char option;
    while(1){
        system("cls");
        printf("choose an option (1,2,3,4,5): \n1.add\n2.subtract\n3.multiply\n4.divide\n5.exit\n");
        scanf("%c",&option);
        if(option!='1'&&option!='2'&&option!='3'&&option!='4'&&option!='5'){
        	printf("choose 1,2,3,4 or 5");
        	Sleep(2000);
            continue;
        }
        else if(option=='5'){
            break;
        }
        do{
            printf("Enter first number: ");
            scanf("%s",num1); 
        }
        while(atoi(num1)==0);
        
        do{
            printf("Enter second number: ");
            scanf("%s",num2); 
        }
        while(atoi(num2)==0);
        switch(option){
            case '1':
            printf("%d\n",atoi(num1)+atoi(num2));
            break;
            case '2':
            printf("%d\n",atoi(num1)-atoi(num2));
            break;
            case '3':
            printf("%d\n",atoi(num1)*atoi(num2));
            break;
            case '4':
            printf("%d\n",atoi(num1)/atoi(num2));
            break;
            
        }
    Sleep(2000);
    }
    

    return 0;
}