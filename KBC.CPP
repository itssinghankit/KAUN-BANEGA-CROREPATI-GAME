#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h> //for gets
#include<stdlib.h>           //for exit
#include<string.h>    //for strcmp
#include<fstream.h>

void main(void);    //main function declaration
void pwd(void);     //password function declaration
void setting(void);  //setting function declaration
  class quiz
{
 private:
char q[300],a[20],b[20],c[20],d[20],e[20];

  public:
  int f;
void enterques()
{
gotoxy(1,6) ;
gets(q);
}
void option()
{
gotoxy(20,13) ;
gets(a);
gotoxy(20,15) ;
gets(b);
gotoxy(20,17) ;
gets(c);
gotoxy(20,19) ;
gets(d);
}
void correcta()
{
gotoxy(26,22) ;
cin>>f;
}
void show()
{
gotoxy(6,7);
cout<<q<<"\n\n\n";
cout<<"\ta> "<<a<<"\n";
cout<<"\tb> "<<b<<"\n";
cout<<"\tc> "<<c<<"\n";
cout<<"\td> "<<d<<"\n";
}
void sho()
{
gotoxy(6,15);
cout<<q;
gotoxy(11,23);
cout<<a;
gotoxy(41,23);
cout<<b;
gotoxy(11,26);
cout<<c;
gotoxy(41,26);
cout<<d;
}
int crr()
{return f;}
};

    void kbc()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	   setfillstyle(SOLID_FILL,BLUE);
	   floodfill(1,1,BLUE);

 setfillstyle(SOLID_FILL,BROWN);
rectangle(15,20,500,120);             //upper rectangle
 floodfill(17,21,WHITE);
 setfillstyle(SOLID_FILL,YELLOW);
rectangle(45,50,470,100);            //upper inside rectangle
 floodfill(46,51,WHITE);
 settextstyle(0,0,2);
 setcolor(BLACK);
