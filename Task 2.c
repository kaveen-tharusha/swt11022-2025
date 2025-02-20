#include <stdio.h>
int main() {
    float whours,prateph,salary;
    printf("Enter Work Hours: ");
    scanf("%f",&whours);
    printf("Enter Pay rate per hour: ");
    scanf("%f",&prateph);

    salary = whours*prateph;
    printf("Salary is = %f.2",salary);
return 0;


}
