Walker w;

void setup() {
  size(800, 600);
  w = new Walker();
  background(175);
}

void draw() {
  w.show();
  w.move();
}
