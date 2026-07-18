#include<stdio.h>
float calculateBill(int units)
{
    if(units <= 100)
        return units * 1.5;
    else if(units <= 200){
        return (100 * 1.5) + (units - 100) * 2.5;
    }
    else{
       return (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
    }
}

    int main()
    {
        char name[30];
        int id, units;
        float totalbill;
        
        printf("Elecricity Bill Generator\n\n");

        printf("Enter Customer name:  ");
        scanf("%s", name);

        printf("Enter Customer ID: ");
        scanf("%d",&id);

        printf("Enter units consumed: ");
        scanf("%d",&units);

        totalbill = calculateBill(units);

        printf("\nCustomer Name: %d", name);
        printf("\nCustomer ID: %d",id);
        printf("\nTotal Bill: Rs.%.2f", totalbill);
        return 0;


    }