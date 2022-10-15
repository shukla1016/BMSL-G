  							L&G BANK

Product : Banking Management System

Services Offered :
1. Create a new account.
2. Login to your account.
3. Deposit Money into your account.
4. Withdraw Money from your account.
5. Check Balance of your account.
6. Account Details
7. Log out
8. Deactivate your account.
9. Take Loan from Bank.

Class Design:
Loan ------->Services--------> Login -------> Main
Address----->New User-----------------------> Main

Storage:
Linked List and Files(bank.txt and loan.txt).

Detailed Description of Services:

Main Menu has 2 options - 1. New User Registration (Create new Account).
			  2. Log In (Existing User Serivces)

1. Create Account - To Create a new account User have to provide some essential information as-
		    	1. Name
			2. Address
			3. User have to create a unique Id, using which user can log in to the system for further operations.
			4. User have to create a PIN, using which user can log in to the system for further operations.
			5. Phone Number
			6. Adhaar Card Number
			7. PAN
			8. Initial Deposit

2. Login - To login into his/her account User have to enter the unique Id, which was created at the time of registration. Alongwith Id user also has to enter the correct PIN, which 
           he/she has created at time of registration.
 
After Logging in successfully, User will be displayed a menu offering all the services defined above, he/she can choose from the list.

3. Deposit - User has to enter the amount he wants to deposit and that amount will be added to his total balance.

4. Withdraw - User has to enter the amount he wants to withdraw and that amount will be deducted from his total balance, if user does not have sufficient funds, a message will be displayed
	      regarding the same.

5. Check Balance - User Account Balance will be displayed.

6. Account Details - All the User information alongwith account number, IFSC code and bank name will be dispalyed on the screen.

7. Log Out - User session will be ended and he will be redirected to main window.

8. Deactivate - User details will be deleted from Bank's Database and his all operations will be freezed.

9. Loan : To take loan from Bank, User must have account in Bank. His/Her limit will be 10 times his current balance, rate of interest is 8.5% and Duration can only be in Years. Interest 
	  will be calculated using Simple Interest. On choosing this option user will be displayed a menu having 4 options -
	  1) Apply for a New Loan.
	  2) Repay Loan
	  3) Loan Details
	  4) Return to previous Menu.
	  On issuing a loan, User will be assigned a loan account number which he/she can see in loan details section.	
		Detailed Description of Loan Services :
		1. Apply Loan : User has to enter the amount he wants to borrow, a check will be made whether he is eligible for that amount or not, if yes he would be ask to enter time
				period, else loan will be rejected, after successful completion of loan, user will be displayed all the details of his loan including interest and loan 
				account number.
		2. Repay Loan : User will be asked to enter the amount he wants to repay and that amount will be deduced from left loan amount.
		3. Loan Details : User will be displayed all the details of his loan including interest, loan account number, leftover amount and paid amount.
		4. Return : User will be re-directed to services menu. 

  

