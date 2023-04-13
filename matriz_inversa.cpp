#include <iostream>

using namespace std;

const int MAX = 100;

void cofactor(float a[MAX][MAX], float temp[MAX][MAX], int p, int q, int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = a[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

float determinante(float a[MAX][MAX], int n)
{
    float det = 0;
    float temp[MAX][MAX];

    int sign = 1;

    // Si la matriz es 1x1 el determinante es el unico elemento
    if (n == 1)
    {
        return a[0][0];
    }

    // Si la matriz es 2x2 el determinante es la resta de los productos de las diagonales
    // (a[0][0] * a[1][1]) - (a[0][1] * a[1][0])
    else if (n == 2)
    {
        return ((a[0][0] * a[1][1]) - (a[0][1] * a[1][0]));
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            cofactor(a, temp, 0, i, n);

            det += sign * a[0][i] * determinante(temp, n - 1);
            sign = -sign;
        }
    }
    return det;
}

void adjunta(float a[MAX][MAX], float adj[MAX][MAX], int n)
{
    float temp[MAX][MAX];
    int sign = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cofactor(a, temp, i, j, n);

            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = (sign) * (determinante(temp, n - 1));
        }
    }
}

bool inversa(float a[MAX][MAX], float inverse[MAX][MAX], int n)
{
    float det = determinante(a, n);

    if (det == 0)
    {
        cout << "No tiene inversa" << endl;
        return false;
    }

    float adj[MAX][MAX];
    adjunta(a, adj, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inverse[i][j] = adj[i][j] / det;
        }
    }
    return true;
}

int main()
{
    float a[MAX][MAX], inverse[MAX][MAX];
    int n;

    cout << "Ingrese la dimension de la matriz: ";
    cin >> n;

    cout << "Ingrese los elementos de la matriz: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    if (inversa(a, inverse, n))
    {
        cout << "La matriz inversa es: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << inverse[i][j] << "\t ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No tiene inversa" << endl;
    }

    return 0;
}