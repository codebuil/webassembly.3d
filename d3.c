float scale=100;
float wasm_draw3Dx(float x, float y, float z) {
  
  return scale + ((x / (z + 1.0)/2)-(scale/2));

  
}
float wasm_draw3Dy(float x, float y, float z) {
  
  return scale - (y + (z + 1.0));
}
void setScale(float sc){
  scale=sc;
}