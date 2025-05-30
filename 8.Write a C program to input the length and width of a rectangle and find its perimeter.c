//Write a C program to input the length and width of a rectangle and find its perimeter.
#include<stdio.h>
void main()
{
	int length,width,rectangle,perimeter;
	printf("enter the length:");
	scanf("%d",&length);
	
	printf("enter the width:");
	scanf("%d",&width);
	 
	rectangle=length+width;
	perimeter=2*rectangle;
	
	printf("rectangle is %d \n and perimeter is %d \n",rectangle,perimeter);
}