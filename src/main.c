#include <stdio.h>

int main() {
  int a[5];
  int n;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

int c0=0, c1=0, c2=0, c3=0, c4=0;
int count;

for (int i=0;i<n;i++){
count = 0;
c0++;
c1++;
c2++;
c3++;
c4++;

if (c0==a[0]){
    printf ("0");
    c0=0;
}
else
    count ++;

if (c1==a[1]){
    printf ("1");
    c1=0;
}
else
    count ++;

if (c2==a[2]){
    printf ("2");
    c2=0;
}
else
    count ++;

if (c3==a[3]){
    printf ("3");
    c3=0;
}
else
    count ++;

if (c4==a[4]){
    printf ("4");
    c4=0;
}
else
    count ++;

if (count == 5){
    printf ("-");
    printf("\n");
}
else
    printf("\n");
}

return 0;
}
