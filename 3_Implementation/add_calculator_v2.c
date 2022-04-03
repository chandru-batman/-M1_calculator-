#include <stdio.h>

int add_calculator(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}

int sub_calculator(int n1, int n2)
{
    int sum = n1 - n2;
    return sum;
}


int multiply_calculator(int n1, int n2)
{
    int sum = n1 * n2;
    return sum;
}

int remanider_calculator(int n1, int n2)
{
    int result = n1 % n2;
    return result;
}



int power_calculator(int n1, int n2)
{
    int sum = (n1 * n2);
    return sum;
} 



void test_add_calculator()
{
    if(5 == add_calculator(2, 3))
        printf("add function is working and get the expected output\n");
    else
        printf("add function is not  workking\n");
    
}


void test_sub_calculator()
{
    if(4 == sub_calculator(6, 2))
        printf("sub function is working and get the expected output\n");
    else
        printf("sub function is not  workking\n");
    
    
}


void test_multiply_calculator()
{
    if(12 == multiply_calculator(2, 6))
        printf("multiply function is worksing and get the expected output \n");
    else
        printf("multiply function is not  workking\n");
    
}

void test_remanider_calculator()
{


    if(0 == remanider_calculator(10, 2))
        printf("remanider function is working and get the expected output\n");
    else
        printf("remanider function is not  workking\n");
    
}


void test_power__calculator()
{
    if(6 == power_calculator(2, 3))
        printf("power function is working and get the expected output\n");
    else
        printf("power function is not  workking\n");
    
}



int main()
{
    test_add_calculator();
    test_sub_calculator();
    test_multiply_calculator();
    test_remanider_calculator();
    test_power__calculator();
    
    return 0;
}

