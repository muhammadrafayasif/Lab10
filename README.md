# **TEAM ROLES**
- Haris Zamir (CT-24125) Section C – **Document Specialist**
- Muhammad Rafay (CT-24141) Section C – **Version Control Specialist**
- Syed Muhammad Aqib (CT-150) Section C – **Coder**
# **CODE DOCUMENTATION**
- **#include <stdio.h>:** For input and output operations.
- **#include <stdlib.h>:** For functions like atoi to convert strings to integers.
- **#include <Windows.h>**: For Sleep function to pause execution temporarily.
- **int main () :** Execution of program starts in main function
- **char num1[10]:** To input the first number as a string.
- **char num2[10]:** To input the second number as a string.
- **char option:** To input the user's choice.
- **while(1):** Loops the program until the user exits by selecting option 5
- **system("cls"):** Clears the screen at the start of each iteration.
- **printf("choose an option (1,2,3,4,5): \n1.add\n2.subtract\n3.multiply \n4.divide\n5.exit\n"); :** Displays menu of mathematical operations for user to choose from
- **scanf("%c", &option):**  Inputs the user's choice.
- **if(option!='1'&&option!='2'&&option!='3'&&option!='4'&&option!='5'){ printf("choose 1,2,3,4 or 5"); Sleep(2000); continue; } :** If the choice is not 1, 2, 3, 4, or 5, it asks the user to enter a valid option and restarts the loop after a 2000 millisecond (2 second) delay 
- **else if(option=='5'){ break; } :** If the user enters 5, the loop exits using break
- **do{ printf("Enter first number: "); scanf("%s",num1); } while(atoi(num1)==0); do{ printf("Enter second number: "); scanf("%s",num2); } :** Inputs num1 and num 2 as strings. atoi(num1)==0) asks user to "Enter first/second number" again, if input is invalid
- **switch(option){ case '1': printf("%d\n",atoi(num1)+atoi(num2)); break; case '2': printf("%d\n",atoi(num1)-atoi(num2)); break; case '3': printf("%d\n",atoi(num1)\*atoi(num2)); break; case '4': printf("%d\n",atoi(num1)/atoi(num2)); break; } :*** 

  **'1'**: Adds num1 and num2 and prints the result.

  **'2'**: Subtracts num2 from num1 and prints the result.

  **'3'**: Multiplies num1 and num2 and prints the result.

  **'4'**: Divides num1 by num2 and prints the result.

- **Sleep(2000):** Pauses for 2 seconds before restarting the loop.
- **return 0 :**  End of the program.
# **GIT COMMANDS**
- **git init:** Initializes a local git repository
- **git config –global user.name “muhammadrafayasif”:** Tells git your username to authorize your commits
- **git config –global user.email “muhammadrafay3561@gmail.com”:** Another step to git authorization
- **git add calculator.c:** Adds the calculator file to the local git repository
- **git add README.md**: Adds the README file to the local git repository
- **git branch -M main:** Creates a new main branch which we will push our files into
- **git remote add origin <https://github.com/muhammadrafayasif/Lab10.git>:** Connects us to the remote repository onto which we will transfer our files
- **git commit -m "Added README file (By Haris Zamir) and Calculator program (By Syed Muhammad Aqib)":** Successfully commits both files to git, now we can return to this commit whenever we want to
- **git push -u** **origin main:** Pushes all of the added files into the remote repository 
