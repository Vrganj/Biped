class Walker {
  
  int x;
  int y;
  
  Walker() {
// ===== DEFINING THE VALUE OF X AND Y =====
// THIS IS THE CONSTRUCTOR
    x = width/2;
    y = height/2;  
  }
  
  void show() {
    stroke(0);
    point(x,y);
  }
  
  void move() {
    float choice = random(1);
    
    if(choice < 0.3){
      x++;
    }
    if(choice > 0.3){
      x--;
    }
    if(choice < 0.7){
      y--;
    }
    if(choice > 0.7){
      y++;
    }
  }
}