outtextxy(100,30,"SELECT YOUR OPTION :-");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(15,220,500,320);
 floodfill(17,225,WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(515,20,625,450);
 floodfill(516,21,WHITE);
 settextstyle(0,0,4);
 setcolor(RED);
 outtextxy(525,35,"KBC");
 settextstyle(0,0,1);
 outtextxy(530,75,"KAUN BNEGA");
 outtextxy(530,95,"CAROREPATI");
 setcolor(WHITE);

settextstyle(0,0,2);
setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(45,330,230,380);
 floodfill(46,331,WHITE);
 setcolor(BLACK);
 outtextxy(50,347,"1>");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(280,330,465,380);
 floodfill(281,331,WHITE);
 setcolor(BLACK);
 outtextxy(285,347,"2>");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(280,400,465,450);
 floodfill(281,401,WHITE);
 setcolor(BLACK);
 outtextxy(285,417,"4>");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(45,400,230,450);
 floodfill(46,401,WHITE);
 setcolor(BLACK);
 outtextxy(50,417,"3>");

setcolor(WHITE);

setfillstyle(SOLID_FILL,GREEN);     //ellipse1
ellipse(100,170,0,360,50,30);
floodfill(90,171,WHITE);

setfillstyle(SOLID_FILL,GREEN);      //ellipse2
ellipse(220,170,0,360,50,30);
floodfill(210,171,WHITE);

setfillstyle(SOLID_FILL,GREEN);     //ellipse3
ellipse(340,170,0,360,50,30);
floodfill(300,171,WHITE);
setcolor(BLACK);
setfillstyle(SOLID_FILL,MAGENTA);      //help rec
rectangle(420,155,490,185);
floodfill(421,156,BLACK);
settextstyle(0,0,1) ;
outtextxy(425,167,"4> MENU");

ellipse(100,190,0,180,10,25);
line(90,190,110,190);
circle(100,158,7);
ellipse(120,190,0,180,10,25);
line(110,190,130,190);
circle(120,158,7);
ellipse(80,190,0,180,10,25);
line(70,190,90,190);
circle(80,158,7);
setcolor(BROWN);
settextstyle(0,0,2);
outtextxy(187,162,"50:50");
setcolor(BLACK);
settextstyle(0,0,1);
outtextxy(172,166,"2>");

setcolor(BLACK);
settextstyle(0,0,1);
outtextxy(55,166,"1>");

setcolor(BLACK);
settextstyle(0,0,1);
outtextxy(295,166,"3>");


setcolor(BLACK);                    //call button
ellipse(325,170,90,270,7,20);
ellipse(335,170,155,200,7,20);
ellipse(325,157,290,95,9,7);
ellipse(325,183,280,76,9,7);

ellipse(335,170,315,50,5,5);    //call button waves
ellipse(335,170,315,50,7,7);
ellipse(335,170,315,50,9,9);
ellipse(335,170,315,50,13,13);
ellipse(335,170,315,50,15,15);
ellipse(335,170,315,50,17,17);
ellipse(335,170,315,50,21,21);
ellipse(335,170,315,50,23,23);
ellipse(335,170,315,50,25,25);

setcolor(BLACK);
rectangle(515,400,625,420);
outtextxy(540,406,"1000");
rectangle(515,380,625,400);
outtextxy(540,386,"2000");
rectangle(515,360,625,380);
outtextxy(540,366,"3000");
rectangle(515,340,625,360);
outtextxy(540,346,"5000");
rectangle(515,320,625,340);
outtextxy(540,326,"10000");
rectangle(515,300,625,320);
outtextxy(540,306,"20000");
rectangle(515,280,625,300);
outtextxy(540,286,"40000");
rectangle(515,260,625,280);
outtextxy(540,266,"80000");
rectangle(515,240,625,260);
outtextxy(540,246,"160000");
rectangle(515,220,625,240);
outtextxy(540,226,"320000");
rectangle(515,200,625,220);
outtextxy(540,206,"640000");
rectangle(515,180,625,200);
outtextxy(540,186,"1250000");
rectangle(515,160,625,180);
outtextxy(540,166,"2500000");
rectangle(515,140,625,160);
outtextxy(540,146,"5000000");
rectangle(515,120,625,140);
outtextxy(540,126,"1 CRORE");

gotoxy(18,5);
int a;
ifstream fin;
fin.open("question.dat",ios::binary|ios::app);
quiz q;
while(fin.read((char *)&q,sizeof(q)) )
{ int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	   setfillstyle(SOLID_FILL,BLUE);
	   floodfill(1,1,BLUE);

 setfillstyle(SOLID_FILL,BROWN);
rectangle(15,20,500,120);             //upper rectangle
 floodfill(17,21,WHITE);
 setfillstyle(SOLID_FILL,YELLOW);
rectangle(45,50,470,100);            //upper inside rectangle
 floodfill(46,51,WHITE);
 settextstyle(0,0,2);
 setcolor(BLACK);
outtextxy(100,30,"SELECT YOUR OPTION :-");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(15,220,500,320);
 floodfill(17,225,WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(515,20,625,450);
 floodfill(516,21,WHITE);
 settextstyle(0,0,4);
 setcolor(RED);
 outtextxy(525,35,"KBC");
 settextstyle(0,0,1);
 outtextxy(530,75,"KAUN BNEGA");
 outtextxy(530,95,"CAROREPATI");
 setcolor(WHITE);

settextstyle(0,0,2);
setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(45,330,230,380);
 floodfill(46,331,WHITE);
 setcolor(BLACK);
 outtextxy(50,347,"1>");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(280,330,465,380);
 floodfill(281,331,WHITE);
 setcolor(BLACK);
 outtextxy(285,347,"2>");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(280,400,465,450);
 floodfill(281,401,WHITE);
 setcolor(BLACK);
 outtextxy(285,417,"4>");
 setcolor(WHITE);

 setfillstyle(SOLID_FILL,CYAN);
rectangle(45,400,230,450);
 floodfill(46,401,WHITE);
 setcolor(BLACK);
 outtextxy(50,417,"3>");

setcolor(WHITE);

setfillstyle(SOLID_FILL,GREEN);     //ellipse1
ellipse(100,170,0,360,50,30);
floodfill(90,171,WHITE);

setfillstyle(SOLID_FILL,GREEN);      //ellipse2
ellipse(220,170,0,360,50,30);
floodfill(210,171,WHITE);

setfillstyle(SOLID_FILL,GREEN);     //ellipse3
ellipse(340,170,0,360,50,30);
floodfill(300,171,WHITE);
setcolor(BLACK);
setfillstyle(SOLID_FILL,MAGENTA);      //help rec
rectangle(420,155,490,185);
floodfill(421,156,BLACK);
settextstyle(0,0,1) ;
outtextxy(425,167,"4> MENU");

ellipse(100,190,0,180,10,25);
line(90,190,110,190);
circle(100,158,7);
ellipse(120,190,0,180,10,25);
line(110,190,130,190);
circle(120,158,7);
ellipse(80,190,0,180,10,25);
line(70,190,90,190);
circle(80,158,7);
setcolor(BROWN);
settextstyle(0,0,2);
outtextxy(187,162,"50:50");
setcolor(BLACK);
settextstyle(0,0,1);
outtextxy(172,166,"2>");

setcolor(BLACK);
settextstyle(0,0,1);
outtextxy(55,166,"1>");

setcolor(BLACK);
settextstyle(0,0,1);
outtextxy(295,166,"3>");


setcolor(BLACK);                    //call button
ellipse(325,170,90,270,7,20);
ellipse(335,170,155,200,7,20);
ellipse(325,157,290,95,9,7);
ellipse(325,183,280,76,9,7);

ellipse(335,170,315,50,5,5);    //call button waves
ellipse(335,170,315,50,7,7);
ellipse(335,170,315,50,9,9);
ellipse(335,170,315,50,13,13);
ellipse(335,170,315,50,15,15);
ellipse(335,170,315,50,17,17);
ellipse(335,170,315,50,21,21);
ellipse(335,170,315,50,23,23);
ellipse(335,170,315,50,25,25);

setcolor(BLACK);
rectangle(515,400,625,420);
outtextxy(540,406,"1000");
rectangle(515,380,625,400);
outtextxy(540,386,"2000");
rectangle(515,360,625,380);
outtextxy(540,366,"3000");
rectangle(515,340,625,360);
outtextxy(540,346,"5000");
rectangle(515,320,625,340);
outtextxy(540,326,"10000");
rectangle(515,300,625,320);
outtextxy(540,306,"20000");
rectangle(515,280,625,300);
outtextxy(540,286,"40000");
rectangle(515,260,625,280);
outtextxy(540,266,"80000");
rectangle(515,240,625,260);
outtextxy(540,246,"160000");
rectangle(515,220,625,240);
outtextxy(540,226,"320000");
rectangle(515,200,625,220);
outtextxy(540,206,"640000");
rectangle(515,180,625,200);
outtextxy(540,186,"1250000");
rectangle(515,160,625,180);
outtextxy(540,166,"2500000");
rectangle(515,140,625,160);
outtextxy(540,146,"5000000");
rectangle(515,120,625,140);
outtextxy(540,126,"1 CRORE");
q.sho();
 int i=1;
  gotoxy(1,7);
cout<<"Q"<<i<<":-";
i++;
cin>>a;
int g;
  g=q.crr();
     if(a==5)
 {
     main();
 }

     if(a!=g)
 {
   exit(0);
 }

}
closegraph();
}

     void view()       //show questions
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
   setcolor(BLUE);
	   setfillstyle(SOLID_FILL,YELLOW);
	   floodfill(1,1,WHITE);
   settextstyle(0,0,2);
outtextxy(230,50,"QUESTIONS:-");
 ifstream fin;
 fin.open("question.dat",ios::binary|ios::app);
quiz s;
int i=1;
while(fin.read((char*)&s,sizeof(s)))
{
	  setfillstyle(SOLID_FILL,YELLOW);
	   floodfill(1,1,BLACK);
	   outtextxy(230,50,"QUESTIONS:-");
s.show();
gotoxy(1,7);
cout<<"Q"<<i<<":-";
getch();
i++;
clrscr();
}
fin.close();
pwd();
}

    void addq()          //for adding question
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	setfillstyle(SOLID_FILL,MAGENTA);
	floodfill(1,1,WHITE);

     setfillstyle(SOLID_FILL,CYAN);
