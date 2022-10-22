using namespace std;

class Reales{
	private:
		int numero;
		int num[29];
	public:
		Reales();
		void Guardar_Dato(float x, int y);
		void Mostrar_Datos();
		float promedio();
		float mayor();
		void positivos();
};