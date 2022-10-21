# Question 1: (A)
   You are asked to write a program for children trying to learn the multiplication table.
   The user is asked for the number to be multiplied and the multiplication value with numbers from 1 to 9 is asked.
   When the user gives a wrong answer, the correct answer is shown and the user is asked whether to continue or not.
   The same multiplication table continues to be prompted until the user enters the character "n / N".
   The number entered by the user must be greater than 0.
   If a number less than 0 is entered, the message "Number must be greater than zero" is given and it is possible to enter it again.
   
   Sample Output:
   
    Enter number: 4 
    4 * 1 = 4
    4 * 2 = 8
    4 * 3 = 12
    4 * 4 = 15
    Wrong answer ...
    Correct answer: 4 * 4 = 16
    Would you like to continue? (y / n): y 4 * 5 = 20
    4 * 6 = 24
    4 * 7 = 29
    Wrong answer ...
    Correct answer: 4 * 7 = 28
    Would you like to continue? (y / n): n


# Question 2: (B)
   Write a game of guessing a number held between the numbers 1-10.
   The flow diagram of the game is given below.
   If the predicted value read from the user is greater than the number kept,
   instruct the user to enter a smaller number by giving a "Smaller" message.
   Similarly, if the predicted number value is less than the number kept, give the message "Greater than".
   Repeat the process of getting predictions from the user until the user finds the number kept.
   When the number is guessed correctly, show how many times it is found with a congratulatory message as shown in the sample printout.
   
   <img width="660" alt="lab1ss" src="https://user-images.githubusercontent.com/93546762/197191918-912b332c-c918-46fe-8987-45180f8a235e.png">
   
   Sample Output:
   
    We kept a number between 1-10. Can you guess the number?
    Your prediction:3
    Greater
    Your predictoin:5
    Correct Guess! You find it on the 2. try.
