//canteen bill generator
#include<string.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
int no_item1[10],no_item2[10],amt_item1[10],amt_item2[10],i,check,sum,j=1;
int counter=0;
int current_time;
int phone;
int transaction_id;
int price1[15]={150,140,230,190,200,120,260,340,200,150,180,130,160,110,0};
int price2[11]={100,100,100,150,180,20,50,50,80,100,0};
int total=0;
time_t t;
    time(&t);
char name[15];
char response;
char *menu1[15];
char *menu2[11];
char ans;
char payment[7];
char name1[15];

printf("Welcome to Hamro Resturant");
printf("\nenter your name ");
scanf("%s",name);

menu1[0]=" Veg khana"; //Menu list
menu1[1]="Chowmein";
menu1[2]="Nonveg khana";
menu1[3]="Veg Biryani";
menu1[4]="Chicken Biryani";
menu1[5]="Chicken Sadeko";
menu1[6]="Pakauda";
menu1[7]="Veg Pizza";
menu1[8]="Chicken Pizza";
menu1[9]="Chicken Momo";
menu1[10]="Veg Momo";
menu1[11]="Katti Roll";
menu1[12]="Thukpa";
menu1[13]="Sadeko Chauchau";
menu1[14]="None";
menu2[0]="Coca-cola";
menu2[1]="Sprite";
menu2[2]="Fanta";
menu2[3]="Americano";
menu2[4]="Latte";
menu2[5]="Black Tea";
menu2[6]="Milk Tea";
menu2[7]="Mineral Water";
menu2[8]="Plain Lassi";
menu2[9]="Mango Lassi";
menu2[10]="None";
printf("\n\t--M E N U-- ");

printf("\n \t / FOOD ITEM /");
printf("\n");
for(i=0;i<15;i++)

{

printf("\n%3d.%-13s%4d",i,menu1[i],price1[i]);
}
printf("\n\n \t / Drinks /");
printf("\n");
for(i=0;i<11;i++)
{
printf("\n%3d.%-13s%4d",i,menu2[i],price2[i]);
}
do{
printf("\nEnter the number for the food you want to buy");

scanf("%d",&no_item1[counter]);
if(no_item1[counter]==14)
{
    goto drinks;
}

printf("How much amount do you want to buy?");

scanf("%d",&amt_item1[counter]);
drinks:
printf("\nEnter the number for the drink you want to buy");

scanf("%d",&no_item2[counter]);
if(no_item2[counter]==10)
{
    goto suum;
}

printf("How much amount do you want to buy?");

scanf("%d",&amt_item2[counter]);
suum:
sum=price1[no_item1[counter]]*amt_item1[counter]+price2[no_item2[counter]]*amt_item2[counter];// price counter
counter++;
transaction_id=rand(); //random num generator
total=total+sum;
printf("Do you want to buy other item(Y/N)");

scanf(" %s", &response);
ans = toupper(response);

}while(ans =='Y');

printf("");
printf("cash or online payment??");
scanf("%s",payment);
printf("\n\t~~~~~~~~~Hamro Resturant~~~~~~~~~");
printf("\n\t\tKalimati,Kathmandu ");
printf("\n\t\t    987653210");
printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n\t\t--PURCHASE--   ");
printf("\n\tTime: %s", ctime(&t));
printf("\n\tTransaction Id: %-12d",transaction_id);
printf("\n\tBuyer: %-15s",name);
printf("\n\tPayment Method:\t%-5s",payment);
printf("\n\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
printf("\n\tYour Order    \tPrice\tAmount");
printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
for(i=0;i<counter;i++){
    if((price1[no_item1[i]])!=0){
printf("\n\t%s.%-16s%4d%5d","*",menu1[no_item1[i]],price1[no_item1[i]],amt_item1[i]);
}
}
for(i=0;i<counter;i++)
{
 if((price2[no_item2[i]])!=0){
  printf("\n\t%s.%-16s%4d%5d","*",menu2[no_item2[i]],price2[no_item2[i]],amt_item2[i]);  
}
}
printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n\t\tTOTAL(NPR) Rs.%-8d",total);
printf("\n");
printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n\t\t Thank You!!");

return 0;


}


