 // write aprogram to check if a number is divisible by 2 or not
//  int i;
//  printf("enter a number");
//  scanf("%d", &i);
//  printf("%d",i % 2 == 0);
//  return 0; 


// are following valid or not
// int a = 8^8
// printf("%d", 8^8);
// return 0;

//if a number is greater than 9 & less than 100 ->true
// int x;
// printf("enter a number:");
// scanf("%d",&x);

// printf("%d",x >= 9 && x <= 100);


// write a program to print the avarage of the 3 numbers.
// #include <stdio.h>
// int main() {
//     // Declare variables to store three numbers
//     float num1, num2, num3;
//     // Prompt user to enter three numbers
//     printf("Enter three numbers separated by spaces: ");
//     scanf("%f %f %f", &num1, &num2, &num3);
//     // Calculate the average
//     float average = (num1 + num2 + num3) / 3;
//     // Display the result
//     printf("The average is: %.2f\n", average);
//     return 0;
// }

//2nd way
// #include <stdio.h>

// int main() {
//     // Declare variables to store three numbers
//     float num1, num2, num3;

//     // Prompt user to enter three numbers
//     printf("Enter the first number: ");
//     scanf("%f", &num1);

//     printf("Enter the second number: ");
//     scanf("%f", &num2);

//     printf("Enter the third number: ");
//     scanf("%f", &num3);

//     // Calculate the average
//     float average = (num1 + num2 + num3) / 3;

//     // Display the result
//     printf("The average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, average);

//     return 0;
// }


// Write a program to check if given character is digit or not.
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char character;
    
//     printf("Enter a character: ");
//     scanf(" %c", &character);

//     printf("The entered character '%c' is %s.\n", character, 
//     isdigit(character) ? "a digit" : "not a digit");

//     return 0;
// }

// Write a program to print the smallest number.
// #include <stdio.h>

// int main() {
//     int num1, num2, num3;

//     printf("Enter three numbers separated by spaces: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     int smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

//     printf("The smallest number is: %d\n", smallest);

//     return 0;
// }
// contional statements
// if else and switch 
// #include<stdio.h>
// int main(){
//     int age;

//     printf("enter age:");
//     scanf("%d" , &age);

//     if(age >= 18)
//     {
//         printf("adult");

//     }
//     else if (age >= 13 && age >16 ){
//         printf("teanager");
//     }
//     else{
//         printf("child");
//     }
//     return 0;
// }

// Ternary operator
// condition ? doSomething if TRUE : doSomething if FALSE;
// #include<stdio.h>
// int main()
// {
//   int age;
//   printf("enter age :");
//   scanf("%d", &age);
//    age >= 18 ? printf("adult\n") : printf("not adult\n");
//    return 0;  
// }
 
 // Switch conditional operators
 /* switch
 switch(number){
    case C1://do something
    break;
    case C2://do something
    break;
    case C3://do something
 }*/

// #include<stdio.h>
// int main(){
//     int day;
//     printf("enter dat(1-7):");
//     scanf("%d",&day);
//     switch(day){
//     case 1: printf("monday\n");
//             break;
//     case 2: printf("tuesday\n");
//             break;
//     case 3: printf("wednesday\n");
//             break ;
//     case 4: printf("tursday\n");
//             break ;
//     case 5: printf("friday\n");
//             break ;

//     case 6: printf("saturday\n");
//             break ;

//     case 7: printf("sunday\n");
//             break ;
//             default : printf("not a vaild day:\n");
//     }
//     return 0;
// }

//nested conditional statement
// #include<stdio.h>
// int main();
// { 
//     int number;
//     printf("enter number");
//     scanf("%d",&number);

//     if(number >= 0)
//     {
//         printf("positive");
        
//         if(number % 2 = 0){
//             printf("even");
//         }
//         else{
//             printf("odd");
//         }
//     }
//     else{
//         printf("negative");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int number;

//     printf("enter number");
//     scanf("%d" , &number);

//     if(number >= 0){
//         printf("positive\n");
//         if(number % 2 == 0){
//             printf("even\n");
//         }
//         else{
//             printf("odd\n");
//         }
//     }
//     else{
//         printf("negative\n");
//     }
//     return 0;
// }

// Write a program to check if a student passed or failed
// marks> 30 is pass and marks < 30 fail
// #include<stdio.h>
// int main (){
//     int marks;

//     printf("enter marks(0-100):");
//      scanf("%d", &marks);
    
//      if(marks >= 0 && marks <= 30){
//          printf("fail");
//      }
//      else if(marks >= 30 && marks <= 100){
//          printf("pass");
//      }
// else{
//     printf("wrong marks");
// }
// marks >= 30 ? printf("pass\n"): printf("fail");

