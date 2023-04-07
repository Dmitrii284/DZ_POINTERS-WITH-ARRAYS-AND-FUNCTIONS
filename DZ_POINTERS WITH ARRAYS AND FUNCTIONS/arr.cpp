#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);

void mass(int *arr, const int length) {
	std::cout<<'[';
	arr = &arr[0];
	for (int i = 0; i < length; i++)
		std::cout << *(arr + i) << ", ";
	std::cout << "\b\b]\n";
}
//Task 1
void p_mass(int *arr, const int length) {	
	for (int i = 0; i < length - 1; i++)
		if (i % 2 == 0) 		
			std::swap(*(arr + i), *(arr + i +1));			
}
//Task 2
void func(int *a, int b) {
	int result = 1;
	for (int i = 1; i <= b; i++) 
		result = result* *a;
	
		std::cout << "Exponentiation: " << result;
	
	std::cout << std::endl;
}


int main() {
	setlocale(LC_ALL, "Rus");

	//Task 1
	const int size = 10;
	int array[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "Initiali Array: \n";
	mass(array, size);
	std::cout << "Sorted Array: \n";
	p_mass(array,size);	
	mass(array, size);
	

	//Task 2
	int n = 10;
	
	func(&n, 3);


	return 0;
}