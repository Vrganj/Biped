void setup (){
  size(800, 500);
}

void draw (){
  background(200);
  fill(255);
  
  for(int i = 0; i < 16; i++){
    float h = randomGaussian();
    float hMultiplier = height - mouseY;
    rect(0 + (i * 50), height - (h * hMultiplier), 50, h * hMultiplier);
  }
}
