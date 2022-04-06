#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float v1;
  float v2;
  char opr;
  float ans;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &v1, &opr, & v2);

  switch(opr)
    {
    case '/': ans = v1/v2;
      break;
    case '*': ans = v1*v2;
      break;
    case '+': ans = v1+v2;
      break;
    case '-': ans = v1-v2;
      break;
    case '^': ans = pow(v1,v2);
      break;
    case ' ': ans = sqrt(v2);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",v1,opr, v2, ans);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}