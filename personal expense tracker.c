#include <stdio.h>
#define categories 3
#define days 7

int expenses[categories][days];
int total[categories];
int grand_total = 0;
int i,j;
void input_expenses() 
{
	
    for (i = 0; i < categories; i++) 
    {
        printf("Enter expenses for category %d:\n", i + 1);
        for (j = 0; j< days; j++) 
        {
            printf(" Day %d: ", j + 1);
            scanf("%d", &expenses[i][j]);
        }
    }
}
void calculate_totals()
{
    for (i = 0; i <categories; i++)
    {
        total[i] = 0;
        for (j= 0; j < days; j++)
        {
            total[i]= total[i]+expenses[i][j];
        }
        grand_total += total[i];
    }
}
void display_totals() 
{
    for (i = 0;i < categories; i++) 
    {
        printf("Total expenses for category %d: %d\n", i + 1, total[i]);
    }
    printf("Grand total expenses: %d\n", grand_total);
}
void Average_per_category()
{
    for (i = 0;i< categories; i++)
    {
        printf("Average expenses for category %d : %d\n" , i + 1 , total[i] / days);
    }
}
void Max_expense_category()
{
    int max = total[0];
    int max_index = 0;
    for (i = 1; i < categories; i++)
    {
        if (total[i] > max)
        {
            max = total[i];
            max_index = i;
        }
    }
    printf("Category with maximum expenses: %d with amount %d\n", max_index + 1, max);
}
void weekly_expense_report()
{
    printf("Weekly Expense Report:\n");
    for (j = 0; j < days; j++)
    {
        int daily_total = 0;
        for (i = 0; i < categories; i++)
        {
            daily_total += expenses[i][j];
        }
        printf(" Day %d: Total Expenses = %d\n", j + 1, daily_total);
    }
}
int main() 
{
    printf("Personal Expense Tracker\n");
    printf("Input expenses for food, travel, bills over a week.\n");
    printf("Categories: 1. Food 2. Travel 3. Bills\n");
    input_expenses();
    calculate_totals();
    display_totals();
    Average_per_category();
    Max_expense_category();
    weekly_expense_report();
    return 0;
}
