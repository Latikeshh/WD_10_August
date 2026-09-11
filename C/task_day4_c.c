#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
        printf("Number is divisible by 5");
    else
        printf("Number is not divisible by 5");

    return 0;
}


//Program 2: Check largest of two numbers

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a >= b)
        printf("First number is larger or equal");
    else
        printf("Second number is larger");

    return 0;
}


//Program 3: Check whether a year is a leap year

#include <stdio.h>

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("Leap year");
    else
        printf("Not a leap year");

    return 0;
}


//Program 4: Check whether a person is eligible for a driving licence

#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible for driving licence");
    else
        printf("Not eligible");

    return 0;
}


//Program 5: Check whether a number is a multiple of 10

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 10 == 0)
        printf("It is a multiple of 10");
    else
        printf("It is not a multiple of 10");

    return 0;
}



2. IF LADDER //ProgramS
---------------------

//Program 1: Display performance based on marks

#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Excellent");
    else if (marks >= 75)
        printf("Very Good");
    else if (marks >= 60)
        printf("Good");
    else if (marks >= 40)
        printf("Average");
    else
        printf("Needs Improvement");

    return 0;
}


//Program 2: Display ticket price based on age

#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 5)
        printf("Ticket is free");
    else if (age < 18)
        printf("Ticket price is Rs. 50");
    else if (age < 60)
        printf("Ticket price is Rs. 100");
    else
        printf("Ticket price is Rs. 70");

    return 0;
}


//Program 3: Find the type of triangle angle

#include <stdio.h>

int main() {
    int angle;

    printf("Enter angle: ");
    scanf("%d", &angle);

    if (angle < 90)
        printf("Acute angle");
    else if (angle == 90)
        printf("Right angle");
    else if (angle < 180)
        printf("Obtuse angle");
    else
        printf("Invalid angle");

    return 0;
}


//Program 4: Calculate electricity category

#include <stdio.h>

int main() {
    int units;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 100)
        printf("Low usage");
    else if (units <= 200)
        printf("Medium usage");
    else if (units <= 500)
        printf("High usage");
    else
        printf("Very high usage");

    return 0;
}


//Program 5: Display traffic signal instruction

#include <stdio.h>

int main() {
    int signal;

    printf("Enter signal number (1-3): ");
    scanf("%d", &signal);

    if (signal == 1)
        printf("Stop");
    else if (signal == 2)
        printf("Wait");
    else if (signal == 3)
        printf("Go");
    else
        printf("Invalid signal");

    return 0;
}

//Program 1: Check whether a number is positive and greater than 50

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        if (n > 50)
            printf("Positive and greater than 50");
        else
            printf("Positive but not greater than 50");
    } else {
        printf("Number is not positive");
    }

    return 0;
}


//Program 2: Check student attendance and marks

#include <stdio.h>

int main() {
    int attendance, marks;

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    if (attendance >= 75) {
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (marks >= 40)
            printf("Student is eligible and passed");
        else
            printf("Student is eligible but failed");
    } else {
        printf("Student is not eligible due to low attendance");
    }

    return 0;
}


//Program 3: Check number and then check its last digit

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        if (n % 10 == 0)
            printf("Positive number ending with 0");
        else
            printf("Positive number not ending with 0");
    } else {
        printf("Number is zero or negative");
    }

    return 0;
}


//Program 4: Check shopping discount

#include <stdio.h>

int main() {
    int amount;

    printf("Enter shopping amount: ");
    scanf("%d", &amount);

    if (amount >= 1000) {
        if (amount >= 5000)
            printf("You get 20%% discount");
        else
            printf("You get 10%% discount");
    } else {
        printf("No discount");
    }

    return 0;
}


//Program 5: Check exam result and distinction

#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        if (marks >= 80)
            printf("Passed with distinction");
        else
            printf("Passed");
    } else {
        printf("Failed");
    }

    return 0;
}

//Program 1: Select a fruit

#include <stdio.h>
int main() {
    int choice;

    printf("1. Apple\n");
    printf("2. Mango\n");
    printf("3. Banana\n");
    printf("4. Orange\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Apple");
            break;
        case 2:
            printf("You selected Mango");
            break;
        case 3:
            printf("You selected Banana");
            break;
        case 4:
            printf("You selected Orange");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}


//Program 2: Find number of days in a month

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;

        case 2:
            printf("28 or 29 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}


//Program 3: Choose a subject

#include <stdio.h>

int main() {
    int choice;

    printf("1. C //Programming\n");
    printf("2. Java\n");
    printf("3. Python\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected C //Programming");
            break;
        case 2:
            printf("You selected Java");
            break;
        case 3:
            printf("You selected Python");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}


//Program 4: Check size of a shirt

#include <stdio.h>

int main() {
    char size;

    printf("Enter shirt size (S/M/L): ");
    scanf(" %c", &size);

    switch (size) {
        case 'S':
        case 's':
            printf("Small size");
            break;
        case 'M':
        case 'm':
            printf("Medium size");
            break;
        case 'L':
        case 'l':
            printf("Large size");
            break;
        default:
            printf("Invalid size");
    }

    return 0;
}


//Program 5: Select a month season

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number: ");
    scanf("%d", &month);

    switch (month) {
        case 3:
        case 4:
        case 5:
            printf("Summer season");
            break;

        case 6:
        case 7:
        case 8:
        case 9:
            printf("Rainy season");
            break;

        case 10:
        case 11:
        case 12:
        case 1:
        case 2:
            printf("Winter season");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}
