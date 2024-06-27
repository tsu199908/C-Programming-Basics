#include<stdio.h>
void main()

{
float bs,da,ta,hra,pf,gs,ns;

printf("Enter the Basic Salary : ");
scanf("%f",&bs);

da = bs*0.15;
ta = bs*0.125;
hra = bs*0.85;
pf = bs*0.45;
gs = bs+ta+hra+pf;
ns = gs-pf;

printf("da is = %f\n",da);
printf("ta is = %f\n ",ta);
printf("hra is = %f\n",hra);
printf("pf is = %f\n",pf);
printf("gs is = %f\n",gs);
printf("ns is = %f\n",ns);


}