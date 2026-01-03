//WAP to calculate the total income of an employee through various sources:-
//1)Through Organization:-
//Store Employee Name,Id,Salary,Commision,Overtime,number of days he worked 
//and deduct the salary for those days when absent.
//2)Through Contractor:-
//Store Contract id,Name of Project,Duration,set 3 milestones uniformly for 10 days each
//and if the project is delayed by 'n' number of days deduct the project amount for each day.
//Note:- Use 2 Nested Structures.

#include<stdio.h>
struct organization{
        char name[20];
        int id;
        float salary;
        float commission;
        float overtime;
        int days_worked;
        int days_absent;
    }org;
    struct contractor{
        int contract_id;
        char project_name[20];
        int duration;
        float project_amount;
        int working_days;
        int delay_days;
    }con;
    struct employee{
        struct organization org;
        struct contractor con;
        float total_income;
    }emp;
    
int main(){
    struct employee emp;
    printf("Enter Employee Name: ");
    scanf(" %s", emp.org.name);
    printf("Enter Employee ID: ");
    scanf("%d",&emp.org.id);
    printf("Enter Salary: ");
    scanf("%f",&emp.org.salary);
    printf("Enter Commission: ");
    scanf("%f",&emp.org.commission);
    int overtimehours;
    printf("Enter Overtime(hours): ");
    scanf("%f",&emp.org.overtime);
    
    printf("Enter Number of Days Worked: ");
    scanf("%d",&emp.org.days_worked);
    int overtimerate = emp.org.salary/(emp.org.days_worked/24);
    emp.org.overtime=overtimehours*overtimerate;
    printf("Enter Number of Days Absent: ");
    scanf("%d",&emp.org.days_absent);
    printf("Enter Contract ID: ");
    scanf("%d",&emp.con.contract_id);
    printf("Enter Project Name: ");
    scanf(" %s", emp.con.project_name);
    printf("Enter Duration: ");
    scanf("%d",&emp.con.duration);
    printf("Enter Project Amount: ");
    scanf("%f",&emp.con.project_amount);
    printf("Enter working days: ");
    scanf("%d",&emp.con.working_days);
    int i;
    if(emp.con.working_days > emp.con.duration){
        emp.con.delay_days = emp.con.working_days - emp.con.duration;
    } 
    else if (emp.con.working_days < emp.con.duration)
    {
    int total_milestones = 3;
    int milestone_gap = emp.con.working_days / total_milestones;

    for (i = 1; i <= emp.con.working_days; i++) {
        if (i % milestone_gap == 0 && i / milestone_gap <= total_milestones) {
            printf("Milestone %d achieved\n", i / milestone_gap);
        }
    }
    }
    else {
        emp.con.delay_days = 0;
    }
    float org_income = emp.org.salary + emp.org.commission + emp.org.overtime - (emp.org.salary/30)*emp.org.days_absent;
    float con_income = emp.con.project_amount - (emp.con.project_amount/emp.con.duration
)*emp.con.delay_days;
    emp.total_income = org_income + con_income;
    printf("Total Income of Employee %s (ID: %d) is: %.2f\n",emp.org.name,emp.org.id,emp.total_income);
    return 0;
}
