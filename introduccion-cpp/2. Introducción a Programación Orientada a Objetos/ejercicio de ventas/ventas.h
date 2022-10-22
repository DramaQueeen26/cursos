#include <string>
using namespace std;

class Ventas{
	private: 
		int dias[27];

	public:
		Ventas();
		void guardar(float valor, int dia);
		int dias_sin_ventas();
		void promedio_ventas();
		void mejor_dia();
		void ventas_80();
};