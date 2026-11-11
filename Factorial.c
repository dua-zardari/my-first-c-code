#include ‹stdio.h›
int main(){
  int num, i;
  int fact = 1;

  printf("Enter a number: ");
  scanf("%d", &num);

  for(i = 1; i ‹= num; i++;
    {
      fact = fact * 1;
    }
  printf("factorial = %d", fact);
  return 0;
}