//  return 0;
//  }

//Write a program to give grades to a student
/*marks < 30 is C
30 <= marks < 70 is B
70 <= marks <90 is A
90 <= marks <100 is A+
*/
// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("enter marks (1-100):");
//     scanf("%d",&marks);

//     if(marks < 30){
//         printf("C");}
//     else if(marks <= 30 && marks <70){
//         printf("B");
//     }
//     else if(marks >=70 && marks < 90){
//         printf("A");
//     }
//     else if(marks >= 90 && marks <100){
//         printf("A+");
//     }
//     else{
//         printf("wrong marks");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x = 2;
//     if(x = 0){
//         printf("x is equal to 1");
//     }
//     else {
//         printf("x is not equal to 1");
//     }
//     return 0;
// }

// Write a program to print the character is a upper case and lower case
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter character:-");
//     scanf("%c",&ch);

//     if(ch >= 'A' && ch <= 'Z')
//     {
//         printf("upper case\n");
//     }
//         else if(ch >= 'a' && ch <= 'z')
//         {
//             printf("lower case\n");
//         }
//         else{
//             printf("no eng word");
//         }
//         return 0;
// }

// Write a program to print armstrong number or not
// #include <stdio.h>

// int main() {
//     int number, originalNumber, sum = 0, digit;

//     // Input a number from the user
//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     // Store the original number in a variable
//     originalNumber = number;

//     // Calculate the sum of cubes of each digit
//     while (number > 0) {
//         digit = number % 10;
//         sum += (digit * digit * digit);
//         number /= 10;
//     }

//     // Check if the sum is equal to the original number
//     if (sum == originalNumber)
//         printf("%d is an Armstrong number.\n", originalNumber);
//     else
//         printf("%d is not an Armstrong number.\n", originalNumber);

//     return 0;
// }

// write a program to check if the given number is a natural number.

