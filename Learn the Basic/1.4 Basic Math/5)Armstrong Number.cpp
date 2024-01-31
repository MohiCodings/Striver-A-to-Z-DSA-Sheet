Problem statement
You are given an integer 'n'.



Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.



Note:
An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


Example:
Input: 'n' = 1634

Output: true

Explanation:
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634




  bool checkArmstrong(int n){
	//Write your code 
	

	int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}
