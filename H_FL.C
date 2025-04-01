#include<stdio.h>
#include<conio.h>

void main() {
 int i,j,c,d=0,e,f=1,g,h=0,k=0;
 char A[60],B[60],C[6],D[60],E[60],letter;
 clrscr();
 C[0]=70,C[1]=76,C[2]=65,C[3]=77,C[4]=69,C[5]=83;
 printf("%c",219);
 for (i=0;i<78;i++)
  printf("%c",223);
 printf("%c",219);
 printf("%c\t\t     %c",221,219);
 for (i=0;i<4;i++)
  printf("%c",223);
 printf(" %c        %c%c%c   %c%c %c%c %c",219,220,223,220,219,220,220,219,219);
 for (i=0;i<4;i++)
  printf("%c",223);
 printf(" %c%c%c%c%c",220,223,223,223,220);
 printf("\t\t       %c",222);
 printf("%c\t\t     %c     %c      %c%c   %c%c %c%c%c%c%c %c     %c",221,219,219,220,223,223,220,219,219,219,219,219,219,219);
 printf(" \t\t       %c",222);
 printf("%c\t\t     %c",221,219);
 for (i=0;i<2;i++)
  printf("%c",223);
 printf("   %c      %c",219,219);
 for (i=0;i<5;i++)
  printf("%c",223);
 printf("%c %c %c %c",219,219,223,219);
 printf(" %c",219);
 for (i=0;i<2;i++)
  printf("%c",223);
 printf("    %c%c%c%c",223,223,223,220);
 printf("\t\t       %c",222);
 printf("%c\t\t     %c",221,219);
 printf("     %c",219);
 for (i=0;i<4;i++)
  printf("%c",220);
 printf("  %c     %c %c   %c %c",219,219,219,219,219);
 for (i=0;i<4;i++)
  printf("%c",220);
 printf(" %c",223);
 for (i=0;i<3;i++)
  printf("%c",220);
 printf("%c",223);
 printf("\t\t       %c",222);
 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c%c",221,201);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",187,222);

 printf("\t\t\tEnter the first name:");
 gets(A);
 strcpy(D,A);
 printf("%c%c",221,200);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",188,222);

 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);

 printf("%c%c",221,201);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",187,222);

 printf("\t\t\tEnter the second name:");
 gets(B);
 strcpy(E,B);
 printf("%c%c",221,200);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",188,222);

 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);

 printf("%c%c",221,201);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",187,222);

// Main Code
 for (i=0;i<strlen(A);i++) {
  if (A[i]==32)
   k++;
 }
 for (i=0;i<strlen(B);i++) {
  if (B[i]==32)
   k++;
 }
 for (i=0;i<strlen(A);i++) {
  c=0;
  for (j=0;j<strlen(B);j++) {
   if (A[i]==B[j] && A[i]>48 && B[j]>48 && A[i]!=32 && B[j]!=32) {
    A[i]=48;
    B[j]=48;
    c++;
   }
   if (c>0) {
    d++;
    break;
   }
  }
 }
 e=strlen(A)+strlen(B)-(2*d)-k;

 for (i=0;i<1000;i++) {
  g=0;
  for (j=0;j<6;j++) {
   if (C[g]!=48) {
    if (f==e) {
     letter=C[g];
     C[g]=48;
     h++;
     f=0;
    }
   }
   else if (C[g]==48)
    f--;
   g++;
   f++;
  }
  if (h==6)
   break;
 }

 printf("\t\t Result: %s and %s are ",D,E);
 if (letter==70)
  printf("Friends");
 if (letter==76)
  printf("Lovers");
 if (letter==65)
  printf("Affectionate");
 if (letter==77)
  printf("Marriage");
if (letter==69)
  printf("Enemies");
if (letter==83)
  printf("Sibling");

 printf("\n%c%c",221,200);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",188,222);

 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c",219);
 for (i=0;i<78;i++)
  printf("%c",220);
 printf("%c",219);
 getch();
}