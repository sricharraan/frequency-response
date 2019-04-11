#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int st,i=0,j=0,k=0;
double adb=1,cpi=10*pow(10,-12),fh,fl,fh1=0,fl1=0,z=0,y=0,q=0;
double Av[100],av=1,hfe=100,hie=1000,Rc=0,c[100],cl=0,r1,r2,rin,r,bw=0;
clrscr();
printf("ENTER THE NUMBER OF STAGES OF THE AMPLIFIER:");
scanf("%d",&st);
printf("ENTER THE GAINS OF DIFFERENT STAGES: \n");
for(i=0;i<st;i++)
{
scanf("%f",&Av[i]);
av=av*Av[i];
}
adb=20*log10(av);
Rc=(hie*Av[st-1])/hfe;
fh=1/(2*3.14*Rc*cpi);
printf("%0.10f\n",fh);
q=(1/st);
y=(pow(2,q)-1);
z=sqrt(y);
fh1=fh/z;
printf("ENTER THE VALUE OF ALL THE CAPACITORS:");
for(j=0;j<((2*st)+1);j++)
{
scanf("%f",&c[j]);
}
for(k=0;k<((2*st)+1);k++)
{
if(c[j]<=c[j+1])
cl=c[j];
else
cl=c[j+1];
}
cl=cl*pow(10,-6);
printf("ENTER THE VALUE OF RESISTOR R1: ");
scanf("%f",&r1);
printf("ENTER THE VALUE OF RESISTOR R2: ");
scanf("%f",&r2);
r=((1/hie)+(1/r2)+(1/r1));
rin=1/r;
fl=1/(2*3.14*rin*cl);
fl1=fl*z;
printf("THE OVERALL GAIN IS: %0.10f \n",av);
printf("THE OVERALL GAIN IN dB IS: %0.10f \n",adb);
printf("THE OVERALL 3 dB GAIN  IS: %0.10f \n",(adb-3));
printf("THE LOWER CUT OFF FREQUENCY IS: %0.10f \n",fl1);
printf("THE HIGHER CUT OFF FREQUENCY IS: %0.10f \n",fh1);
bw=fh1-fl1;
printf("THE BANDWIDTH IS: %0.10f",bw);
getch();
}
