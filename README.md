

// the solution of question 1 
// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as

 #include <bits/stdc++.h> 

using namespace std; 
 
// Function to calculate the 
// salary of the person 

int computeSalary(int basic, 

                char grade) 
{ 

    int allowance; 

    double hra, da, pf; 
 

    hra = 0.2 * basic; 

    da = 0.5 * basic; 

    pf = 0.11 * basic; 
 

    // Condition to compute the 

    // allowance for the person 

    if (grade == 'A') { 

        allowance = 1700; 

    } 

    else if (grade == 'B') { 

        allowance = 1500; 

    } 

    else { 

        allowance = 1300; 

    } 

    int gross; 
 

    // Calculate gross salary 

    gross = round(basic + hra + da + allowance - pf); 

    return gross; 
} 
 
// Driver Code 

int main() 
{ 

    int basic = 10000; 

    char grade = 'A'; 
 

    cout << computeSalary(basic, grade); 
} 
