using namespace std;

class Arreglito{
	private:
		int numero;
		char letras[20];
	public:
		Arreglito();
		void Guardar_Dato(char x, int y);
		void Cargar_Datos();
		void Mostrar_Datos();
		void Proc_Uno();
		void Proc_Dos();
		char Func_Uno(char x, int y);
		int Func_Dos(char w);
};
