#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main() {
    int gd=DETECT,gm,i,j;
    int a;
    printf("%d%d",getmaxx(),getmaxy());

    initgraph(&gd,&gm,"C:\\tc\\bgi");
  
    for(j=1;j>0;j++) {
        for(i=0;i<=70;i++) {
            rectangle(0+2*i,0+4*i,0+5*i,20+4*i);
            setcolor(j);
            circle(300,400,5+i*2);
            setbkcolor(j-1);
           delay(100);
           circle(250,250,10+i);
           setbkcolor(j);
          //cleardevice();

      if(j>getmaxcolor())
          j=0;
         delay(50);
    }
    delay(400);
}
getch();
}
