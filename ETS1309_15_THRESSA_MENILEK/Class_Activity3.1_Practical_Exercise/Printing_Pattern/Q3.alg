Pseudocode:

1, Declare variables choice1, choice2, choice3, status, startingpoint1, startingpoint2 as integers Set startingpoint1 to 'a' and startingpoint2 to 1

2, Start a do-while loop Display the pattern menu options ask the user to enter the number of their choice store the input into choice1

a, If choice1 is 1
    Display the options for asterisk patterns
    ask the user to enter the number of their choice
    Read the input into choice3
    ask the user to enter the number of rows
    Read the input into row

   - Based on choice3, execute the corresponding pattern code using switch-case
      
b, Else if choice1 is 2
    Display the options for numeric and alphabetic patterns
    ask the user to enter the number of their choice
    store the input into choice2
    ask the user to enter the number of rows
    store the input into row

   - Based on choice2, execute the corresponding pattern code using switch-case
       
c, Else if choice1 is 3
    exit the program

d, Else
    Display an error message for an invalid choice
7, Prompt the user to enter 0 to leave or any other single digit to go back to the main menu Read the input into status

8, End the do-while loop

9, End the main function
