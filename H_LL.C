#include<stdio.h>
#include<conio.h>

void main() {
 int a=0,b=0,c=0,m,i,j,k,l=0,A[100][40],sum=0,temp,y;
 char B[30],C[30];
 clrscr();

 printf("%c",219);
 for (i=0;i<78;i++)
  printf("%c",223);
 printf("%c",219);
 printf("%c\t\t %c         ",221,219);
 for (i=0;i<5;i++)
  printf("%c",220);
 printf("  %c     %c %c",220,220,219);
 for (i=0;i<6;i++)
  printf("%c",223);
 printf("    %c%c      %c \t\t       %c",220,220,220,222);
 printf("%c\t\t %c        %c     %c %c%c   %c%c %c        ",221,219,219,219,223,220,220,223,219);
 printf(" %c%c%c%c   %c%c%c%c ",222,219,219,221,220,219,219,223);
 printf("\t       %c",222);

 printf("%c\t\t %c        %c     %c  %c%c %c%c  %c",221,219,219,219,223,220,220,223,219);
 for (i=0;i<4;i++)
  printf("%c",223);
 printf("      %c%c  %c%c%c%c",223,223,220,219,219,223);
 printf("\t\t       %c",222);

 printf("%c\t\t %c",221,219);
 printf("        %c",219);

 printf("     %c   %c%c%c   %c",219,223,220,223,219);
 printf("            %c%c%c%c  %c%c",220,219,219,223,220,220);
 printf("\t               %c",222);
 printf("%c\t\t %c",221,223);
 for (i=0;i<7;i++)
  printf("%c",223);
 printf("  ");
 for (i=0;i<5;i++)
  printf("%c",223);
 printf(" ");
 printf("    %c",223);
 printf("    %c",223);
 for (i=0;i<6;i++)
  printf("%c",223);
 printf("    %c%c%c%c   %c%c%c%c\t       %c",220,219,219,223,222,219,219,221,222);
 printf("%c\t\t\t\t\t\t      %c      %c%c",221,223,223,223);
 printf("\t\t       %c",222);
 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);

  printf("%c%c",221,201);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",187,222);

 printf("\t\t\tEnter the first name:");
 gets(B);
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
 gets(C);
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
 for (i=0;i<100;i++) {
  for (j=0;j<40;j++)
   A[i][j]=0;
 }
// Count A

 for (i=0;i<strlen(B);i++) {
  if (B[i]==65 || B[i]==97)
   sum++;
 }
 for (i=0;i<strlen(C);i++) {
  if (C[i]==65 || C[i]==97)
   sum++;
 }

 if (sum>=10) {
  A[b][a]=1;
  a++;
  A[b][a]=(sum-10);
  a++;
 }
 else {
  A[b][a]=sum;
  a++;
 }
 sum=0;
// Count E

 for (i=0;i<strlen(B);i++) {
  if (B[i]==69 || B[i]==101)
   sum++;
 }
 for (i=0;i<strlen(C);i++) {
  if (C[i]==69 || C[i]==101)
   sum++;
 }

 if (sum>=10) {
  A[b][a]=1;
  a++;
  A[b][a]=(sum-10);
  a++;
 }
 else {
  A[b][a]=sum;
  a++;
 }
 sum=0;
// Count I

 for (i=0;i<strlen(B);i++) {
  if (B[i]==73 || B[i]==105)
   sum++;
 }
 for (i=0;i<strlen(C);i++) {
  if (C[i]==73 || C[i]==105)
   sum++;
 }

 if (sum>=10) {
  A[b][a]=1;
  a++;
  A[b][a]=(sum-10);
  a++;
 }
 else {
  A[b][a]=sum;
  a++;
 }
 sum=0;
// Count O

 for (i=0;i<strlen(B);i++) {
  if (B[i]==79 || B[i]==111)
   sum++;
 }
 for (i=0;i<strlen(C);i++) {
  if (C[i]==79 || C[i]==111)
   sum++;
 }

 if (sum>=10) {
  A[b][a]=1;
  a++;
  A[b][a]=(sum-10);
  a++;
 }
 else {
  A[b][a]=sum;
  a++;
 }
 sum=0;
// Count U

 for (i=0;i<strlen(B);i++) {
  if (B[i]==85 || B[i]==117)
   sum++;
 }
 for (i=0;i<strlen(C);i++) {
  if (C[i]==85 || C[i]==117)
   sum++;
 }

 if (sum>=10) {
  A[b][a]=1;
  a++;
  A[b][a]=(sum-10);
  a++;
  b++;
 }
 else {
  A[b][a]=sum;
  a++;
  b++;
 }
 temp=a;
 sum=0;
 do {
 a=0;
 c=0;
 m=0;
 for (j=0;j<temp-1;j++) {
//  if (A[b-1][j+1]==0 && A[b-1][j+2]==0)
//   break;
//  else {
   sum=A[b-1][j]+A[b-1][j+1];
   if (sum>=10) {
     A[b][a]=1;
     a++;
     A[b][a]=(sum-10);
     a++;
     m++;
   }
   else {
    A[b][a]=sum;
    a++;
   }
//  }
 }
 if (A[b][1]>0 && A[b][0]>0 && A[b][2]==0 &&A[b][3]==0)
   c++;
 if (b>20) {
  c=1;
  y=1;
 }
 b++;
 temp=a;

 } while ( c!=1);
 b--;

 printf("\t\t\t       Percentage:");
 if (y==1)
  printf("%c",236);
 else
  printf("%d%d %",A[b][0],A[b][1]);
 printf("\n%c%c",221,200);
 for (i=0;i<76;i++)
  printf("%c",205);
 printf("%c%c",188,222);

 printf("%c\t\t\t\t\t\t\t\t\t       %c",221,222);
 printf("%c",219);
 for (i=0;i<78;i++)
  printf("%c",220);
 printf("%c",219);
 getch();
}