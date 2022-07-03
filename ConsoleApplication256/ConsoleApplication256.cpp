// ConsoleApplication256.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include< cstdarg>
/*long fact(int N) {

	long F = 1;
	for (int i =2; i <=N; i++) {
		F *=i;
	}
	return F;
}
long fact2(int N) {
	if (N < 1) return 0;
	else if (N == 1) return 1;
	else return  N * fact2(N - 1);*/
/*}
template<typename T>
void quicksort(T a[], int N) {
	int i = 0, j = N;
	T temp, p;
	p = a[N / 2];// central detail
	do {
		while (a[i] < p)i++;
		while (a[j].p)j--;
		if (i <= j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0) quicksort(a, j);
	if (N > i) quicksort(a + i, N - i);
}


int binarysearch(int a[], int Lb, int Ub, int key) {
	int M;
	while (1) {
		M = (Lb + Ub) / 2;
		if (key < a[M])
			Ub = M - 1;
		else if (key > a[M])
			Lb = M + 1;
		else
			return M;
	}
	int main()
	{
		srand(time(NULL));
		const int SIZE = 10;
		int arr[SIZE];
		for (int i = 0; i < SIZE; i++) {
			arr[i] = rand() % 100;
			cout << arr[i] << " ";
		}
		cout << "n\n";
		quicksort(arr, SIZE - 1);
		for (int i = 0; i < SIZE; i++) {
			cout << arr[i] << " ";
		}
		cout << " n/n";
		cout << arr[binarysearch(arr, 0, SIZE, 56)];

		/*cout << fact(5) << endl;
		cout << fact2(5) << endl;*/
	
	/*int getmin(int num()fargs, ...) {
		int minval;
		va_list va;
		va_start(va, numofargs);
		minval = va_arg(va, int);
		int tempval = 0;
		for (int i = 0; i < numofarg - 1; i++) {
			tempval = va_arg(va, int);
			if (minval > tempval)
				minval = tempval;
		}
		va_end(va);
		return minval;
	}

	int main() {
		cout << "minimum is..." << getmin(5, -35, 54, 1, -3, 0);
		void va_start(va_list ap, lastPattern)
			void va_end(va_list ap)
			type  va_arg(va_list ap, type)
	}*/




		/*int search(int a, int b) {

		if (b == 0)
			return 1;
		else if (b == 1) return a;
		else return a * search(a, b--);

		}
	void main() {
		cout << search(3,3);
	}*/

/*void stars(int a) {
	cout << " * ";
	if (a > 0)stars(--a);
	void main(){
		int a;
		cin >> a;
		stars(6);

	}*/
/*int summa(int a, int b) {
	int sum = 0;
	cout << sum + a << endl;
	if (a <b)summa(++a, b);
	else return sum;
	if (a <= b) summa(5, 8);
	
}*//*int sum = 0, min = sizeof(int);
int index = 0, minindex = 0;
int summa(int arr[], int s) {
	if (index < s - 10) {

		for (int i = index; i < 10; i++) {
			sum += arr[i];


		}
		if (min > sum) {
			min = sum;
			minindex = index;
		}
		index++;
		summa(arr, s);

	}return 0;
}
void main() {
	srand(time(NULL));
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 100;
	}
	minindex(arr, 100);
	cout<<minindex<<" "
}*/

/*#define SIZE 5

template<class T>

T void maxnumbertoarray(T arr[SIZE]) {
	T SUM = 0;
	FOR(INT I = 0; i < SIZE; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
template<class T>
 T void maxnumbertoarray(T arr[SIZE][SIZE]) {
	 T max = arr[0][0];
	 FOR(INT I = 0; i < SIZE; i++)
	 {
		 for(int j=0; j<SIZE;j++)
		 if (max < arr[i]) max = arr[i];
	 }
	 return max;
 }}
template<class T>
T void maxnumbertoarray(T arr[SIZE][SIZE][SIZE]) {}

int maxnumber(int a, int b) {
	return max(a, b);
}
int maxnumber(int a, int b, int c) {
	return max(max(a, b), c);
}
*/

void step(int arr[3][4], int s) {
	for (int i = 0; i < 3; i++) {
		int temp = arr[i][0];
		for (int j = 0; j <3; j++) {
			arr[i][j + 1] = arr[i][j];
		}
		arr[i][0] = temp;
	}
	if (s > 0) step(arr, --s);
}
void main() {
	int arr[3][4] = { 4,5,6,7,1,2,4,1 };
	step(arr, 3);

	for (int i = 0; i < 3; i++) {
		for (int j - 0; j < 3; j++) {
			int tem2=arr[i]

		}
	}
}
