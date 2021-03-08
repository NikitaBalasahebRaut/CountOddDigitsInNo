//program to calculate the number of odd digits in given number

#include<stdio.h>

int CountOddDigits(int iValue)
{
  int iCnt = 0;
  int iDigit = 0;
  
  while(iValue != 0)
  {
    iDigit = iValue % 10;
	
	if((iDigit % 2) !=0)
	{
	   iCnt++;
	}
    iValue = iValue / 10;
  }
  return iCnt;
}

int main()
{
 int iNo = 0;
 int iRet = 0;
 
 printf("Enter The Number \n");
 scanf("%d",&iNo);
 
 iRet = CountOddDigits(iNo);
 printf("No of digits are : %d",iRet);
 
return 0;
}

/*
output

Enter The Number
1278
No of digits are : 2
D:\ProgramTopicWise\LB\ProblemsOnDigits\CountOddDigits>myexe
Enter The Number
45528
No of digits are : 2
D:\ProgramTopicWise\LB\ProblemsOnDigits\CountOddDigits>myexe
Enter The Number
45228
No of digits are : 1

*/