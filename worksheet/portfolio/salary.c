
#include <stdio.h>
#include <string.h>

int main() {
  float salary = 36250.0;
  float ni_rate = 8.0;
  float tax_rate = 15.0;

  // variables to hold contributions
  float ni_contribution;
  float tax_contribution;
  float salary_after_ni;
  float take_home;

  // step 1 : Calcualte nation insurance contribution
  ni_contribution = salary * (ni_rate / 100.0);

  // step 2 : calculate salary after NI deduction
  salary_after_ni = salary - ni_contribution;

  // step 3 - Calcualte taxable amoutn (only above 12500)
  float taxable_amount = salary_after_ni - 12500.0;

  if (taxable_amount < 0) {
    taxable_amount = 0; // no tax if under 12500
  }

  // step 4 : calculate tax contribution
  tax_contribution = taxable_amount * (tax_rate / 100.0);

  // step 5 : calculate take home salary
  take_home = salary_after_ni - tax_contribution;

  // step 6 : Print results with 2 decimal places
  printf("National Insurance contribution : %.2f\n", ni_contribution);
  printf("Tax contribution : %.2f\n", tax_contribution);
  printf("Take home salary : %.2f\n", take_home);

  return 0;
}
