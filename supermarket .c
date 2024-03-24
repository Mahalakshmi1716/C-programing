#include<stdio.h>
int main()
{
int q1=2,q2=3,q3=1,total,balance_amount,mango_price=200;
int grapes_price=400,po_price=350,man,gra,po;
printf("\t saveetha super markrt\n \n");
printf("\t time:2.50\n");
printf("-------------------------\n");
man=mango_price*q1;
gra=grapes_price*q2;
po=po_price*q3;
printf("1.mango:\t%d*%d=%d\n",mango_price,q1,man);
printf("2.grapes:\t%d*%d=%d\n",grapes_price,q2,gra);
printf("3.promogranate:\t%d*%d=%d\n",po_price,q3,po);
total=man+gra+po;
printf("--------------------------\n");
printf("\tThe total cost=%d\n \n",total);
printf("--------------------------\n");
balance_amount=2000-total;
printf("The balance amount=%d",balance_amount);
return 0;
}