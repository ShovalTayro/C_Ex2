#include <stdio.h>
#include "myBank.h"

int main(){
char menu;
do
{
printf("\nEnter requested operation: ");
printf("\nfor open new account press 'O'");
printf("\nfor checking your balance press 'B'");
printf("\nfor add deposit to your account press 'D'");
printf("\nto withdraw money from your account press 'W'");
printf("\nto close an account press 'C'");
printf("\nfor printing all open accounts press 'P'");
printf("\nto add rate to all accounts 'I'");
printf("\nto close the program and all accounts press 'E'\n");  
scanf("\n%c", &menu); 
switch(menu)
{
case 'O':
Open();
break;
case 'B':
checkBalance();
break;
case 'D':
addDeposit();
break;
case 'W':
withDrawal();
break;
case 'C':
close();
break;
case 'P':
printAcounts();
break;
case 'I':
rate();
break;
case 'E':
closeAll();
break;
default:
printf("wrong input , try again"); 
break;
}
}while(menu != 'E');

return 0;
}

