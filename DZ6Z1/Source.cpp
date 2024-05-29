#include <iostream>
using namespace std;

// Функция для создания двумерного массива
void create_matrix(int arr1[], int arr2[], int matrix[][5]) {
    for (int i = 0; i < 5; i++) {
        matrix[0][i] = arr1[i] + arr2[i];
        matrix[1][i] = arr1[i] - arr2[i];
        matrix[2][i] = arr1[i] * arr2[i];
    }
}

// Функция для вывода двумерного массива
void print_matrix(int matrix[][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    // Исходные одномерные массивы
    int arr1[] = { 0, 1, 2, 3, 4 };
    int arr2[] = { 5, 6, 0, 7, 1 };

    // Создание двумерного массива
    int matrix[3][5];

    create_matrix(arr1, arr2, matrix);

    // Вывод результатов
    cout << "Двумерный массив:" << endl;
    print_matrix(matrix);

    return 0;
}