/*
	UFA-ESPE
	Alumnos: Sebastian Rivera.
	Fecha de modificaci�n: 16/12/2022
	Enunciado: Funciones Lambda
	Nivel.- 3   NRC:7999
*/
#include <functional>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <cctype>
#include "Cvalidacion.cpp"
class FuncionesLambda {
public:
  // Crea una funci�n lambda para calcular el cuadrado de un n�mero
  std::function<int(int)> cuadradoDeEntero = [] (int x) -> int {
    return x * x;
  };

  // Crea una funci�n lambda para calcular el cubo de un n�mero
  std::function<int(int)> cuboEntero = [] (int x) -> int {
    return x * x * x;
  };

  // Crea una funci�n lambda para calcular el factorial de un n�mero
  std::function<int(int)> factorialEntero = [] (int x) -> int {
    if (x == 0) {
      return 1;
    }
    return x * (x - 1);
  };
};
