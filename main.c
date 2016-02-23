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
  while (m<500){
  draw_line( m+10, 0, XRES, m, s, c);
  draw_line(m*3,0,XRES,m,s,c);
  m += 25;
  }
 
 
  //display(s);
  save_extension(s, "lines.png");
}  
