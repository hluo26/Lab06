#include<iostream>
#include<ifstream>

void display()
{
	std::cout<<"1.Implement a matrix multiplication function."<<std::endl;
	std::cout<<"2.Implement a matrix addition function"<<std::endl;
	std::cout<<"3.Implement a matrix transpose function"<<std::endl;
}


void transpose()
{
	std::cout<<"1. Matrix A"<<std::endl;
	std::cout<<"2. Matrix B"<<std::endl;
}

void print(int*matrix, int row, int col)
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<"\t"<<C[row][col];
		}
		std::cout<<"\n\n";
	}
}


int main()
{
	ifstream infile;
	outstream outfile;

	int n=10;
	int A[n][n];
	int B[n][n];
	int C[n][n];
	int i;
	int j;
	int k;
	int option=0;

	std::cout<<"Please choosing an option"<<std::endl;

	display();

	std::cin>>option;


	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cin>>A[i][j];
		}
	}
	std::cout<<"\n";

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cin>>B[i][j];
		}
	std::cout<<"\n"
	}

	if(option==1)
	{	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				C[i][j]=0;
				for(k=0;k<n;k++)
				{
					C[i][j]=C[i][j]+A[i][k]*b[k][j];
				}
			}
		}

		print(C,n,n);
	}

	if(option==2)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				C[i][j]=0;
				for(k=0;k<n;k++)
				{
					C[i][j]=C[i][j]+A[i][k]+b[k][j];
				}
			}
		}

		print(C,n,n);
	
	}

	if(option==3)
	{

		int temp;
		transpose();

		std::cin>>option;

		if(option==1)
		{
			std::cout<<"You choose the matrix A"<<std::endl;
			for(i=0;i<n;i++)
			{
				for(j=i;j<n;j++)
				{
					temp=A[i][j];
					A[i][j]=A[j][i];
					A[j][i]=temp;
				}
			}
		
			print(A,n,n);
		}
		if(option==2)
		{
			std::cout<<"You choose the matrix B"<<std::endl;
			for(i=0;i<n;i++)
			{
				for(j=i;j<n;j++)
				{
					temp=B[i][j];
					B[i][j]=B[j][i];
					B[j][i]=temp;
				}
			}

			print(B,n,n);
		}
}
	
