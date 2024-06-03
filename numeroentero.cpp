  #include <iostream>
  using namespace std;

  int suma (int x, int y)
  {
    return x+y;
  }

  int resta (int x, int y)
  {
    return x-y;
  }

  int multiplicacion (int x, int y)
  {
    return x*y;
  }

  float division (float x, float y)
  {
    return  x/y;
  }

  int main()
  {
    int a, b, opc;
    cout << "Ingrese un numero entero a= ";
    cin >> a;

    cout << "Ingrese un numero entero b= ";
    cin >> b;

    cout << "Elija una opcion deseada: \n\t1. Sumar\n. \t2. restar\n. \t3. multiplicar\n. \t4. division\n\tOtro numero: salir\n";
    cout << "Su opcion es: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "El resultado de " << a << " + " << b << " es " << suma(a,b);
        break;
    
    
    case 2:
        cout << "El resultado de " << a << " - " << b << " es " << resta(a,b);
        break;

    case 3:
        cout << "El resultado de " << a << " * " << b << " es " << multiplicacion(a,b);
        break;

     case 4:
        cout << "El resultado de " << a << " / " << b << " es " << division(a,b);
        break;
        
    default:
        cout << "No se hace nada";
        break;
    }
    return 0;
  }