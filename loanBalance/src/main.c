#include <stdio.h>

struct loan {
  double principle;
  double interest;
  double payment;
  int months;
};

double calculateBalance(double *principle, double *interest, double *payment, int *months)
{
  
  for (int i = 0; i < *months; i++)
  {
    *principle = (*principle - *payment);
    printf("Balance remaining after month %d: $%.2lf\n", i, *principle);
  }
}

int main()
{
  double *principle = NULL;
  double *interest = NULL;
  double *payment = NULL;
  int *months = NULL;

  printf("Enter amount of loan: ");
  scanf("%lf", &principle);

  printf("Enter interest rate: ");
  scanf("%lf", &interest);

  printf("Enter monthly payment: ");
  scanf("%lf", &payment);

  printf("Months: ");
  scanf("%d", &months);

  calculateBalance(principle, interest, payment, months);
    // printf("%lf\n%lf\n%lf\n%lf\n", prin, intr, py, loan.principle);

  return 0;
}