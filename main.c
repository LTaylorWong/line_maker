#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  
  c.red = 0;
  c.green = 50;
  c.blue = 100;
  
  clear_screen(s);


  int m = 1;
  //int j = 1;
  while (m<500){
  draw_line( m+3, 0, XRES, m, s, c);
m += 15;
  }
 
  c.red = 100;
c.green = 100;
c.blue = 250;

int j = 0;
while (j<100){
draw_line(j*m,0,XRES, j, s,c);
j+= 20;
}
 
  //display(s);
  save_extension(s, "lines.png");
}  
