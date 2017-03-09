/*
* Name: Elmer Rodriguez
* Institution: University of Rochester
* Course: CSC 173: Computation and Formal Systems
* Professor Ferguson
* Assignment1 Part 3
* Purpose: 3. A linked list of structured objects representing “employees.” Employees
*               have a name and an id number. You should have functions to create a
*               new employee, to create a new list of employees, to add an employee to a
*               list (various ways), and to find an employee in a list (again, various ways).
* File: link.c
* version 1.0  01/19/17
*/


//https://www.daniweb.com/programming/software-development/threads/255840/help-with-student-database-using-linked-list
typedef struct{
    int ID; //ID number for the employee
    char* firstName[20]; //first name of the employee
    char* lastName[20]; //last name of the employee

}EMPLOYEE;

//A linked list structured object representing employees
struct roster{
    EMPLOYEE employee;
    struct roster *next;
}

//function to create a new employee
void createNewEmployee(){

    //input information to create add a new employee to the roster
    printf("Enter employee's ID number:\n");
    printf("Enter employee's first name:\n");
    printf("Enter employee's last name:\n");
}


void main(){

}