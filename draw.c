#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void plot(int x, int y){
}
int lines(){
  int x, y, A, B, D
  /*octant ichi
  (x0,y0)-->(x1,y1)
  */
  x=x0 y=y0
    A = y1-y0 B = -(x1-x0)
    d = 2A + B
    while(x<=x1){
      plot(x,y)
      if(d>0){
	  y+=1
	  d+=2B
      }
      x+=1
      d+=2A
    }
  //octant ni
  //octant san
  //octant yon
  //octant go
  //octant roku
  //octant nana
  //octant hachi
}

void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
}

