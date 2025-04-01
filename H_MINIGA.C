#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
 int A[16],empty,i,j,k=0,wm=0,code,index,move,count,fm=0,gp=0,m=0,n,l=0;
 clrscr();
 for (i=0;i<11;i++)
  printf("\n");
//Border
 printf("\t\t\t    %c",201);
 for (i=0;i<26;i++)
  printf("%c",205);
 printf("%c\n",187);

 printf("\t\t\t    %c Welcome To the Minigame! %c\n",186,186);

//Border
 printf("\t\t\t    %c",200);
 for (i=0;i<26;i++)
  printf("%c",205);
 printf("%c\n",188);
 printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t     Press Enter to continue...");
 getch();
 do {
  clrscr();
//menu
  for (i=0;i<9;i++)
   printf("\n");
  printf("\t\t\t%c",201);
  for (i=0;i<28;i++)
   printf("%c",205);
  printf("%c",187);
  if (m==0 || wm==1) {
   printf("\n\t\t\t%c       1 - New Game\t     %c\n",186,186);
   printf("\t\t\t%c\t  2 - Exit\t     %c\n",186,186);
  }
  else {
   printf("\n\t\t\t%c       1 - New Game\t     %c\n",186,186);
   printf("\t\t\t%c\t  2 - Exit\t     %c\n",186,186);
   printf("\t\t\t%c       3 - Continue\t     %c\n",186,186);
  }
  printf("\t\t\t%c",200);
  for (i=0;i<28;i++)
   printf("%c",205);
  printf("%c",188);
  for (i=0;i<10;i++)
   printf("\n");
  printf("Type your choice:");
  scanf("%d",&code);
  clrscr();
//Main Coding
  switch (code) {
   case 1:
    n=0;
    gp++;
    m++;
    count=0;
    A[0]=1,A[1]=3,A[2]=11,A[3]=7,A[4]=9,A[5]=8,A[6]=5,A[7]=14,A[8]=4,A[9]=13,A[10]=2,A[11]=0,A[12]=12,A[13]=6,A[14]=15,A[15]=10;
 //   A[0]=1,A[1]=2,A[2]=3,A[3]=4,A[4]=5,A[5]=6,A[6]=7,A[7]=8,A[8]=9,A[9]=10,A[10]=11,A[11]=12,A[12]=13,A[13]=14,A[14]=0,A[15]=15;
    empty=11;
    do {
    clrscr();
    if (wm==1) {
     wm=0;
     count=0;
    }
    if (n==0) {
     printf("\n\nInstructions:\n");
     printf("1.Numbers can be moved if it is close to ( ) Space.\n");
     printf("2.If the numbers ,which are not near the ( ) Space, are tried to move, It will  be taken as a move used and there will be no change in the game board.\n");
     printf("3.The ( ) Space has to be present at the bottom right corner and the other      numbers arranged from top left.\n");
     printf("4.Get the fastest way possible\n");
     printf("5.Have fun :)\n");
     getch();
     n++;
    }
    clrscr();
    printf("%c",201);
    for (i=0;i<77;i++)
     printf("%c",205);
    printf("%c\n",187);
    printf("%c\t\t\t      Good Luck to you      \t\t\t      %c\n",186,186);
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c\t\t    %c",186,218);
    for (i=1;i<36;i++) {
     if (i%9==0)
      printf("%c",194);
     else
      printf("%c",196);
    }
    printf("%c\t\t      %c\n",191,186);
    for (i=0;i<16;i++) {
     if (i==0 || i==4 || i==8 || i==12)
      if (A[i]==0)
       printf("%c\t\t    %c        %c",186,179,179);
      else
       printf("%c\t\t    %c   %2d   %c",186,179,A[i],179);
     else if (i==3 ||i==7 ||i==11 ||i==15) {
      k++;
      if (A[i]==0)
       printf("        %c\t\t      %c\n",179,186);
      else
       printf("   %2d   %c\t\t      %c\n",A[i],179,186);
      if (k%4!=0)
       printf("%c\t\t    %c",186,195);
      else
       printf("%c\t\t    %c",186,192);
      for (j=1;j<36;j++) {
       if (k%4!=0 && k!=0) {
	if (j%9==0)
	 printf("%c",197);
	else
	 printf("%c",196);
       }
       else {
	if (j%9==0)
	 printf("%c",193);
	else
	 printf("%c",196);
       }
      }
      if (k%4!=0 && k!=0)
       printf("%c\t\t      %c\n",180,186);
      else
       printf("%c\t\t      %c\n",217,186);
     }
     else
      if (A[i]==0)
       printf("        %c",179);
      else
       printf("   %2d   %c",A[i],179);
    }
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c\t\t     Type the number of the tile to move\t\t      %c\n",186,186);
    printf("%c\t\t\t Type 16 to go back to menu   \t\t\t      %c\n",186,186);
    printf("%c",200);
    for (i=0;i<77;i++)
     printf("%c",205);
    printf("%c\n",188);
    printf("Enter:");
    scanf("%d",&move);
    for (i=0;i<16;i++) {
     if (A[i]==move)
      index=i;
    }
    if (empty%4==0) {
     if (index==empty+1 || index==empty+4 || index==empty-4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
     if (empty==12 && index==8) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if ((empty+1)%4==0) {
     if (index==empty-1 || index==empty-4 || index==empty+4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
     if (empty==3 && index==7) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if (empty==1 || empty==2) {
     if (index==empty+1 || index==empty-1 || index==empty+4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if (empty==13 || empty==14) {
     if (index==empty+1 || index==empty-1 || index==empty-4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if (empty==5 ||empty==6 ||empty==9 ||empty==10 )  {
     if (index==empty+1 ||index==empty-1 ||index==empty+4 ||index==empty-4 ) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }
    count+=1;
    for (i=0;i<16;i++) {
     if (A[i]==i+1)
      l++;
    }
    if (l==15) {
     move=16;
     wm++;
    }
    l=0;

    } while(move!=16);
    if (wm>0) {
     printf("\t\t\t%c",201);
     for (i=0;i<22;i++)
      printf("%c",205);
     printf("%c\n",187);
     printf("\t\t\t%cYOU HAVE WON THE GAME!%c\n",186,186);
     printf("\t\t\t%c",200);
     for (i=0;i<22;i++)
      printf("%c",205);
     printf("%c\n",188);
     printf("\t\t\t Completed in %3d moves",count);
     getch();
     if (wm==1)
      fm=count;
     else {
      if (fm>count)
       fm=count;
    }
    }
    break;
   case 3:
    do {
    clrscr();
    printf("%c",201);
    for (i=0;i<77;i++)
     printf("%c",205);
    printf("%c\n",187);
    printf("%c\t\t\t      Good Luck to you      \t\t\t      %c\n",186,186);
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c\t\t    %c",186,218);
    for (i=1;i<36;i++) {
     if (i%9==0)
      printf("%c",194);
     else
      printf("%c",196);
    }
    printf("%c\t\t      %c\n",191,186);
    for (i=0;i<16;i++) {
     if (i==0 || i==4 || i==8 || i==12)
      if (A[i]==0)
       printf("%c\t\t    %c        %c",186,179,179);
      else
       printf("%c\t\t    %c   %2d   %c",186,179,A[i],179);
     else if (i==3 ||i==7 ||i==11 ||i==15) {
      k++;
      if (A[i]==0)
       printf("        %c\t\t      %c\n",179,186);
      else
       printf("   %2d   %c\t\t      %c\n",A[i],179,186);
      if (k%4!=0)
       printf("%c\t\t    %c",186,195);
      else
       printf("%c\t\t    %c",186,192);
      for (j=1;j<36;j++) {
       if (k%4!=0 && k!=0) {
	if (j%9==0)
	 printf("%c",197);
	else
	 printf("%c",196);
       }
       else {
	if (j%9==0)
	 printf("%c",193);
	else
	 printf("%c",196);
       }
      }
      if (k%4!=0 && k!=0)
       printf("%c\t\t      %c\n",180,186);
      else
       printf("%c\t\t      %c\n",217,186);
     }
     else
     if (A[i]==0)
      printf("        %c",179);
     else
      printf("   %2d   %c",A[i],179);
    }
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c\t\t     Type the number of the tile to move\t\t      %c\n",186,186);
    printf("%c\t\t\t Type 16 to go back to menu   \t\t\t      %c\n",186,186);
    printf("%c",200);
    for (i=0;i<77;i++)
     printf("%c",205);
    printf("%c\n",188);
    printf("Enter:");
    scanf("%d",&move);
    for (i=0;i<16;i++) {
     if (A[i]==move)
      index=i;
    }
    if (empty%4==0) {
     if (index==empty+1 || index==empty+4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
     if (empty==12 && index==8) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if ((empty+1)%4==0) {
     if (index==empty-1 || index==empty-4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
     if (empty==3 && index==7) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if (empty==1 || empty==2) {
     if (index==empty+1 || index==empty-1 || index==empty+4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if (empty==13 || empty==14) {
     if (index==empty+1 || index==empty-1 || index==empty-4) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }

    if (empty==5 ||empty==6 ||empty==9 ||empty==10 )  {
     if (index==empty+1 ||index==empty-1 ||index==empty+4 ||index==empty-4 ) {
      A[empty]=A[index];
      A[index]=0;
      empty=index;
     }
    }
    count+=1;
    for (i=0;i<16;i++) {
     if (A[i]==i+1)
      l++;
    }

    if (l==15) {
     move=16;
     wm++;
    }
    l=0;

    } while(move!=16);
    if (wm>0) {
     printf("\t\t\t%c",201);
     for (i=0;i<22;i++)
      printf("%c",205);
     printf("%c\n",187);
     printf("\t\t\t%cYOU HAVE WON THE GAME!%c\n",186,186);
     printf("\t\t\t%c",200);
     for (i=0;i<22;i++)
      printf("%c",205);
     printf("%c\n",188);
     printf("\t\t\t Completed in %3d moves",count);
     getch();
     if (wm==1)
      fm=count;
     else {
      if (fm>count)
       fm=count;
      }
    }
    break;
   case 2:
    printf("%c",201);
    for (i=0;i<77;i++)
     printf("%c",205);
    printf("%c\n",187);
    for (i=0;i<4;i++)
     printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c\t\t\t    Exiting the minigame..... \t\t\t      %c\n",186,186);
    printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    for (i=0;i<4;i++)
     printf("%c\t\t\t                              \t\t\t      %c\n",186,186);

    printf("%c\t\t        %c",186,218);
    for (i=0;i<30;i++)
     printf("%c",196);
    printf("%c \t\t      %c\n",191,186);
    printf("%c\t\t\t%c      Performance Report      %c \t\t      %c\n",186,179,179,186);
    printf("%c\t\t        %c",186,195);
    for (i=0;i<30;i++)
     printf("%c",196);
    printf("%c \t\t      %c\n",180,186);
    printf("%c\t\t\t%c       Games Played:%d         %c \t\t      %c\n",186,179,gp,179,186);
    printf("%c\t\t\t%c   Fastest Moves Played:%3d   %c \t\t      %c\n",186,179,fm,179,186);
    printf("%c\t\t        %c",186,192);
    for (i=0;i<30;i++)
     printf("%c",196);
    printf("%c \t\t      %c\n",217,186);
    for (i=0;i<5;i++)
     printf("%c\t\t\t                              \t\t\t      %c\n",186,186);
    printf("%c",200);
    for (i=0;i<77;i++)
     printf("%c",205);
    printf("%c\n",188);
    break;
   default:
    for (i=0;i<10;i++)
     printf("\n");
    printf("\t\t\t\tWrong Number. Try again");
    getch();
    break;
  }
 } while (code!=2);
 getch();
}