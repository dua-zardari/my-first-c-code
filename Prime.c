#include ‹stdio.h›
using namespace std;

int main()
{
  int num, i;
bool isPrime = true;
count ‹‹ "Enter a number: ";
  cin ›› num;

if (num‹= 1){
isPrime = false;
}
else
{
for (i = 2; i ‹= num / 2; i++)
{
if (num % i == 0)
{
isPrime = false; break;
}
}
}
if (isPrime)
{
  count ‹‹ num ‹‹ "is a Prime number";
}
else
{
count ‹‹ num ‹‹ "is not a Prime number";;
}
  retunr 0;
}
