/*
Write a C++ program to define a class to represent a Matrix. Write constructor to initialize
all matrix values to 0. Include member functions to perform the following tasks:
1. To read the Matrix
2. To display the Matrix
3. To add two matrix.
4. Subtract one matrix from other
5. Matrix Multiplication*/


#include<iostream>

using namespace std;
int row,col,mat1[10][10],mat2[10][10];
class Matrix
{
public:
int i,j,k,sum[10][10],pro[10][10],diff[10][10];
Matrix()
{
mat1[10][10]=0;
mat2[10][10]=0;
sum[10][10]=0;
pro[10][10]=0;
diff[10][10]=0;
}
void read();
void display(int [10][10],int,int);
void add();
void mul();
void sub();
};

void Matrix::read()
{
cout<<"Enter the number of rows and columns of matrix\n";
cin>>row>>col;

cout<<"Enter the values of matrix1\n";
for(i=1;i<=row;i++)
{
	for(j=1;j<=col;j++)
	{
	cin>>mat1[i][j];
	}
}
cout<<"Enter values of matrix2\n";
for(i=1;i<=row;i++)
{
	for(j=1;j<=col;j++)
	{
	cin>>mat2[i][j];
	}
}
}

void Matrix::display(int mat[10][10],int,int)
{
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		cout<<mat1[i][j]<<"\t";
		}
	cout<<"\n";
	}
}
void Matrix::add()
{

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		sum[i][j]=mat1[i][j] + mat2[i][j];
		}
	}
cout<<"\nThe sum of two Matrices: \n";
display(sum,row,col);
}

void Matrix::mul()
{

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		pro[i][j]==0;
		for(k=1;k<=col;k++)
			{
			pro[i][j]=pro[i][j] + (mat1[i][k] * mat2[k][j]);
			}
		}
	}
cout<<"\nThe multiplication of two Matrices: \n";
display(pro,row,col);
}

void Matrix::sub()
{

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		diff[i][j]=mat1[i][j] - mat2[i][j];
		}
	}
cout<<"\nThe subtraction of two Matrices: \n";
display(diff,row,col);
}

int main()
{
int ch=0;
Matrix s;

while (ch!=6)
{
	cout<<"*********Matrix Opertions************\n";
	cout<<"\n1.Read the Matrix \n 2.Display the Matrix \n 3.Addition of Matrices \n 4.Multiplication of Matrices \n5. Subtraction of Matrices \n 6.Exit\n\n";
	cout<<"Enter your choice\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
	s.read();
	break;

	case 2:
	cout<<"\nFirst Matrix is: \n";
	s.display(mat1,row,col);
	cout<<"\nSecond Matrix is: \n";
	s.display(mat2,row,col);
	break;

	case 3:
	s.add();
	break;

	case 4:
	s.mul();
	break;

	case 5:
	s.sub();
	break;

	case 6:
	break;

	default: 
	cout<<"\nEnter valid choise \n";
	break;
	}
}
return 0;
}


/*OUTPUT: 

/*Enter your choice1
Enter the number of rows and columns of matrix
3
3
Enter the values of matrix1
1 2 3 4 5 6 7 8 9
Enter values of matrix2
1 2 3 4 5 6 7 8 9
*********Matrix Opertions************

1.Read the Matrix 
 2.Display the Matrix 
 3.Addition of Matrices 
 4.Multiplication of Matrices 
5. Subtraction of Matrices 
 6.Exit

Enter your choice2

First Matrix is: 
1	2	3	
4	5	6	
7	8	9	

Second Matrix is: 
1	2	3	
4	5	6	
7	8	9*/	





























