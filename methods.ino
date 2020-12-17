
void drawCircle (int centerx, int centery, int radius, int res){
  for(int a=0; a<res; a++){
    dacWrite(x, centerx + radius * cos(a*pi/180 * 360/res));
    dacWrite(y, centery + radius * sin(a*pi/180 * 360/res)); 
  }
}

void drawLine(int startx, int starty, int stopx, int stopy, int resolution){
  int i=0;
  while(i<resolution){
    dacWrite(x , startx + i*(stopx - startx)/resolution);
    dacWrite(y , starty + i*(stopy - starty)/resolution);
    i++;
  }
}

void drawPoint(int xcoord, int ycoord) {
  dacWrite(x, xcoord);
  dacWrite(x, ycoord);
}
  
