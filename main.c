#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int intToAscii(int number) {
if ((number>=0) && (number<=9))
{
   return '0' + number;}
   else
   {
       return ('0'+(number+7));
   }
}
// la fontion convert un nombre a ascii
char asciiTochar(int num)
{char ch;
ch=(char)num;
return ch;
}
//la foncttion convert un nombre en ascii a un caractere
int conversion(char ch)
{
    if (ch>='0' && ch<='9')
    {return (int)ch-48;}
    else{return (int)ch-55;}
}
//la fonction convert un caractere a un nombre
void decimaltoB(int n,int m,int check)
{
    int b,k,i;
char l,ll[100]="0";
i=0;
while(n>0)
{ b=n%m;
k=intToAscii(b);
l=asciiTochar(k);
ll[i]=l;
i=i+1;
n=n/m;
}
ll==strrev(ll);
if(check==1)
{printf("le resultat est:%s\n",ll);}
else{
    for(i=strlen(ll);i>0;i--)
    {
        ll[i]=ll[i-1];
    }
    ll[0]='-';
    printf("LE Nombre apres la convertion est:%s\n",ll);
}
}
int main()
{int a,b,c,d,k,i,l,s,f,check,base,check2,q;
char ch[50],chhh;
f=1;
printf("\t\t\t\t\t~PROGRAM DE CONVERSION~ \n");
while(f==1)
    {b=1;check=1;check2=1;q=1;
while(b==1){
printf("Enter la Base De Nombre \n");
printf("1)-->Base 2\n");
printf("2)-->Base 8\n");
printf("3)-->Base 10\n");
printf("4)-->Base 16\n");
printf("5)-->autres\n");
scanf("%d",&base);
if(base==1){s=2;b=0;}
if(base==2){s=8;b=0;};
if(base==3){s=10;b=0;};
if(base==4){s=16;b=0;};
if(base==5){printf("enter la base:");scanf("%d",&s);b=0;}if(base!=1&&base!=2&&base!=3&&base!=4&&base!=5){printf("erreur entrer l'un des choix qui sont dans le menu\n");}}
printf("Entrer le Nombre:");
scanf("%s",&ch);b=1;

i=1;
d=0;
if (ch[0]=='-')
{ ch[0]='0';
check=0;
}b=1;
while(q==1){check2=1;d=0;i=1;
while(i<=strlen(ch))
{
c=conversion(ch[strlen(ch)-i]);//printf("%d\n",c);
if(c>=s){check2=0;}
d=d+c*pow(s,(i-1));
i=i+1;b=b+1;
}if(check2==1){q=0;}if(check2==0){printf("erreur le nombre n'appartient pas a la base,entrer un autre nombre:");scanf("%s",&ch);if (ch[0]=='-')
{ ch[0]='0';
check=0;
}else{check=1;}}}b=1;
while(b==1){
printf("Entrer la Base de conversion \n");
printf("1)-->Base 2\n");
printf("2)-->Base 8\n");
printf("3)-->Base 10\n");
printf("4)-->Base 16\n");
printf("5)-->autres\n");
scanf("%d",&base);
if(base==1){l=2;b=0;}
if(base==2){l=8;b=0;}
if(base==3){l=10;b=0;}
if(base==4){l=16;b=0;}
if(base==5){printf("enter la base:");scanf("%d",&l);b=0;}if(base!=1&&base!=2&&base!=3&&base!=4&&base!=5){printf("erreur entrer l'un des choix qui sont dans le menu\n");}}
decimaltoB(d,l,check);
printf("voulez-vous convertir un autre nombre? si oui taper 1 si non taper 0:");
scanf("%d",&f);
}
        return 0;
}
