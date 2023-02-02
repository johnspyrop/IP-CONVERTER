#include <stdio.h>
#include <math.h>

int bin2d();

int dec2b();

int main()
{ 
  printf("##############################################\n");
  printf("#              IP CONVERTER V5.1             #\n");
  printf("#                DEVELOPED BY:               #\n");
  printf("#             GIANNIS SPYROPOYLOS            #\n");
  printf("#               DIMITRIS SVARNAS             #\n");
  printf("#                 NIKOS ZOTOS                #\n");
  printf("#            IEK AKMI PLHR-A6 2023           #\n");
  printf("##############################################\n\n");



  int option;

  do
  {
    printf("Press 1 to convert your IP from binary to decimal.\n");
    printf("Press 2 to convert your IP from decimal to binary.\n:");
    scanf("%d", &option);

    switch(option)
    {
      case 1:
          printf("Enter the first part of your IP:");
          bin2d();
          break;

      case 2:
          printf("Enter the first part of your IP:");
          dec2b();
          break;

      default:
          printf("Wrong Option. Please restart the program.");
    }
  }
  while(option < 1 && option > 2);



  return 0;
}

int dec2b()
{
  int num1, num2, num3, num4;
  int bin1 = 0, bin2 = 0, bin3 = 0, bin4 = 0;
  int rem1, rem2, rem3, rem4;
  int i1 = 1, i2 = 1, i3 = 1, i4 = 1;

  scanf("%d", &num1);
  while (num1!=0)
  {
    rem1 = num1 % 2;
    num1 /= 2;
    bin1 += rem1 * i1;
    i1 *= 10;
  }

  printf("Enter the second part of your IP:");
  scanf("%d", &num2);
  while (num2!=0)
  {
    rem2 = num2 % 2;
    num2 /= 2;
    bin2 += rem2 * i2;
    i2 *= 10;
  }

  printf("Enter the third part of your IP:");
  scanf("%d", &num3);
  while (num3!=0)
  {
    rem3 = num3 % 2;
    num3 /= 2;
    bin3 += rem3 * i3;
    i3 *= 10;
  }

  printf("Enter the last part of your IP:");
  scanf("%d", &num4);
  while (num4!=0)
  {
    rem4 = num4 % 2;
    num4 /= 2;
    bin4 += rem4 * i4;
    i4 *= 10;
  }

  printf("Your converted IP is:%d.%d.%d.%d", bin1, bin2, bin3, bin4);
  return 0;
}

int bin2d()
{
  long long n1, n2, n3, n4;
  int dec1 = 0, dec2 = 0, dec3 = 0, dec4 = 0;
  int rem1, rem2, rem3, rem4;
  int j1 = 0, j2 = 0, j3 = 0, j4 = 0;
  
  scanf("%lld", &n1);
  while (n1!=0) 
  {
    rem1 = n1 % 10;
    n1 /= 10;
    dec1 += rem1 * pow(2, j1);
    ++j1;
  }
  
  printf("Enter the second part of your IP:");
  scanf("%lld", &n2);
  while (n2!=0) 
  {
    rem2 = n2 % 10;
    n2 /= 10;
    dec2 += rem2 * pow(2, j2);
    ++j2;
  }
  
  printf("Enter the third part of your IP:");
  scanf("%lld", &n3);
  while (n3!=0) 
  {
    rem3 = n3 % 10;
    n3 /= 10;
    dec3 += rem3 * pow(2, j3);
    ++j3;
  }
  
  printf("Enter the last part of your IP:");
  scanf("%lld", &n4);
  while (n4!=0) 
  {
    rem4 = n4 % 10;
    n4 /= 10;
    dec4 += rem4 * pow(2, j4);
    ++j4;
  }
  
  printf("Your converted IP is:%d.%d.%d.%d", dec1, dec2, dec3, dec4);
  
  return 0;
}
