#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	
	std::cout << "\tЗадача 1.\n";
	const int size = 10;
	int arr[size];
	int sum = 0;
	int less_than_average = 0;
	std::cout << "Текущий массив: { ";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << ", ";
		sum += arr[i];
		}
	std::cout << "\b\b }\n";
	std::cout << "Среднее арифметическое всех элементов = " << sum / size << '\n';
	for (int i = 0; i < size; i++) 
		if (arr[i] < sum / size)
			less_than_average++;
	std::cout << "Элементов меньше среднего арифметического - " << less_than_average << '\n';
	

	std::cout << "\n\tЗадача 2. Сложение значений массивов.\n";
	const int rows = 5;
	const int cols = 5;
	const int rows2 = 5;
	const int cols2 = 5;
	int mx[rows][cols];
	int mx2[rows2][cols2];
	std::cout << "Первый массив: \n\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mx[i][j] = rand() % 100;
			std::cout << mx[i][j] << ' ';
		}
		std::cout << '\n';
	}

	std::cout << "\nВторой массив: \n\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mx2[i][j] = rand() % 100;
			std::cout << mx2[i][j] << ' ';
		}
		std::cout << '\n';
	}

	const int rows3 = 5;
	const int cols3 = 5;
	int sum_mx[rows][cols];
	std::cout << "\nРезультат попарного сложения элементов обоих массивов,: \n\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum_mx[i][j] = mx[i][j] + mx2[i][j];
			std::cout << sum_mx[i][j] << ' ';
		}
		std::cout << '\n';
	}
	
	std::cout << "\n\tЗадача 3.\nСоздание массива.\n\n";
	std::cout << "Введите шестизначное число -> ";
	int n;
	const int size2 = 6;
	int arr2[size2];
	std::cin >> n;
	if (n >= 100000 && n < 1000000) {
		for (int i = 0; i < size2; i++) {
			arr2[i] = n % 10;
			n /= 10;
		}
	std::reverse(arr2, arr2 + size2); // В задаче не сказанно как именно должен заполнятся массив, пусть будет так...
	std::cout << "Получился массив: { ";
	for (int i = 0; i < size2; i++) {
			std::cout << arr2[i] << ", ";
	}
		std::cout << "\b\b }\n";
	}
	else
		std::cout << "Ошибка ввода!\n\n";
	
















	return 0;
}