rectangle(40,40,600,430) ;
     floodfill(41,41,WHITE);

 setcolor(BLACK);
      setfillstyle(SOLID_FILL,YELLOW);
outtextxy(60,60,"ENTER THE QUESTION");
 rectangle(0,77,650,166);
      floodfill(71,81,BLACK);
      setfillstyle(SOLID_FILL,YELLOW);
outtextxy(60,197,"OPTION 1 :-");
 rectangle(150,187,350,212);
      floodfill(151,191,BLACK);
      setfillstyle(SOLID_FILL,YELLOW);
outtextxy(60,229,"OPTION 2 :-");
 rectangle(150,219,350,244);
      floodfill(151,221,BLACK);
      setfillstyle(SOLID_FILL,YELLOW);
outtextxy(60,261,"OPTION 3 :-");
 rectangle(150,251,350,276);
      floodfill(151,252,BLACK);
      setfillstyle(SOLID_FILL,YELLOW);
outtextxy(60,293,"OPTION 4 :-");
 rectangle(150,283,350,308);
       floodfill(151,284,BLACK);
      setfillstyle(SOLID_FILL,YELLOW);
outtextxy(60,342,"CORRECT ANSWER :-");
 rectangle(197,332,400,357);
      floodfill(198,333,BLACK);

ofstream fout;
fout.open("question.dat",ios::binary|ios::app);
quiz z;
{
     z.enterques();
     z.option();
     z.correcta();
     fout.write((char*)&z,sizeof(z));
     setcolor(BLACK);
     outtextxy(250,400,"added succesfully");
     getch();
}
fout.close();

