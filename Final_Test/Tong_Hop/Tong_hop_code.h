// Nhập mảng;
void inArray(int a[], int &n)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

// Xuất mảng;
void outArray(int a[], int n)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = %d ", i, a[i]);
	}
}

// Hàm in các phần tử là số nguyên tố;
int primeNumber(int n)
{
	if (n < 2)
		return 0;

	for (int i = 2; i <= sqrt((float)n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
//
void printPrimeNumber(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (primeNumber(a[i]))
			printf(" %d", a[i]);
	}
}

// Hàm in ra các phần tử là số chính phương;
// Kiểm Tra
bool SquareNumber(int n)
{
	int a = sqrt(n);
	if (a * a == n)
		return true;
	else
		return false;
}

// In ra
void printSquareNumber(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (SquareNumber(a[i]))
			printf(" %d", a[i]);
	}
}

// Hàm in ra các phần tử > giá trị trung bình của mảng;
void printElementLargerThanAverage(int a[], int n)
{
	int s = 0;
	float tb = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
		dem++;
	}
	tb = s / dem;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > tb)
			printf(" %d", a[i]);
	}
}

// Hàm trả về phần tử lớn nhất của mảng;
int largestElement(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

// Hàm boolean kiểm tra mảng đã được sắp xếp tăng dần chưa;
bool TestArrayIncrease(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i + 1] > a[i])
			dem++;
	}
	if (dem == n - 1)
		return true;
	else
		return false;
}

// Hàm sắp xếp mảng tăng dần;
void sortArrayIncrease(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

// Hàm sắp xếp mảng giảm dần.
void sortArrayDecrease(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


