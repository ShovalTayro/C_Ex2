#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"
#define acounts 50


double bankAcounts[acounts][2];

void Open()
{
double num;
bool flag = false;
printf("\nEnter initial deposit : ");
scanf("\n%lf",&num);
num = (int)(num*100);
num = num/100;
 for(int i = 0; i < 50 ; i++){
 if(flag == false){
 if(bankAcounts[i][0] == 0) {
 flag = true;
 bankAcounts[i][0] = 1;
 bankAcounts[i][1] = num;
 printf("\nThe new acount number is : %d", (i+901));
}
}
}
if(flag== false) printf("\nThere is no acount available");
}

void checkBalance()
{
int num;
printf("\nEnter account number : ");
 scanf("\n%d",&num);
num = num-901;
if(num <0 || num >50){
printf("\n The given acount does not exists");
}
else{
if(bankAcounts[num][0]==0){
printf("\n The given acount does not exists");
}
else{
printf("\nThe balance of the acount %d is: %0.2lf", (num+901), bankAcounts[num][1]); 
}
}
}
void addDeposit()
{
int num;
printf("\nEnter account number : ");
 scanf("\n%d",&num);
num = num-901;
if((num <0 || num >50)){
printf("\n The given acount does not exists");
}
else{
if(bankAcounts[num][0]==0){
printf("\n The given acount does not exists");
}
else{
double sum;
 printf("\nEnter new deposit : ");
 scanf("\n%lf",&sum);
sum = (int)(sum*100);
sum = sum/100;
bankAcounts[num][1]=bankAcounts[num][1]+sum;
printf("\n The new balance of the account %d is : %0.2lf",(num+901), bankAcounts[num][1]);
}
}
}

void withDrawal()
{
int num;
printf("\nEnter account number : ");
 scanf("\n%d",&num);
num = num-901;
if((num <0 || num >50)){
printf("\n The given acount does not exists");
}
else{
if(bankAcounts[num][0]==0){
printf("\n The given acount does not exists");
}
else{
double sum;
 printf("\nEnter amount to withdraw : ");
 scanf("\n%lf",&sum);
sum = (int)(sum*100);
sum = sum/100;
if(sum> bankAcounts[num][1]) printf("\n You don't have enough money to withdraw");
else { 
bankAcounts[num][1]=bankAcounts[num][1]-sum;
printf("\nThe new balance of the account %d is : %0.2lf",(num+901), bankAcounts[num][1]);
}
}
}
}

void close()
{
int num;
printf("\nEnter account number : ");
 scanf("\n%d",&num);
num = num-901;
if((num <0 || num >50)){
printf("\nThe given acount does not exists");
}
else{
if(bankAcounts[num][0]==0){
printf("\nThe given acount does not exists");
}
else{
bankAcounts[num][0]=0;
bankAcounts[num][1]=0;
printf("\nYour account has been closed");
}
}
}

void rate()
{
double ra;
printf("\nEnter your rate : ");
scanf("\n%lf",&ra);
for(int i = 0; i <50; i++){
//for open account
if(bankAcounts[i][0] ==1)
{
int new_ra= ra+100;
bankAcounts[i][1] = ((bankAcounts[i][1] *new_ra)/100);
}
}
}

 void printAcounts()
{
for(int i=0; i<50;i++){
if(bankAcounts[i][0]==1){
printf("\nThe account number is : %d, and the balance of the acount is : %0.2lf",(i+901), bankAcounts[i][1]);
}
}
}

int closeAll()
{
for(int i=0; i<50;i++){
bankAcounts[i][0]=0;
bankAcounts[i][1]=0;
}
printf("\nAll acounts has been closed , bye");
return 0;
}





