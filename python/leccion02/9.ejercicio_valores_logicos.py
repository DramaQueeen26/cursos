edad = int(input("Introduce tu edad: "))

veintes = edad >= 20 and edad < 30
treintas = edad >= 30 and edad < 40


if veintes or treintas:
	#print("Tu edad esta dentro del rango")

	if veintes:
		print("Tu edad esta dentro de los 20\'s")

	if treintas:
		print("Tu edad esta dentro de los 30\'s")

else:
	print("Tu edad no esta dentro del rango")
