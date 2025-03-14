#include <stdio.h>
#include <math.h>
double radi = 2.1;
int digits_of_pi;
long loop_divisor = 3;
float log_num = 3;
float multi_k;
int i = 0;
int math_multi = 100;
int math_div = 10;
int math_div_outer = 10;

int loop();

int main()
{
  printf("Enter digits of pi: ");
  scanf("%d", &digits_of_pi);
    
    loop();
  
    printf("%.*f\n", digits_of_pi, radi);
}

int loop() {
  int math(int i);
  long new_divisor = pow(10, 2);

  while(i < 4) {
  radi = radi + sin(radi);
  log_num = loop_divisor;
   if(1 < i < 4) {
     math(i);
     loop_divisor = floor(loop_divisor * multi_k);
        if(loop_divisor > 275) {
          loop_divisor = 277;
      }
      new_divisor = pow(10, loop_divisor);
    }

  radi = floor(radi * new_divisor) / new_divisor;
  i++;
  }
}


int math(int i) {
  switch(i) {
    case 1: {math_multi = pow(math_multi, .5);
              break;}

    case 2: {math_div = math_div * ((10*10)/10);
              if(math_div > 100) {
                math_div = 100;
      }
              math_multi = pow(math_multi, 3);
              math_div_outer = pow(math_div_outer, 3);
    }
  }

  log_num = (3.96*((pow(10, -5)*pow(log_num, 3)))) + (pow(log_num, 2)*.01579) - (.9251*log_num) + 12.6321;

  multi_k = 3 +(floor(((log(loop_divisor)/log(log_num))/math_div)*math_multi)/math_div_outer);

}
