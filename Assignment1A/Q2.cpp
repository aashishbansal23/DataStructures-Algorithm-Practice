#include<iostream>
using namespace std;

class sparse
{
	public:
	int row;
	int col;
	int val;
};

void print(sparse* sp, int len)
{
	for(int i=0;i<len;i++)
	{
		cout << sp[i].row << "	" << sp[i].col << "	 " << sp[i].val << endl;
	}
}

void addition(sparse *sp1, int n1, sparse *sp2, int n2, int row, int col)
{
	sparse result[100];
	int len = 0;
	int m = 0, n = 0;
	while(m < n1 && n < n2)
	{
		if(sp1[m].row > sp2[n].row || sp1[m].row == sp2[n].row && sp1[m].col > sp2[n].col)
		{
			result[len].row = sp2[n].row;
			result[len].col = sp2[n].col;
			result[len].val = sp2[n].val;
			len++;
			n++;
		}

		else if(sp1[m].row < sp2[n].row || sp1[m].row == sp2[n].row && sp1[m].col < sp2[n].col)
		{
			result[len].row = sp1[n].row;
			result[len].col = sp1[n].col;
			result[len].val = sp1[n].val;
			len++;
			m++;
		}
		else 
		{
			if((sp1[m].val + sp2[n].val) != 0)
			{
				result[len].row = sp2[n].row;
				result[len].col = sp2[n].col;
				result[len].val = sp1[m].val+sp2[n].val;
				len++;
			}
			m++;
			n++;
		}
	}
	while(m < n1)
	{
		result[len].row = sp1[n].row;
		result[len].col = sp1[n].col;
		result[len].val = sp1[n].val;
		len++;
		m++;
	}
	while(n < n2)
	{
		result[len].row = sp2[n].row;
		result[len].col = sp2[n].col;
		result[len].val = sp2[n].val;
		len++;
		n++;
	}

	print(result,len);
}

sparse* transpose(sparse* sp, int n, int row, int col)
{
	sparse* result = new sparse[n];
	int len = 0;
	int count[col] = {0};
	int index[col] = {0};
	
	for(int i=0; i<n; i++)
	{
		count[sp[i].col]++;
	}

	index[0] = 0;
	for(int i=1; i<col; i++)
	{
		index[i] = index[i-1] + count[i-1];
	}

	for(int i=0; i<n; i++)
	{
		int j = sp[i].col;
		result[index[j]].row = sp[i].col;
		result[index[j]].col = sp[i].row;
		result[index[j]].val = sp[i].val;
		len++;
		index[j]++;
	}
	return result;
}

void multiplication(sparse* sp1, int n1, int row1, int col1, sparse *sp2, int n2, int row2, int col2)
{
	sparse result[100];
	int len = 0;
	int frow, fcol, sum = 0, k = 0, i, j, p, q;
	sp2 = transpose(sp2,n2,row2,col2);
	for(i=0; i<n1; i++)
	{
		frow = sp1[i].row;
		for(j=0; j<n2; j++)
		{
			fcol = sp2[j].row;
			sum = 0;
			for(p=0, q=0; p<n1 && q<n2; )
			{
				if(sp1[p].row != frow)
				p++;

				if(sp2[q].row != fcol)
				q++;

				if(sp1[p].row == frow && sp2[q].row == fcol)
				{
					if(sp1[p].col < sp2[q].col)
					p++;

					else if(sp1[p].col > sp2[q].col)
					q++;

					else
					{
						sum = sum+(sp1[p].val*sp2[q].val);
						p++;
						q++;
					}
				}
			}

			if(sum != 0)
			{
				result[k].row = frow;
				result[k].col = fcol;
				result[k].val = sum;
				sum = 0;
				k++;
				len++;
			}
			while(j < n2 && sp2[j].row == fcol)
			j++;
		}
		while(i < n1 && sp1[j].row == frow)
		i++;
	}
	print(result,len);
}

int main()
{
	int n1, n2;
	int row1, row2, col1, col2;
	cout << "Enter order of first matrix:";
	cin >> row1 >> col1;
	cout << endl;
	cout << "Enter the number of non-zero elements of first matrix:";
	cin >> n1;
	sparse* sp1 = new sparse[n1];
	cout << "Enter row, column and values:" << endl;
	for(int i=0; i<n1; i++)
	{
		cout << "Enter " << i+1 << " value: ";
		int r, c,  v;
		cin >> r >> c >> v;
		sp1[i].row = r;
		sp1[i].col = c;
		sp1[i].val = v;
	}
	cout << "Enter the number of non-zero elements of second matrix :";
	cin >> n2;
	cout << "Enter order of second matrix:";
	cin >> row2 >> col2;
	cout << endl;
	cout << "Enter row, column and values:" << endl;
	sparse* sp2 = new sparse[n2];
	for(int i=0; i<n2; i++)
	{
		cout << "Enter" << i+1 << " value: ";
		int r, c, v;
		cin >> r >> c >> v;
		sp2[i].row = r;
		sp2[i].col = c;
		sp2[i].val = v;
	}
	cout << "Enter a number:"<< endl; 
	cout << "1.Addition" << endl;
	cout << "2.Transpose" << endl;
	cout << "3.Multiplication" << endl;
	
	int n;
	cin >> n;
	switch(n)
	{
		case 1:
		{
			if(row1 == row2 && col1 == col2)
			addition(sp1, n1, sp2, n2, row1, col1);
			else
			{
				cout << "Cannot be added !!!" << endl;
			}
			break;
		}
		case 2:
		{
			cout << "Transpose of first matrix is:" << endl;
			sp1 = transpose(sp1, n1, row1, col1);
		    print(sp1, n1);
			cout << "Transpose of second matrix is:" << endl;
		    sp2 = transpose(sp2, n2, row2, col2);
		    print(sp2, n2);
			break;
		}
		case 3:
		{
			multiplication(sp1, n1, row1, col1, sp2, n2, row2, col2);
			break;
		}
		default:
		{
			break;
		}
	}
	return 0;
}
