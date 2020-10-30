
#include <stdio.h>
int main(void) {
 int temp[7][2];
 int Max = 0,Min = 100,midH,midL,tmp;
 float SumH = 0,SumL = 0;
 char name[100];
 char day[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
 printf("Enter your name : ");
 scanf("%s",name);
 printf("\nHello %s\n",name);
 printf("********************************\n");
 for(int i=0;i<7;i++) {
 printf("High Temp %-9s : ",day[i]);
 scanf("%d",&temp[i][0]);
 printf("Low Temp %-9s : ",day[i]);
 scanf("%d",&temp[i][1]);
 }
 printf("********************************\n"); 
 for(int i=0;i<7;i++) { //Max - Min
 for(int j=0;j<2;j++) {
 if(temp[i][j]>Max) {
 Max = temp[i][j];
 }
 else if(Min > temp[i][j]) {
 Min = temp[i][j];
 }
 }
 }
 printf("Max Temperature is %d C\n",Max);
 printf("Min Temperature is %d C\n",Min);
 for(int i=0;i<7;i++) { //Average High
 SumH += temp[i][0];
 }
 printf("Average High Temperature is %.2f C\n",SumH/7);
 for(int i=0;i<7;i++) { //Average Low
 SumL += temp[i][1];
 }
 printf("Average Low Temperature is %.2f C\n",SumL/7);
 for(int j=0;j<7;j++) { //Sort
 for(int i=0;i<7;i++) {
 if(temp[i+1][0] > temp[i][0]) {
 tmp = temp[i+1][0];
 temp[i+1][0] = temp[i][0];
 temp[i][0] = tmp;
 }
 if(temp[i+1][1] > temp[i][1]) {
 tmp = temp[i+1][1];
 temp[i+1][1] = temp[i][1];
 temp[i][1] = tmp;
 }
 }
 }
 midH = temp[3][0];
 midL = temp[3][1];
 printf("Median High Temperature is %d C\n",midH);
 printf("Median Low Temperature is %d C\n",midL);
 return 0;
}