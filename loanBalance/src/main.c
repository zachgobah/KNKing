#include <stdio.h>

struct Loan {
  double principle;
  double interest;
  double payment;
  int months;
};

double calculateBalance(double *principle, double *interest, double *payment, int *months)
{
  
  for (int i = 1; i < *months + 1; i++)
  {
    *principle = (*principle - *payment);
    printf("Balance remaining after payment %d: $%.2lf\n", i, *principle);
  }
}

int main()
{
//   double *principle = NULL;
//   double *interest = NULL;
//   double *payment = NULL;
//   int *months = NULL;

struct Loan loan;

  printf("Enter amount of loan: ");
  scanf("%lf", &loan.principle);

  printf("Enter interest rate: ");
  scanf("%lf", &loan.interest);

  printf("Enter monthly payment: ");
  scanf("%lf", &loan.payment);

  printf("Months: ");
  scanf("%d", &loan.months);

  calculateBalance(&loan.principle, &loan.interest, &loan.payment, &loan.months);

  return 0;
}