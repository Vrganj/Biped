class Walker {
  
  int x;
  int y;
  float stddev;
  float mean;
  
  Walker() {
// ===== DEFINING THE VALUE OF X AND Y =====
// THIS IS THE CONSTRUCTOR
    x = width/2;
    y = height/2;
    stddev = 10;
    mean = 100;
  }
  
  void show() {
    stroke(0);
    point(x,y);
  }
  
  void move() {
    float choice = randomGaussian();
    choice *= stddev;
    choice += mean;
    
    if(choice < 0.5){
      x++;
    }
    if(choice > 0.1){
      x--;
    }
    if(choice < 0.4){
      y--;
    }
    if(choice > 0.7){
      y++;
    }
  }
}
