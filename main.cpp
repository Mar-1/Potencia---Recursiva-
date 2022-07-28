#include <iostream>

int potencia(int x, int n){
  if (n == 0)    //Caso trivial
    return 1;  //Solução direta
  else
    return x*potencia(x, n-1); //Chamada recursiva


}


int main() {
  int y , x,r;


	// leitura de n
  
	scanf("%d %d", &x, &y);
  r = potencia(x,y);
  printf("%d",r);
}