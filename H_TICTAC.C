void coding();
#include<stdio.h>
#include<conio.h>

int A[10],B[10],index,i,j,k,code,chance,m,p1=0,p2=0,a=0;
void main() {
 do{
 clrscr();
 for (i=0;i<11;i++)
  printf("\n");

 printf("\t\t\t %c",201);
 for (i=0;i<26;i++)
  printf("%c",205);
 printf("%c\n",187);

 printf("\t\t\t %c Welcome To Tic Tac Toe!  %c\n",186,186);

 printf("\t\t\t %c",200);
 for (i=0;i<26;i++)
  printf("%c",205);
 printf("%c\n",188);
 printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t     Press Enter to continue...");
 getch();
 clrscr();
 printf("%c",201);
 for (i=0;i<77;i++)
  printf("%c",205);
 printf("%c\n",187);
 printf("%c  %c%c       %c%c",186,219,220,220,219);
 printf("\t\t\t\t\t\t\t\t      %c\n",186);

 printf("%c   %c%c%c   %c%c%c",186,223,219,220,220,219,223);
 printf("\t\t\t\t\t\t\t\t      %c\n",186);

 printf("%c     %c%c%c%c%c",186,223,219,220,219,223);
 printf("\t\t\t\t\t\t\t\t      %c\n",186);

 printf("%c      %c%c%c",186,220,219,220);
 printf("\t\t\t\t\t\t\t\t      %c\n",186);

 printf("%c    %c%c%c %c%c%c",186,220,219,223,223,219,220);
 printf("\t\t\t\t\t\t\t\t      %c\n",186);

 printf("%c  %c%c%c\t   %c%c%c",186,220,219,223,223,219,220);
 printf("\t\t\t\t\t\t\t\t      %c\n",186);

 printf("%c  %c\t     %c\t\t\t\t\t\t\t\t      %c\n",186,223,223,186);
 printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
 printf("%c\t\t\t%c",186,218);
 for (i=0;i<28;i++)
  printf("%c",196);
 printf("%c\t\t\t      %c",191,186);
 printf("\n%c\t\t\t%c\t  1 - Play\t     %c\t\t\t      %c\n",186,179,179,186);
 printf("%c\t\t\t%c\t  2 - Exit\t     %c\t\t\t      %c\n",186,179,179,186);
 printf("%c\t\t\t%c",186,192);
 for (i=0;i<28;i++)
  printf("%c",196);
 printf("%c\t\t\t      %c\n",217,186);
 printf("%c\t\t\t\t\t\t\t    %c",186,220);
 for (i=0;i<10;i++)
  printf("%c",223);
 printf("%c      %c\n",220,186);
 for (i=0;i<5;i++)
  printf("%c\t\t\t\t\t\t\t   %c\t        %c     %c\n",186,219,219,186);
 printf("%c\t\t\t\t\t\t\t    %c",186,223);
 for (i=0;i<10;i++)
  printf("%c",220);
 printf("%c      %c\n",223,186);

    for (i=0;i<2;i++)
     printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c",200);
    for (i=0;i<77;i++)
     printf("%c",205);
    printf("%c\n",188);
 printf("Enter your choice:");
 scanf("%d",&code);
 switch (code) {
  case 1:
   chance=0;
   for (i=0;i<10;i++) {
    B[i]=0;
    A[i]=0;
   }
   clrscr();
   printf("%c",201);
   for (i=0;i<77;i++)
    printf("%c",205);
   printf("%c\n",187);
   printf("%c\t\t\t   Good Luck to both Players   \t\t\t      %c\n",186,186);
   printf("%c\t\t        %c",186,219);
   for (i=0;i<31;i++)
    printf("%c",223);
   printf("%c\t\t      %c\n",219,186);
   printf("%c\t\t        %c%c",186,221,218);
   for (i=1;i<=29;i++) {
    if (i%10==0 && i!=0)
     printf("%c",194);
    else
     printf("%c",196);
   }
   printf("%c",191);
   printf("%c \t\t      %c\n",222,186);
  for (k=0;k<2;k++) {
   for (j=0;j<4;j++) {
    printf("%c\t\t        %c%c",186,221,179);
    for (i=1;i<=29;i++) {
    if (i%10==0 && i!=0)
     printf("%c",179);
    else
     printf(" ",196);
    }
    printf("%c",179);
    printf("%c \t\t      %c\n",222,186);
   }
   printf("%c\t\t        %c%c",186,221,195);
   for (i=1;i<=29;i++) {
    if (i%10==0 && i!=0)
     printf("%c",197);
    else
     printf("%c",196);
   }
   printf("%c",180);
   printf("%c \t\t      %c\n",222,186);
  }
  for (j=0;j<4;j++) {
   printf("%c\t\t        %c%c",186,221,179);
   for (i=1;i<=29;i++) {
    if (i%10==0 && i!=0)
     printf("%c",179);
    else
     printf(" ",196);
   }
   printf("%c",179);
   printf("%c \t\t      %c\n",222,186);
  }
   printf("%c\t\t        %c%c",186,221,192);
   for (i=1;i<=29;i++) {
    if (i%10==0 && i!=0)
     printf("%c",193);
    else
     printf("%c",196);
   }
   printf("%c",217);
   printf("%c \t\t      %c\n",222,186);
   printf("%c\t\t        %c",186,219);
   for (i=0;i<31;i++)
    printf("%c",220);
   printf("%c\t\t      %c\n",219,186);
   printf("%c\t\t\t Type the index of tile to mark \t\t      %c\n",186,186);
   printf("%c\t\t\t     Type 10 to exit to menu    \t\t      %c\n",186,186);
   printf("%c",200);
   for (i=0;i<77;i++)
    printf("%c",205);
   printf("%c\n",188);
   printf("Enter:");
   scanf("%d",&index);
   do {
   a=0;
   clrscr();
   chance+=1;
   printf("%c",201);
   for (i=0;i<77;i++)
    printf("%c",205);
   printf("%c\n",187);
   printf("%c\t\t\t   Good Luck to both Players   \t\t\t      %c\n",186,186);
   printf("%c\t\t        %c",186,219);
   for (i=0;i<31;i++)
    printf("%c",223);
   printf("%c\t\t      %c\n",219,186);
   printf("%c\t\t        %c%c",186,221,218);
   for (i=1;i<=29;i++) {
    if (i%10==0 && i!=0)
     printf("%c",194);
    else
     printf("%c",196);
   }
   printf("%c",191);
   printf("%c \t\t      %c\n",222,186);
   if (A[index]==1) {
    clrscr();
    printf("\n\n\n\n\n\t\t\tInvalid index. Try again");
    chance-=1;
    getch();
    clrscr();
   }
   else {
   switch (index) {
   case 1:
    A[1]+=1;
    if (chance%2==0)
     B[1]+=1;
    else
     B[1]+=2;
    break;
   case 2:
    A[2]+=1;
    if (chance%2==0)
     B[2]+=1;
    else
     B[2]+=2;
    break;
   case 3:
    A[3]+=1;
    if (chance%2==0)
     B[3]+=1;
    else
     B[3]+=2;
    break;
   case 4:
    A[4]+=1;
    if (chance%2==0)
     B[4]+=1;
    else
     B[4]+=2;
    break;
   case 5:
    A[5]+=1;
    if (chance%2==0)
     B[5]+=1;
    else
     B[5]+=2;
    break;
   case 6:
    A[6]+=1;
    if (chance%2==0)
     B[6]+=1;
    else
     B[6]+=2;
    break;
   case 7:
    A[7]+=1;
    if (chance%2==0)
     B[7]+=1;
    else
     B[7]+=2;
    break;
   case 8:
    A[8]+=1;
    if (chance%2==0)
     B[8]+=1;
    else
     B[8]+=2;
    break;
   case 9:
    A[9]+=1;
    if (chance%2==0)
     B[9]+=1;
    else
     B[9]+=2;
    break;
   default:
    clrscr();
    printf("Wrong Number Try Again");
    chance-=1;
    getch();
    break;
   }

   coding();
   if (chance>5) {
   if (B[1]==B[2] && B[1]==B[3]) {
    if (B[1]==1 && B[2]==1 && B[3]==1) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
    }
    if (B[1]==2&& B[2]==2 && B[3]==2) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   else if (B[1]==B[5] && B[1]==B[9]) {
    if (B[1]==1 && B[5]==1 && B[9]==1) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
    }
    if (B[1]==2 && B[5]==2 && B[9]==2) {
    clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   else if (B[1]==B[4] && B[1]==B[7]) {
    if (B[1]==1 && B[4]==1 && B[7]==1) {
    clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
    }
    if (B[1]==2 && B[4]==2 && B[7]==2) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   else if (B[2]==B[5] && B[2]==B[8]) {
    if (B[2]==1 && B[5]==1 && B[8]==1) {
    clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
     }
    if (B[2]==2 && B[5]==2 && B[8]==2) {
    clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   else if (B[3]==B[6] && B[3]==B[9]) {
    if (B[3]==1 && B[6]==1 && B[9]==1) {
    clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
    }
    if (B[3]==2 && B[6]==2 && B[9]==2) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   else if (B[3]==B[5] && B[3]==B[7]) {
    if (B[3]==1 && B[5]==1 && B[7]==1) {
    clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
    }
    if (B[3]==2 && B[5]==2 && B[7]==2) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   else if (B[4]==B[5] && B[4]==B[6]) {
    if (B[4]==1 && B[5]==1 && B[6]==1) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
    }
    if (B[4]==2 && B[5]==2 && B[6]==2) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   else if (B[7]==B[8] && B[7]==B[9]) {
    if (B[7]==1 && B[8]==1 && B[9]==1) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 2 has won the game.");
     getch();
     p2++;
     a++;
    }
    if (B[7]==2&& B[8]==2 && B[9]==2) {
     clrscr();
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPlayer 1 has won the game.");
     getch();
     p1++;
     a++;
    }
   }
   if (a>0)
    index=10;
   }
   }
   if (a==0) {
    clrscr();
    if (chance==9) {
     printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tDraw");
     getch();
     index=10;
    }
    else {
     clrscr();
     coding();
     printf("Enter:");
     scanf("%d",&index);
    }
   }

   } while (index!=10);
   break;

  case 2:
  clrscr();
   printf("%c",201);
   for (i=0;i<77;i++)
    printf("%c",205);
   printf("%c\n",187);
   for (i=0;i<4;i++)
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
   printf("%c\t\t\t    Exiting the game..... \t\t\t      %c\n",186,186);
   printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
   for (i=0;i<4;i++)
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);

   printf("%c\t\t        %c",186,218);
   for (i=0;i<30;i++)
    printf("%c",196);
   printf("%c \t\t      %c\n",191,186);
   printf("%c\t\t\t%c      Performance Report      %c \t\t      %c\n",186,179,179,186);
   printf("%c\t\t        %c",186,195);
   for (i=0;i<30;i++) {
    if (i==15)
     printf("%c",194);
    else
     printf("%c",196);
   }
   printf("%c \t\t      %c\n",180,186);
   printf("%c\t\t\t%c   Players     %c     Wins     %c \t\t      %c\n",186,179,179,179,186);
   printf("%c\t\t\t%c",186,195);
   for (i=0;i<30;i++) {
    if (i==15)
     printf("%c",197);
    else
     printf("%c",196);
   }
   printf("%c \t\t      %c\n",180,186);
   printf("%c\t\t\t%c   Player1     %c      %2d      %c \t\t      %c\n",186,179,179,p1,179,186);
   printf("%c\t\t\t%c   Player2     %c      %2d      %c \t\t      %c\n",186,179,179,p2,179,186);
   printf("%c\t\t        %c",186,192);
   for (i=0;i<30;i++) {
    if (i==15)
     printf("%c",193);
    else
     printf("%c",196);
   }
   printf("%c \t\t      %c\n",217,186);
   for (i=0;i<4;i++)
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
   printf("%c",200);
   for (i=0;i<77;i++)
    printf("%c",205);
   printf("%c\n",188);
   break;

  default:
   clrscr();
   for (i=0;i<10;i++)
     printf("\n");
   printf("\t\t\t\tWrong Number. Try again");
   getch();
   break;
 }
 } while (code!=2);
 getch();
}

void coding() {
  printf("%c",201);
   for (i=0;i<77;i++)
    printf("%c",205);
   printf("%c\n",187);
   printf("%c\t\t\t   Good Luck to both Players   \t\t\t      %c\n",186,186);
   printf("%c\t\t        %c",186,219);
   for (i=0;i<31;i++)
    printf("%c",223);
   printf("%c\t\t      %c\n",219,186);
   printf("%c\t\t        %c%c",186,221,218);
   for (i=1;i<=29;i++) {
    if (i%10==0 && i!=0)
     printf("%c",194);
    else
     printf("%c",196);
   }
   printf("%c",191);
   printf("%c \t\t      %c\n",222,186);
   if (A[1]==1) {
    if (B[1]==1)
     printf("%c                       %c%c %c%c%c%c%c%c%c %c",186,221,179,220,223,223,223,223,223,220,179);
    else
     printf("%c                       %c%c %c     %c %c",186,221,179,220,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[2]==1) {
    if (B[2]==1)
     printf(" %c%c%c%c%c%c%c %c",220,223,223,223,223,223,220,179);
    else
     printf(" %c     %c %c",220,220,179);
   }
   else
    printf("         %c",179);

   if (A[3]==1) {
    if (B[3]==1)
     printf(" %c%c%c%c%c%c%c %c%c\t\t      %c\n",220,223,223,223,223,223,220,179,222,186);
    else
     printf(" %c     %c %c%c\t\t      %c\n",220,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[1]==1) {
    if (B[1]==1)
     printf("%c                       %c%c %c     %c %c",186,221,179,221,222,179);
    else
     printf("%c                       %c%c  %c%c %c%c  %c",186,221,179,223,220,220,223,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[2]==1) {
    if (B[2]==1)
     printf(" %c     %c %c",221,222,179);
    else
     printf("  %c%c %c%c  %c",223,220,220,223,179);
   }
   else
    printf("         %c",179);

   if (A[3]) {
    if (B[3]==1)
     printf(" %c     %c %c%c\t\t      %c\n",221,222,179,222,186);
    else
     printf("  %c%c %c%c  %c%c\t\t      %c\n",223,220,220,223,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[1]==1) {
    if (B[1]==1)
     printf("%c                       %c%c %c     %c %c",186,221,179,221,222,179);
    else
     printf("%c                       %c%c   %c%c%c   %c",186,221,179,220,223,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[2]==1) {
    if (B[2]==1)
     printf(" %c     %c %c",221,222,179);
    else
     printf("   %c%c%c   %c",220,223,220,179);
   }
   else
    printf("         %c",179);

   if (A[3]==1) {
    if (B[3]==1)
     printf(" %c     %c %c%c\t\t      %c\n",221,222,179,222,186);
    else
     printf("   %c%c%c   %c%c\t\t      %c\n",220,223,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[1]==1) {
    if (B[1]==1)
     printf("%c                       %c%c %c%c%c%c%c%c%c %c",186,221,179,223,220,220,220,220,220,223,179);
    else
     printf("%c                       %c%c %c%c   %c%c %c",186,221,179,220,223,223,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[2]==1) {
    if (B[2]==1)
     printf(" %c%c%c%c%c%c%c %c",223,220,220,220,220,220,223,179);
    else
     printf(" %c%c   %c%c %c",220,223,223,220,179);
   }
   else
    printf("         %c",179);

   if (A[3]==1) {
    if (B[3]==1)
     printf(" %c%c%c%c%c%c%c %c%c\t\t      %c\n",223,220,220,220,220,220,223,179,222,186);
    else
     printf(" %c%c   %c%c %c%c\t\t      %c\n",220,223,223,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

     printf("%c\t\t        %c%c",186,221,195);
     for (i=1;i<=29;i++) {
      if (i%10==0 && i!=0)
       printf("%c",197);
      else
       printf("%c",196);
     }
     printf("%c",180);
     printf("%c \t\t      %c\n",222,186);

   if (A[4]==1) {
    if (B[4]==1)
     printf("%c                       %c%c %c%c%c%c%c%c%c %c",186,221,179,220,223,223,223,223,223,220,179);
    else
     printf("%c                       %c%c %c     %c %c",186,221,179,220,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[5]==1) {
    if (B[5]==1)
     printf(" %c%c%c%c%c%c%c %c",220,223,223,223,223,223,220,179);
    else
     printf(" %c     %c %c",220,220,179);
   }
   else
    printf("         %c",179);

   if (A[6]==1) {
    if (B[6]==1)
     printf(" %c%c%c%c%c%c%c %c%c\t\t      %c\n",220,223,223,223,223,223,220,179,222,186);
    else
     printf(" %c     %c %c%c\t\t      %c\n",220,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[4]==1) {
    if (B[4]==1)
     printf("%c                       %c%c %c     %c %c",186,221,179,221,222,179);
    else
     printf("%c                       %c%c  %c%c %c%c  %c",186,221,179,223,220,220,223,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[5]==1) {
    if (B[5]==1)
     printf(" %c     %c %c",221,222,179);
    else
     printf("  %c%c %c%c  %c",223,220,220,223,179);
   }
   else
    printf("         %c",179);

   if (A[6]==1) {
    if (B[6]==1)
     printf(" %c     %c %c%c\t\t      %c\n",221,222,179,222,186);
    else
     printf("  %c%c %c%c  %c%c\t\t      %c\n",223,220,220,223,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[4]==1) {
    if (B[4]==1)
     printf("%c                       %c%c %c     %c %c",186,221,179,221,222,179);
    else
     printf("%c                       %c%c   %c%c%c   %c",186,221,179,220,223,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[5]==1) {
    if (B[5]==1)
     printf(" %c     %c %c",221,222,179);
    else
     printf("   %c%c%c   %c",220,223,220,179);
   }
   else
    printf("         %c",179);

   if (A[6]==1) {
    if (B[6]==1)
     printf(" %c     %c %c%c\t\t      %c\n",221,222,179,222,186);
    else
     printf("   %c%c%c   %c%c\t\t      %c\n",220,223,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[4]==1) {
    if (B[4]==1)
     printf("%c                       %c%c %c%c%c%c%c%c%c %c",186,221,179,223,220,220,220,220,220,223,179);
    else
     printf("%c                       %c%c %c%c   %c%c %c",186,221,179,220,223,223,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[5]==1) {
    if (B[5]==1)
     printf(" %c%c%c%c%c%c%c %c",223,220,220,220,220,220,223,179);
    else
     printf(" %c%c   %c%c %c",220,223,223,220,179);
   }
   else
    printf("         %c",179);

   if (A[6]==1) {
    if (B[6]==1)
     printf(" %c%c%c%c%c%c%c %c%c\t\t      %c\n",223,220,220,220,220,220,223,179,222,186);
    else
     printf(" %c%c   %c%c %c%c\t\t      %c\n",220,223,223,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

     printf("%c\t\t        %c%c",186,221,195);
     for (i=1;i<=29;i++) {
      if (i%10==0 && i!=0)
       printf("%c",197);
      else
       printf("%c",196);
     }
     printf("%c",180);
     printf("%c \t\t      %c\n",222,186);
   if (A[7]==1) {
    if (B[7]==1)
     printf("%c                       %c%c %c%c%c%c%c%c%c %c",186,221,179,220,223,223,223,223,223,220,179);
    else
     printf("%c                       %c%c %c     %c %c",186,221,179,220,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);

   if (A[8]==1) {
    if (B[8]==1)
     printf(" %c%c%c%c%c%c%c %c",220,223,223,223,223,223,220,179);
    else
     printf(" %c     %c %c",220,220,179);
   }
   else
    printf("         %c",179);

   if (A[9]==1) {
    if (B[9]==1)
     printf(" %c%c%c%c%c%c%c %c%c\t\t      %c\n",220,223,223,223,223,223,220,179,222,186);
    else
     printf(" %c     %c %c%c\t\t      %c\n",220,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[7]==1) {
    if (B[7]==1)
     printf("%c                       %c%c %c     %c %c",186,221,179,221,222,179);
    else
     printf("%c                       %c%c  %c%c %c%c  %c",186,221,179,223,220,220,223,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);


   if (A[8]==1) {
    if (B[8]==1)
     printf(" %c     %c %c",221,222,179);
    else
     printf("  %c%c %c%c  %c",223,220,220,223,179);
   }
   else
    printf("         %c",179);

   if (A[9]==1) {
    if (B[9]==1)
     printf(" %c     %c %c%c\t\t      %c\n",221,222,179,222,186);
    else
     printf("  %c%c %c%c  %c%c\t\t      %c\n",223,220,220,223,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[7]==1) {
    if (B[7]==1)
     printf("%c                       %c%c %c     %c %c",186,221,179,221,222,179);
    else
     printf("%c                       %c%c   %c%c%c   %c",186,221,179,220,223,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);


   if (A[8]==1) {
    if (B[8]==1)
     printf(" %c     %c %c",221,222,179);
    else
     printf("   %c%c%c   %c",220,223,220,179);
   }
   else
    printf("         %c",179);

   if (A[9]==1) {
    if (B[9]==1)
     printf(" %c     %c %c%c\t\t      %c\n",221,222,179,222,186);
    else
     printf("   %c%c%c   %c%c\t\t      %c\n",220,223,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

   if (A[7]==1) {
    if (B[7]==1)
     printf("%c                       %c%c %c%c%c%c%c%c%c %c",186,221,179,223,220,220,220,220,220,223,179);
    else
     printf("%c                       %c%c %c%c   %c%c %c",186,221,179,220,223,223,220,179);
   }
   else
    printf("%c                       %c%c         %c",186,221,179,179);


   if (A[8]==1) {
    if (B[8]==1)
     printf(" %c%c%c%c%c%c%c %c",223,220,220,220,220,220,223,179);
    else
     printf(" %c%c   %c%c %c",220,223,223,220,179);
   }
   else
    printf("         %c",179);

   if (A[9]==1) {
    if (B[9]==1)
     printf(" %c%c%c%c%c%c%c %c%c\t\t      %c\n",223,220,220,220,220,220,223,179,222,186);
    else
     printf(" %c%c   %c%c %c%c\t\t      %c\n",220,223,223,220,179,222,186);
   }
   else
    printf("         %c%c\t\t      %c\n",179,222,186);

     printf("%c\t\t        %c%c",186,221,192);
     for (i=1;i<=29;i++) {
      if (i%10==0 && i!=0)
       printf("%c",193);
      else
       printf("%c",196);
     }
     printf("%c",217);
     printf("%c \t\t      %c\n",222,186);


   printf("%c\t\t        %c",186,219);
   for (i=0;i<31;i++)
    printf("%c",220);
   printf("%c\t\t      %c\n",219,186);
   printf("%c\t\t\t Type the index of tile to mark \t\t      %c\n",186,186);
   printf("%c\t\t\t     Type 10 to exit to menu    \t\t      %c\n",186,186);
   printf("%c",200);
   for (i=0;i<77;i++)
    printf("%c",205);
   printf("%c\n",188);

}


