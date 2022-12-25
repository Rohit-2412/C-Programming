#include <stdio.h>
// Using goto statement
int main()
{
int nc;
printf("\nEnter Number of Calls :");
scanf("%d", &nc);
if(nc<100)
goto free;
else if(nc>99 && nc<200)
goto charge1;
else if(nc>199 && nc<300)
goto charge2;
else
goto charge3;
free :
printf("\nNo charges.");
return 0;
charge1:
printf("\nTotal Charges : %d Rs.", nc*1);
return 0;
charge2:
printf("\nTotal Charges : %d Rs.", nc*2);
return 0;
charge3:
printf("\nTotal Charges : %d Rs.", nc*3);
}
