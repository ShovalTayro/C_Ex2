#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"

double bankAcounts[acounts][2] = {0};

void Open()
{
double num =0;
bool flag = false;
printf("\nEnter initial deposit : ");
if(scanf("\n%lf",&num) == 1){
if(num < 0){
printf("the deposit can't be negative");
}
else{
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
}
}
if(flag== false) printf("\nOpen -fail");
}


void checkBalance()
{
int num = 0;
printf("\nEnter account number : ");
if(scanf("\n%d",&num) ==1){
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
else{
printf("\nWrong input");
}
}

void addDeposit()
{
int num = 0;
printf("\nEnter account number : ");
if(scanf("\n%d",&num) ==1){
if(num < 0){
printf("the deposit can't be negative");
}
else{
num = num-901;
if((num <0 || num >50)){
printf("\n The given acount does not exists");
}
else{
if(bankAcounts[num][0]==0){
printf("\n The given acount does not exists");
}
else{
double sum = 0;
 printf("\nEnter new deposit : ");
 scanf("\n%lf",&sum);
sum = (int)(sum*100);
sum = sum/100;
bankAcounts[num][1]=bankAcounts[num][1]+sum;
printf("\n The new balance of the account %d is : %0.2lf",(num+901), bankAcounts[num][1]);
}
}
}
}
else{
printf("\nWrong input");
}
}

void withDrawal()
{
int num = 0;
printf("\nEnter account number : ");
if(scanf("\n%d",&num) ==1){
if(num < 0){
printf("the deposit can't be negative");
}
else{
num = num-901;
if((num <0 || num >50)){
printf("\n The given acount does not exists");
}
else{
if(bankAcounts[num][0]==0){
printf("\n The given acount does not exists");
}
else{
double sum= 0;
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
}
else{
printf("\nWrong input");
}
}

void close()
{
int num = 0;
printf("\nEnter account number : ");
if(scanf("\n%d",&num) == 1){
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
else{
printf("\nThe given acount does not exists");
}
}

void rate()
{
double ra = 0;
printf("\nEnter your rate : ");
if(scanf("\n%lf",&ra) ==1){
if(ra < 0){
printf("the deposit can't be negative");
}
else{
for(int i = 0; i <50; i++){
//for open account
if(bankAcounts[i][0] ==1)
{
int new_ra= ra+100;
bankAcounts[i][1] = ((bankAcounts[i][1] *new_ra)/100);
}
}
}
}
else{
printf("\nWrong input");
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