// loops in c for loop , while loop , do while loop.
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i = 0; i <= 10 ; i++){
//         printf("%d\n",i);
//     }
//     return 0;
// } 

// while 
// #include<stdio.h>
// int main(){
//     int i = 5;
//     while(i <= 10){
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

// print the number 0 to n. n given by user
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n");
//     scanf("%d",&n);
//    int i = 0;
// while(i <= n){
//     printf("%d\n",i);
//     i++;
// }
//     // for(int i = 0; i <= n; i++){
//     //     printf("%d\n",i);
//     // }
//     return 0;
// }

// do while loop
// #include<stdio.h>
// int main(){
//     int i = 5;
//     do{
//         printf("%d\n",i);
//         i--;
//     }
//     while(i>=1);
//     return 0;
// }

// print the sum of natural numbers
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//      int sum = 0;
//      for( int i = 1,j = n; i <= n,j>=1 ; i++,j--)
//      {
//         sum = sum + i;
//      }
//      printf("%d\n",i);
//      printf("sum is %d\n",sum);
   //   for(int i = n; i >= 1; i--){
   //    printf("%d\n",i);
   //   }
   //   return 0;
// }

// another way to write this 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//      int sum = 0;
//      for(int j = n;j >= 1;j--)
//      {
//         sum = sum + j;
//         printf("%d\n",j);
//      }
//      printf("sum is %d\n",sum);
//      return 0;
// }

// Write a program to print table
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
   
//    for(int i = 1; i <= 10 ; i++){
//       printf("%d\n",n*i);
//    }
//    return 0;
// }

// keep taking numbers as input from user until user enter an odd number
// #include<stdio.h>
// int main(){
//    int n;
//     do{
//       printf("enter number");
//       scanf("%d",&n);
//       printf("%d\n",n);

//       if(n % 2 != 0){
//          break;
//       }

//     }while(1);
//     printf("thank you");
    
//     return 0;
// }

// keep taking numbers as input from user until user enter a number which is multiple of 7
// #include<stdio.h>
// int main(){
//    int n;
//     do{
//       printf("enter number");
//       scanf("%d",&n);
//       printf("%d\n",n);

//       if(n % 7 == 0){
//          break;
//       }

//     }while(1);
//     printf("thank you");
    
//     return 0;
// }

// continue statement;
// #include<stdio.h>
// int main(){
//    for(int i=0;i<=5;i++){
//       if(i == 3){
//        continue;
//       }
//       printf("%d\n",i);
//    }
   
//    return 0;
// }

// print all number from 1 to 10 except for 6;
// #include<stdio.h>
// int main(){
//    for(int i=1;i<=10;i++){
//       if(i == 6){//skip
//          continue ;
//       }
//       printf("%d\n",i);
//    }
//    return 0;
// }

// print all the odd numbers from 5 to 50
// #include<stdio.h>
// int main(){
//    for(int i=5;i<=50;i++){
//       if(i % 2 == 0){//skip
//          continue ;
//       }
//       printf("%d\n",i);
//    }
//    return 0;
// }

//print all the even numbers from 5 to 50
// #include<stdio.h>
// int main(){
//    for(int i=5;i<=50;i++){
//       if(i % 2 != 0){//skip
//          continue ;
//       }
//       printf("%d\n",i);
//    }
//    return 0;
// }

// print the factorial of a number n.
// #include<stdio.h>
// int main(){
//    int n;
//    printf("enter number");
//    scanf("%d",&n);
//     int fact = 1;
//     for( int i = 1; i<=n;i++){
//       fact = fact * i;
//     }
//     printf("final factorial is %d\n",fact);
//     return 0;
// }

// print reverse of the table for a number n.
// #include<stdio.h>
// int main(){
//    int n;
//    printf("enter n");
//    scanf("%d",&n);

//    for(int i = 10; i >= 1; i--){
// printf("%d\n",n*i);
//    }
//    return 0;
// }

// calculate the sum of all numbers between 5 to 50(including 5 & 50)
// #include<stdio.h>
// int main(){
//    int sum = 0;
//    for(int i = 5; i <= 50;i++){
//       sum += i;
//    }
//    printf(" sum is:  %d\n",sum);
//    return 0;
// }

// Search on what a "nested loop" is & print this pattern using it.
// *****
// *****
// *****
// *****
// #include <stdio.h>
// int main() {
//     // Using nested loops to print the pattern
//     for (int i = 0; i < 4; i++) {  // Outer loop for rows
//         for (int j = 0; j < 5; j++) {  // Inner loop for columns
//             printf("*");
//         }
//         printf("\n");  // Move to the next line after each row
//     }

//     return 0;
// }


// 2nd way
// #include <stdio.h>

// int main() {
//     for (int i = 0; i < 4; i++) {  // Loop for rows
//         for (int j = 0; j < 5; j++) {  // Loop for columns
//             printf("*");
//         }
//         printf("\n");  // Move to the next line after each row
//     }

//     return 0;
// }


// Write a program to check if a number is prime or not
// Wrtie a program to print prime numbers in a range.

// Function:-
// block of code that performs particular task. take argument->do work->return result
//it can be used multiple times
//increase code reusability
 
//  #include<stdio.h>
//  void printHello(); // declaration/protocol

//   int main() {
//    printHello(); // function call
//    printHello();
//    printHello();
//    return 0;
//   }
//   // function definition
//   void printHello(){
//    printf("Hello word\n");
//   }

// Using function print hello and good bye 
// #include<stdio.h>
// void printHello();
// void printGoodbye();
// int main(){
//        printHello();
//        printGoodbye();
//    return 0;
// }
// void printHello(){
//    printf("Hello\n");
// }
// void printGoodbye(){
//    printf("Goodbye\n");
// }


// write a function to print namasta and banjor
// #include<stdio.h>
// void namashta();
// void bonjour();
// int main(){
//    printf("enter f for french & i for india:");
//    char ch;
//    scanf("%c", &ch);
//    if (ch == 'i'){
//       namashta();
//    }
//    else{
//       bonjour();
//    }
//    return 0;
// }
// void namashta(){
//    printf("namashta");
// }
// void bonjour(){
//    printf("bonjour");
// }

// using function print sum of 2 numbers
// #include<stdio.h>
// int sum(int a, int b);
 
//  int main(){
//    int a , b;
//    printf("enter first number");
//    scanf("%d",&a);
//    printf("enter second number");
//    scanf("%d",&b);
   
// int s = sum(a , b);
// printf("sum is : %d\n",s);
//    return 0;
//  }
//  int sum(int x, int y){
//    return x + y;
//  }

// using function print table 
// #include<stdio.h>
// void printTable(int n);

// int main(){
//    int n;
//    printf("enter number : ");
//    scanf("%d",&n);

//    printTable(n); //argument/actual parameter
//    return 0;
// }
// void printTable(int n){ // parameter /formal parameter
// for(int i = 1 ; i <= 10 ; i++){
//    printf("%d\n",i*n);
// }
// }

// Use library functions to calculate the square of a number given by user
// #include<stdio.h>
// #include<math.h>

// void calculatePrice(float value);

// int main(){
//    int n = 4;
//    printf("%f", pow(n, 2));
//    return 0;
// }

// Write function to calculate area of a sqare, a circle & a rectangle.
// #include<stdio.h>
// #include<math.h>

// float squareArea(float side);
// float circleArea(float rad);
// float rectangleArea(float a, float b);
 
//  int main(){
//    float a = 5.0;
//    float b = 10.0;
//    float rad = 6.0;
//    printf("area is : %f\n", rectangleArea(a,b));
//    printf("area is : %f\n",circleArea(rad));
//    return 0;
//  }
//  float sqareArea(float side){
//    return side *side;
//  }
//  float circleArea(float rad){
//    return 3.14*rad*rad;
//  }
//  float rectangleArea(float a, float b){
//    return a * b;
//  }

// recursion 
// #include<stdio.h>
// void printHW(int count);
// int main(){
//    printHW(5);
//    return 0;
// }
// // recursive function
// void printHW(int count){
//    if(count == 0){
//       return;
//    }
//    printf("Hello World\n");
//    printHW(count-1);
// }

// sum of first n natural numbers using recursion
// #include<stdio.h>
// int sum(int n);
// int main(){
//    printf("sum is : %d", sum(5));
//    return 0;
// }
// // recursive function
// int sum(int n){
//    if(n == 1){
//       return 1;
//    }
//    int sumNm1 = sum(n-1); // sum of 1 to n
//    int sumN = sumNm1 +n;
//    return sumN;
// }

// Factorial of n.
// #include<stdio.h>
// int fact(int n);

// int main(){
//    printf("factorial is : %d",fact(5));
//    return 0;
// }
// int fact(int n){
//    if(n == 0){
//       return 1;
//    }
//    int factNm1 = fact(n-1);
//    int factN = factNm1 * n;
//    return factN;
// }

// Write a function to convert celsius to fahrenheit,(f = (c * 0.18) + 32)
// #include<stdio.h>

// float convertTemp(float celsius);

// int main() {
//    float far = convertTemp(0);
//    printf("far : %f",far);
//    return 0;
// }
// float convertTemp(float celsius){
//    float far = celsius *(9/5) + 32;
//    return far;
// }

// Write a function to calculate percentage of a student from Marks in Science,Math & Sanskrit.
// #include<stdio.h>
// int calcPercentage(int science, int math , int sanskrit);
//  int main(){
//    int sc = 98;
//    int math = 95;
//    int sanskrit = 99;

//    printf("percentage is : %d", calcPercentage(sc, math, sanskrit));
//    return 0;
//  }
//  int calcPercentage(int science, int math, int sanskrit){
//    return ((science + math + sanskrit) / 3);
//  }

// Write a function to print n terms of the fibonacci sequence
// #include<stdio.h>
// int fib(int n);

// int main(){
//    fib(6);
//    return 0;
// }
// int fib(int n){
//    if(n == 0){
//       return 0;
//    }
//    if(n == 1){
//       return 1;
//    }
//    int fibNm1 = fib(n - 1);
//    int fibNm2 = fib(n - 2);
//    int fibN = fibNm1 + fibNm2;
//    printf("fib of %d is : %d\n",n,fibN);
//    return fibN;
// }

// pointer  address
// #include<stdio.h>

// int main(){
//    int age = 22;
//    int *ptr = &age;
//    int _age = *ptr;
//   // printf("%d\n", _age);
// //   printf("%p\n",&age);
// printf("%u\n",&age);
// printf("%u\n",ptr);
// printf("%u\n",&ptr);
//    return 0;
// }

// pointer value print
// #include<stdio.h>
// int main(){
//    int age = 22;
//    int *ptr = &age;
//    int _age = *ptr;

//    printf("%d\n",age);
//    printf("%d\n",*ptr);
//    printf("%d\n",*(&age));
//    return 0;
// }


// find output
// #include<stdio.h>
// int main(){
//    int *ptr;
//    int x;

//    ptr = &x;
//    *ptr = 0;

//    printf("x = %d\n",x);
//    printf("*ptr = %d\n",*ptr);

//    *ptr += 5;
//    printf("x = %d\n",x);
//    printf(" *ptr = %d\n", *ptr);

//    (*ptr)++;
//    printf("x = %d\n",x);
//    printf(" *ptr = %d\n",*ptr);

//    return 0;

// }

// print the value of 'i' from its pointer to pointer
#include<stdio.h>
int main(){
   int i = 5;
   int *ptr = &i;
   int **pptr = &ptr;

   printf("%d\n",**pptr);
   return 0;
}







 







