#include <stdio.h>

struct Loan {
  double principle;
  double interest;
  double payment;
  int months;
};

int calculateMonths(double *principle, double *interest, double *payment)
{ 
  int months = 0 ;
    for (int i = 1; i < *principle; i++){
      *principle = ( ( *principle + ( *principle * ( *interest / 100 ) ) / 12 ));
      *principle = ( *principle - *payment );
      months++;
    }
    return months;
}

int main()
{

struct Loan loan;

  printf("Enter amount of loan: ");
  scanf("%lf", &loan.principle);

  printf("Enter interest rate: ");
  scanf("%lf", &loan.interest);

  printf("Enter monthly payment: ");
  scanf("%lf", &loan.payment);

  loan.months = calculateMonths(&loan.principle, &loan.interest, &loan.payment);

  printf("It will take you %d months to pay this loan off.\n", loan.months);

  return 0;
}