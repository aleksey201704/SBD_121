﻿#include<iostream>
//#include<time.h>	//Библиотека, написанная на языке C
#include<ctime>		//Такая же библиотека, написанная на языке C++

//template <typename T>
//template // Показывает создание шаблона
//typename // Создает тип данных
//T - имя шаблонного типа

using namespace std;

#define delimitr "\n-----------\n"

const unsigned int ROWS = 4;
const unsigned int COLS = 5;

void FillRand(int arr[], const unsigned int n, int minRand = 0, int maxRand = 100);	//Заполняет массив случайными числами
void FillRand(double arr[], const unsigned int n, int minRand = 0, int maxRand = 100);	//Заполняет массив случайными числами

template<typename T> // создали шаблон
void Print(T arr[], const unsigned int n);
template<typename T> void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

template<typename T>T Sum(T arr[], const unsigned int n);
void main()
{
	setlocale(LC_ALL, "");
	const unsigned int n = 5;
	int arr[n];
	//srand(5);
	int minRand, maxRand;
	//cout << "Введите минимальное случайное число: "; cin >> minRand;
	//cout << "Введите максимальное случайное число: "; cin >> maxRand;
	FillRand(arr, n, 200,300);
	Print(arr, n);
	cout << "сумма элемента масива = " << Sum(arr, n) << endl;
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "сумма элемента масива = " << Sum(brr, n) << endl;

	int i_arr_2[ROWS][COLS] = 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	Print(i_arr_2, ROWS, COLS);
	cout << delimitr << endl;

	double b_arr_2[ROWS][COLS] =
	{
		{2.5, 3.14, 5, 3},
		{2.5, 3.14, 9.4},
		{2.5, 3.14, 5, 3},
		{2.5, 3.14, 5, 3},
	};
	Print(b_arr_2, ROWS, COLS);
	
}

template<typename T>T Sum(T arr[], const unsigned int n) 
{
	T sum = T(); // t() - значение по умолчения для шабоного типа данных
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

template<typename T>
void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}