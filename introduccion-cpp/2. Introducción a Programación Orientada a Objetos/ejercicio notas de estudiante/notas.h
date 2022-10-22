#include <string>
using namespace std;

class Notas{
	private:
		float nota[5];
	public:
		Notas();
		void guardar(int valor, int posicion);
		void mostrar();
		int notas_aprobadas();
		int eficiencia();
		void promedio(); 
};