closegraph();
pwd();
}
void pwd()               //after pwd
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(1,1,WHITE);

     setfillstyle(SOLID_FILL,MAGENTA);
rectangle(40,40,600,430) ;     //inner rectangle after pwd
     floodfill(41,41,WHITE);

     setfillstyle(SOLID_FILL,YELLOW);     //answer box
rectangle(80,315,560,380);
     floodfill(81,316,WHITE);

     settextstyle(0,0,2);
     setcolor(BLACK);
outtextxy(100,100,">>> CHOOSE AN OPTION :-");
     settextstyle(0,0,1);
outtextxy(210,160,"1> ADD A QUESTION");
outtextxy(210,190,"2> VIEW ALL QUESTIONS");
outtextxy(210,220,"3> MAIN MENU");
int a;
gotoxy(41,22);
cin>>a;
if(a==1)
{
addq();
}
if(a==2)
{
view();
}
if(a==3)
{
main();
}
getch();
}

     void setting()      // for setting
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	setfillstyle(SOLID_FILL,RED);
	floodfill(1,1,WHITE);

     setfillstyle(SOLID_FILL,MAGENTA);
rectangle(40,40,600,430) ;     //inner rectangle
     floodfill(41,41,WHITE);

     setcolor(BLACK);                 //PASSWORD
outtextxy(165,195,"ENTER USER ID  :-");
outtextxy(160,230,"ENTER PASSWORD :-");
	 setfillstyle(SOLID_FILL,YELLOW);
     rectangle(320,188,500,213);      //pwd and user id box
	 floodfill(321,191,BLACK);
	 setfillstyle(SOLID_FILL,YELLOW);
     rectangle(320,220,500,245);
	 floodfill(321,221,BLACK);
 char a[15];
 char b[15];
     gotoxy(42,13);
gets(a);
     gotoxy(42,15);
gets(b);
if(strcmp(a,"kbc")==0&& strcmp(b,"imgreat")==0)
{
pwd();
getch();
}
else
{
settextstyle(0,0,2);
setcolor(RED);
outtextxy(200,100,"WRONG PASSWORD");
getch();
main();
}
 getch();
 closegraph();

}
     void ex()             //to exit
{
exit(0);
}


void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(1,1,WHITE);
     setfillstyle(SOLID_FILL,MAGENTA);
rectangle(40,40,600,430) ;    //inner rectangle
     floodfill(41,41,WHITE);
     setfillstyle(SOLID_FILL,GREEN);
rectangle(80,80,560,390);
     floodfill(81,81,WHITE);
settextstyle(0,0,2);
setcolor(BLACK);
outtextxy(170,120,"CHOOSE YOUR OPTION :-");
setcolor(BLUE);
outtextxy(150,170,"1> PLAY GAME");
outtextxy(150,220,"2> SETTINGS");
outtextxy(150,270,"3> EXIT");
setcolor(BLACK);
     setfillstyle(SOLID_FILL,YELLOW);
rectangle(120,320,520,370);         //lower rectangle
     floodfill(121,321,BLACK);

int a;
gotoxy(40,22);
cin>>a;
if(a==1)
{
kbc();
}
else if(a==2)
{
setting();
}
else if(a==3)
{
ex();
}
else
{
setcolor(BROWN);
outtextxy(220,330,"INVALID OPTION");
getch();
main();
}
getch();
closegraph();
getch();
}












