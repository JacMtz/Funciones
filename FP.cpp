// FP.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>


using namespace std;

void producto(vector<int>& p, vector<int>& a, vector<int>& b);
int sumaCuadrada(vector<int>& a);
void repetidos(vector<int>& r, vector<int>& a);
void sumaDescendente(vector<int>& s, vector<int>& a, vector<int>& b);

int main()
{
	setlocale(LC_ALL, ".UTF8");

	int opt;
	int sino;
Inicio:

	do
	{
		cout << "Ingresa el número de actividad que quieras ejecutar (1,2,3,4,5)" << endl;
		cin >> opt;
		cout << endl;

	} while (opt < 1 || opt > 5);

	if (opt == 1)
	{
		vector<int> vec1;
		vector<int> vec2;
		vector<int> vecProducto;
		int num, num1, num2;

		cout << "Ingresa cuantos numeros guardaran tus vectores" << endl;
		cin >> num;
		cout << endl;

		for (int i = 0; i < num; i++)
		{
			cout << "Ingresa el numero que se almacenara en el vector 1: ";
			cin >> num1;
			vec1.push_back(num1);
		}

		cout << endl;

		for (int i = 0; i < num; i++)
		{
			cout << "Ingresa el numero que se almacenara en el vector 2: ";
			cin >> num2;
			vec2.push_back(num2);
		}
		producto(vecProducto, vec1, vec2);

		cout << endl;

		cout << "Vector1: " << endl;

		for (int i = 0; i < vec1.size(); i++)
		{
			cout << vec1[i] << endl;
		}

		cout << "Vector2: " << endl;
		for (int i = 0; i < vec2.size(); i++)
		{
			cout << vec2[i] << endl;
		}
		cout << "Vector de productos: " << endl;
		for (int i = 0; i < vecProducto.size(); i++)
		{
			cout << vecProducto[i] << endl;
		}

		cout << "\nQuieres volver al inicio? \n1.-Si \n2.-No " << endl;
		cin >> sino;
		if (sino == 1)
		{
			cout << endl;
			goto Inicio;
		}
		else
		{
			cout << "\nHasta otra" << endl;

		}

	}

	if (opt == 2)
	{
		int num;
		vector<int> vec;

		cout << "Ingresa cuantos números guardara tu vector" << endl;
		cin >> num;
		cout << endl;

		for (int i = 0; i < num; i++)
		{
			cout << "Ingresa el numero que se almacenara en el vector: ";
			cin >> num;
			vec.push_back(num);
		}

		cout << endl;
		cout << "La suma de los cuadrados de los componentes del vector es: " << sumaCuadrada(vec) << endl;


		cout << "\nQuieres volver al inicio? \n1.-Si \n2.-No " << endl;
		cin >> sino;
		cout << endl;
		if (sino == 1)
		{
			goto Inicio;
		}
		else
		{
			cout << "\nHasta otra" << endl;
		}
	}

	if (opt == 3)
	{
		vector<int> vecRepetidos;
		int num;
		vector<int> vec;

		cout << "Digita los números que se almacenarán dentro del vector hasta digitar 0" << endl;

		do
		{
			cin >> num;
			vec.push_back(num);

		} while (num != 0);

		cout << endl;
		repetidos(vecRepetidos, vec);

		cout << "Tu vector contiene lo siguiente: " << endl;
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << endl;
		}
		cout << endl;

		cout << "Los números que ingresaste en el son: " << endl;
		for (int i = 0; i < vecRepetidos.size(); i++)
		{
			cout << vecRepetidos[i] << endl;
		}
		cout << endl;

		cout << "\nQuieres volver al inicio? \n1.-Si \n2.-No " << endl;
		cin >> sino;
		cout << endl;
		if (sino == 1)
		{
			goto Inicio;
		}
		else
		{
			cout << "\nHasta otra" << endl;
		}
	}

	if (opt == 4)
	{
		int num;
		vector<int> vec;
		vector<int> vecRepetidos;

		cout << "Ingresa cuantos números guardara tu vector" << endl;
		cin >> num;
		cout << endl;

		for (int i = 0; i < num; i++)
		{
			cout << "Ingresa el numero que se almacenara en el vector: ";
			cin >> num;
			vec.push_back(num);
		}

		cout << endl;
		repetidos(vecRepetidos, vec);

		cout << "Tu vector contiene lo siguiente: " << endl;
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << endl;
		}
		cout << endl;

		cout << "Los números que hay en el de forma ascendente son: " << endl;
		for (int i = 0; i < vecRepetidos.size(); i++) {
			for (int j = i + 1; j < vecRepetidos.size(); j++) {
				if (vecRepetidos[i] > vecRepetidos[j]) {
					int aux = vecRepetidos[i];
					vecRepetidos[i] = vecRepetidos[j];
					vecRepetidos[j] = aux;
				}
			}
		}
		for (int i = 0; i < vecRepetidos.size(); i++)
		{
			cout << vecRepetidos[i] << endl;
		}
		cout << endl;

		cout << "\nQuieres volver al inicio? \n1.-Si \n2.-No " << endl;
		cin >> sino;
		cout << endl;
		if (sino == 1)
		{
			goto Inicio;
		}
		else
		{
			cout << "\nHasta otra" << endl;
		}
	}

	if (opt == 5)
	{
		vector<int> vecN;
		vector<int> vecM;
		vector<int> vecSuma;
		int num, n, m;


		cout << "Ingresa el tamaño de los vectores: " << endl;
		cin >> num;

		for (int i = 0; i < num; i++) {
			cout << "Ingresa un valor del vector N: " << endl;
			cin >> n;

			vecN.push_back(n);
		}

		cout << endl;
		for (int i = 0; i < num; i++) {

			cout << "Ingresa un valor del vector M: " << endl;
			cin >> m;

			vecM.push_back(m);
		}
		cout << endl;

		sumaDescendente(vecSuma, vecN, vecM);

		cout << "Vector N: " << endl;

		for (int i = 0; i < vecN.size(); i++)
		{
			cout << vecN[i] << endl;
		}

		cout << "Vector M: " << endl;
		for (int i = 0; i < vecM.size(); i++)
		{
			cout << vecM[i] << endl;
		}
		cout << "Vector de sumas acomodado de forma descendente: " << endl;
		for (int i = 0; i < vecSuma.size(); i++) {

			for (int j = i + 1; j < vecSuma.size(); j++) {
				if (vecSuma[i] < vecSuma[j]) {
					int aux = vecSuma[j];
					vecSuma[j] = vecSuma[i];
					vecSuma[i] = aux;
				}
			}

			cout << vecSuma[i] << endl;
		}

		cout << "\nQuieres volver al inicio? \n1.-Si \n2.-No " << endl;
		cin >> sino;
		if (sino == 1)
		{
			cout << endl;
			goto Inicio;
		}
		else
		{
			cout << "\nHasta otra" << endl;
		}

	}

}


void producto(vector<int>& p, vector<int>& a, vector<int>& b)
{
	for (int i = 0; i < a.size(); i++)
	{
		int pr = a[i] * b[i];
		p.push_back(pr);
	}
}

int sumaCuadrada(vector<int>& a)
{
	int ssqrt = 0;

	for (int i = 0; i < a.size(); i++)
	{
		int sqrt = a[i] * a[i];
		ssqrt += sqrt;
	}

	return ssqrt;
}

void repetidos(vector<int>& r, vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			if (a[i] == a[j])
			{
				if (a[i] == a[j] && i != j)
				{

					break;

				}

				r.push_back(a[i]);
				break;
			}

		}
	}

	/*1 2 3 4 4 5
	1 2 3 4 4 5*/
}

void repetidosAscendentes(vector<int>& r, vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			if (a[i] == a[j])
			{
				if (a[i] == a[j] && i != j)
				{

					break;

				}

				r.push_back(a[i]);
				break;
			}

		}
	}


}

void sumaDescendente(vector<int>& s, vector<int>& a, vector<int>& b)
{
	for (int i = 0; i < a.size(); i++) {


		int suma = a[i] + b[i];

		s.push_back(suma);
	}
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
