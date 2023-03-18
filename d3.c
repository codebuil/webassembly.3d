double scale=400.00;
double units=10.00;
double wasm_draw3Dx(double x, double y, double z) {
  double zz=(z+1.00)*1.50;
  double zzz=scale/zz;
  double zzzz=scale/2-zzz/2;
  double zzzzz=(zzz/units)*x;
  double zzzzzz=zzzz+zzzzz;
  return zzzzzz;  
}
double wasm_draw3Dy(double x, double y, double z) {
  double zz=(z+1.00)*1.50;
  double zzz=scale/zz;
  double zzzz=scale/2-zzz/2;
  double zzzzz=(zzz/units)*(units-y);
  double zzzzzz=zzzz+zzzzz;
  return zzzzzz;  
}
void setScale(double sc){
  scale=sc;
}
void setunits(double sc){
  units=sc;
}