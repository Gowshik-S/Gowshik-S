#include <stdio.h>
int main()
{
    int unit, unitdup, basic, service_charge = 150, surcharge, unit1, unit2, basic1, basic2, basic3, basic4, Total;
    char consumer_name[50];
    printf("Enter the name of consumer:");
    scanf("%s", &consumer_name);
    printf("Enter the Total unit consumed:");
    scanf("%d", &unit);
    unitdup = unit;
    if(unitdup<100) {
        basic = unitdup*5;
        Total = basic;
    }
    else if(unitdup>100 && unitdup<300) {
        unit1 = unitdup - 100;
        basic1 = unit1*7;
        unitdup = unitdup - unit1;
        basic = unitdup*5;
        Total = basic1 + basic;
    }
    else if(unitdup>300) {
        unit1 = unitdup - 300;
        basic3 = unit1*10;
        basic2 = unitdup - unit1;
        basic1 = basic2 - 200;
        basic1 = basic1*5;
        basic4 = basic2 - 100;
        basic4 = basic4*7;
        Total = basic1 + basic4 + basic3;
    }
    else{
        printf("the given user is invalid");
    }
    printf("The consumer name is:%s\n", consumer_name);
    printf("The totsl unit consumed:%d\n", unit);
    printf("the basic cost:%d\n", Total);
    printf("The service charge is:%d\n", service_charge);
    Total = Total+service_charge;
    printf("The total charges is%d", Total);
    if(Total>2000) {
        surcharge = Total*0.1;
        printf("The surcharge is:%d\n", surcharge);
        Total = Total + surcharge + service_charge;
        printf("the total charge:%d", Total);
    }
    return 0;

}