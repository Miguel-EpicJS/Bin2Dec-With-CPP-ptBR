#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main()
{
	int out = 0, inp;
	string bin;
	while(true)
	{		
		inp = out = 0;
		cout << "Digite 1 para converter de binario para decimal.\n2 para limpar a tela.\n3 para sair" << endl;
		cin >> inp;
		if(inp == 1)
		{
			cin.ignore();
			cout << "Digite o número binário(sem espaços)" << endl;
			getline(cin, bin);
			
			for(int i = bin.length(); i >= 0; i--)
			{
				cout << out << endl;
				if(bin[i] == '1')
				{
					out += pow(2, bin.length()-i-1 );
				}else
				{
					out += 0;
				}
			}

			cout << "o resultado é: " << out << endl;

		}
		else if(inp == 2){system("clear||cls");}
		else if(inp == 3){break;}
		else{ cout << "Opção invalida" << endl;}

	}

	return 0;
}

