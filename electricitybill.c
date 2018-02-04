#include<stdio.h>
void main()
{
    int  unit;
    float total,price;
    printf("enter the unit");
    scanf("%d",&unit);
if(unit<=50)
    {
    total=unit*0.5;
    }
else if(unit>50 && unit<=150)
{
    total=50*0.5+(unit-50)*0.75;
}
else if(unit>150 && unit<=250)
{
    total=50*0.5+100*0.75+(unit-150)*1.20;
}
else if(unit>250)
{
    total=50*0.5+100*0.75+100*1.20+(unit-250)*1.50;
}
price=total*1.20;
printf("price=%f",price);
}
