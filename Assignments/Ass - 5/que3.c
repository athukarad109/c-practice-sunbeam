// 3. Write a program to accept Employee Id , Department No,
// Designation from user and display output with reference to following
// tables.(Use switch case)
                    // DeptNo   Dept Name     DsgnCode    Designation
                    // 10       Marketing     ‘M’         Manager
                    // 20       Management    ‘S’         Supervisor
                    // 30       Sales         ‘s’         Security Officer
                    // 40       Designing     ‘C’         Clerk
// Example:
// If input given is
// Employee Id : 101
// Dept No : 30
// Designation Code : M
// Then output should be:
// Employee with employee id 101 is working in "Sales"
// department as “Manager".

#include<stdio.h>

int main()
{
    printf("Enter EmpID, Dept No and Designation code : ");
    int emp_id, dept_no;
    char des_code;
    scanf("%d %d", &emp_id, & dept_no);
    scanf("%c", &des_code);

    return 0;
}
