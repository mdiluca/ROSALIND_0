char s[] = {'A', 'T', 'C', 'G', 'G' };
char sc[] = new char[s.length];
float offset;
offset = 0.0;
for (int i = 0; i < s.length; i++) {
  print(s[i]);
}
int max = s.length - 1;
for (int i = 0; i < s.length; i++) {
  sc[max - i] = s[i];
}
print("\n");

for (int i = 0; i < s.length; i++) {
  print(sc[i]);
}


/*
void setup() {
  // size(600, 600);
}
/*
void draw() {
 background(100);
 for (int i = 0; i < s.length; i++) {
 text(s[i], 300 + i * offset, 300);
 offset =+ 30;
 }
 }
 */
