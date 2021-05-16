#include<stdio.h>
int kWh;
float ksh, charge;
main()
{
    printf("Enter the kilowatt-hours (kWh) used by customer.\n");
    scanf("%d", &kWh);

    if(kWh <= 300)
    {
        ksh= kWh * 12.30;
    }
    /*300 multpilied by 12.30 is 3690*/
    else if(kWh>300 && kWh <= 600)
    {
        ksh = 3690 + ((kWh-300) * 10.50);
    }
    else if(kWh>600 && kWh <= 1000)
    {
        ksh = 6840+ ((kWh-600) * 8.20);
    }
    else if (kWh>1000)
    /*this is for kilowatt hours above 1000 and has no upper limit*/
    {
        ksh = 10128 + ((kWh-1000) * 6.80);
    }    
    printf("The total electricity bill is Ksh %.2f", ksh);
    /*%.2f to show two decimal points*/
    return 0;    
}