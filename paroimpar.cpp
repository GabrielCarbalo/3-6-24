#include <iostream>
using namespace std;

string paroimpar (int x)
{
    string igual;
    if ( x%2 == 0 )
    {
        igual= "par";
    }
    else 
    {
        igual= "impar";
    }
    return igual;   
}
string negativoopositivo (int x)
{
    string igual;
    if (x < 0 )
    {
        return "negativo";
    }
    else if (x >= 0)
    {
        return "positivo";
    }
    
    
}
int main()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El numero que ingreso es: " << paroimpar (num) << " y " << negativoopositivo (num) ;
 
    return 0;
}