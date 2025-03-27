#include <iostream>

void BubbleSort(int vet[], int tamanho, int &troca, int &comparacao) {
	for(int i = 0; i<tamanho - 1; i++) {
		for(int j = 0; j<tamanho - 1; j++) {
		    comparacao++;
			if(vet[j] > vet[j+1]) {
				int temp = vet[j];
				vet[j] = vet[j+1];
				vet[j + 1] = temp;
				troca++;
			}
		}
	}
}

int main()
{
	//0 1
	int vet[5] = {4,3,1,6,8};
	int troca = 0;
	int comparacao = 0;
	BubbleSort(vet, 5, troca, comparacao);
	for(int i = 0; i<5; i++) {
		std::cout << vet[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Número de trocas: " << troca << std::endl;
	std::cout << "Número de comparações: " << comparacao;
	return 0;
}