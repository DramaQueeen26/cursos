#include <string>
using namespace std;

class programa{
	private:
		string nombre;
		int numero;
		int numero2;
	public:
		programa();
		void nombreCompleto();
		int minutos(int m, int s);
		int divisores(int numero);
		void menor(int numero, int numero2);
		void rif();
		int menu();
};
