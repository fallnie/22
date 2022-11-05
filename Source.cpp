#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus"); 

	/*const int a = 12;
		int mas[a];
		srand(time(nullptr));
		for (int i = 0; i < a; i++) {
			mas[i] = rand()%51-20;
			cout <<mas[i]<<endl;
		}
		cout<<endl;
		for (int i = a-1; i >= 0; i-=2) {
		
				cout << mas[i] << ' ';
		}*/
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	cout << k << endl;*/
	/*Array6.Даны целые числа N(> 2), A и B.Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй
		равен B, а каждый последующий элемент равен сумме всех предыдущих.*/
	/*const int n = 10;
	int a, b,c=0;
	int mas[n];
	cin >> a >> b;
	mas[0] = a;
	mas[1] = b;
	for (int i = 2; i < n; i++) {
		mas[i] = a + b + c;
		c = c + mas[i];
	}
	for (int i = 1; i < n; i++) {
		cout << mas[i]<<' ';
	}*/
	/*Array7◦
		.Дан массив размера N.Вывести его элементы в обратном порядке.*/
	/*const int n = 12;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 70;
		cout<<mas[i]<<' ';
	}
	cout << endl;
		for (int i = n-1; i >= 0; i--) {
			cout << mas[i]<<endl;
		}*/
	/*Array8.Дан целочисленный массив размера N.Вывести все содержащиеся в
		данном массиве нечетные числа в порядке возрастания их индексов, а
		также их количество K.*/
	/*const int n = 69;
	int mas[n];
	srand(time(nullptr));
	int k = 0;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 70;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 != 0) {
			cout << mas[i] << ' ';
			k++;
		}
	}
	cout << endl;
	cout << k;*/
	/*Array9.Дан целочисленный массив размера N.Вывести все содержащиеся в
		данном массиве четные числа в порядке убывания их индексов, а также
		их количество K.*/
	/*const int n = 69;
	int mas[n];
	srand(time(nullptr));
	int k = 0;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 70;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = n-1; i >=0; i--) {
		if (mas[i] % 2 == 0) {
			cout << mas[i] << ' ';
			k++;
		}
	}
	cout << endl;
	cout << k;*/
	/*Array10.Дан целочисленный массив размера N.Вывести вначале все содержащиеся в данном массиве четные числа в порядке возрастания их индексов,
		а затем — все нечетные числа в порядке убывания их индексов.*/
	/*const int n = 69;
	int mas[n];
	srand(time(nullptr));
	int k = 0;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 70;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i<n; i++) {
		if (mas[i] % 2 == 0) {
			cout << mas[i] << ' ';
		
		}
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--) {
		if (mas[i] % 2 != 0) {
			cout << mas[i] << ' ';
		}
		}*/
/* cam2*/
//const int n = 5;
//int mas[n];
//srand(time(nullptr));
//for (int i = 0; i < n; i++) {
//	mas[i] = rand() % 20-10;
//	cout << mas[i] << ' ';
//}
//cout << endl;
//for (int i = 0; i < n; i++) {
//	if (mas[i] % 3 == 0) { cout << mas[i] << endl; }
//}
   

}