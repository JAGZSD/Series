#include "Series.h"

int main()
{
	float n;
	int g;
	
	inicio:
	system ("clear");
	Series s(n);

	std::cout<<"Ingrese el numero a calcular:  "<<std::endl;
	std::cin>> n ; 

	if (n>0)
	  {
		std::cout<<"\nEl fibonacci Iterativo es:"<<std::endl;
		std::cout<<s.fibonacciIt(n)<<std::endl;
		std::cout<<"\nEl fibonacci Recursivo es:"<<std::endl;
		std::cout<<s.fibonacciRec(n)<<std::endl;
		std::cout<<"\nEl factorial Iterativo es:"<<std::endl;
		std::cout<<s.factorialIt(n)<<std::endl;
		std::cout<<"\nEl factorial Recursivo es:"<<std::endl;
		std::cout<<s.factorialRec(n)<<std::endl;	
	  }
	      else
	      {
		std::cout<<"\nIngrese un Numero Natural"<<std::endl;
		return 0;
	      }

	std::cout<<"\n¿Probar Con otro Numero?:"<<std::endl;
	std::cout<<"Si- 1 No- 0 "<<std::endl;
	std::cin>> g ;
	
	if (g==1)
	goto inicio;
	
	return 0;
}
