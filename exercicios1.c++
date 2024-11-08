#include <iostream>

const int max = 10000;                      
bool numPrimos[max + 1];

int main() {
  for (int i = 0; i <= max; i++) {
    numPrimos[i] = true;
  }

  for (int i = 2; i * i <= max; i++) {
    if (numPrimos[i]) {
      for (int j = i; j <= max; j+= i) {
        numPrimos[j] = false;
      }
    }
  }

  for (int i = 2; i <= max; i++) {
    if (numPrimos[i]) {
      printf("%d\n", i);
    }
  }

  return 0;

}


//Declarado max como constante inteira pois valor não altera em momento nenhum
//NumPrimos indicado como uma array de booleanos para trabalhar o True and False
//O max + 1 é indicado no array booleano para termos um local unico no array para cada numero 
//Primeiro For dentro do main passa um vetor indicando que todos os numeros do array são primos, oque será trabalhado posteriormente, feito apenas para armazenar os valores de 1 a 10000
//Segundo For aplica o principio do Crivo de Erastoteres, na qual indica quais os numeros primos até o max, começando pelo 2, que é o primeiro numero primo
//O i * i <= max é usado para identificar multiplos de i até o valor max
//O terceiro For serve para o codigo percorrer novamente o array e verificar se após passar pelo segundo for o numero ainda é True, se for ele emite o numero no prompt sendo primo
