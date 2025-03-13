#include <stdio.h>
#include <math.h>
double radi = 3;
int digits_of_pi;
long divisor;

int loop();

int main()
{
  printf("Enter digits of pi: ");
  scanf("%d", &digits_of_pi);
    
    loop();

    divisor = pow(10, digits_of_pi);
    radi = floor(radi * divisor) / divisor;
    printf("%.10f\n", radi);
}

int loop() {
  int i = 10;
  int k = 4;
  long loop_divisor;

  while(i != 0) {
  radi = radi + sin(radi);
  loop_divisor = pow(10, k);
  k++;
  radi = floor(radi * loop_divisor) / loop_divisor;
  i--;
  }
}
