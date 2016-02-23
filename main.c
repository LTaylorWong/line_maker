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
  draw_line( 0, 0, XRES, m, s, c);
  m += 5;
c.red++;
c.green++;
c.blue++;
  }
 
 int j = 1;
while (j<500){
draw_line(j, 0, XRES, YRES,s,c);
j+=20;
}
  
  //display(s);
  save_extension(s, "lines.png");
}  
