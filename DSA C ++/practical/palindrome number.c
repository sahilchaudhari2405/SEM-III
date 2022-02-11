#include <stdio.h>
#include<conio.h>
int reverseDigits(int num)
{
	int rev_f=0;
  int temp=num;
	while (temp!=0) {
	  int s=temp%10;
      rev_f=rev_f*10+s;
      temp=temp/10;
	}
	return rev_f;
}
void check_isPalindrome(int n)
{
  int rev=reverseDigits(n);
  if(rev==n){
      printf("it's a palindrome number!!\n");
  }
  else{
      printf("it's not palindrome number\n");
  }
}

/*Driver program to test reversDigits*/
int main()
{
	int n;
    scanf("%d",&n);
    check_isPalindrome(n);
	return 0;
}
