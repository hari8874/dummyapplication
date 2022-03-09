#ifndef INCLUDE_FACTORIAL_H_
#define INCLUDE_FACTORIAL_H_
int factorial(int n)
{
  int result=1;
  for(int i=1;i<=n;i++)
  {
    result *=i;
  }
  return result;
}
#endif
