valorMinimo = 0 
valorMaximo = 5
a = int(input("Proporcione un valor numerico: "))

dentroDeRango = (a >= valorMinimo) and (a <= valorMaximo)

if(dentroDeRango):
	print("El valor " + str(a) + " esta dentro del rango")
else: 
	print("El valor " + str(a) + " no esta dentro del rango")
