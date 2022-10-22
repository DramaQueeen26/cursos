#Funcion input para procesar la entrada del usuario
print('Como se llama?')

#En python 2 se utiliza raw_input, en python 3 input()
nombre = input()
print('Me alegro de conocerte ' + nombre)
print('Ahora escribe el primer numero para sumar')

numero1 = int(input())
numero2 = int(input("Escribe el segundo numero: "))

resultado = numero1 + numero2

print("El resultado es: " + str(resultado))

print("Fin del programa")