# Definir una lista
nombres = ['Juan', 'Karla', 'Ricardo', 'María']

# imprimir la lista
print(nombres)

# accediendo a los elementos
print(nombres[2])

# acceder a los elementos de manera inversa
print(nombres[-1])

# imprimir un rango
print(nombres[0:2]) # sin incluir el índice 2

# ir del inicio del inicio de la lista al índice sin incluirlo
print(nombres[:3])

# ir desde el índice indicado hasta el final de la lista
print(nombres[1:])

# cambiar el valor
nombres[3] = 'Ivone'
print(nombres)

# iterar la lista
for nombre in nombres:
    print(nombre)
else:
    print('No existen más nombres en la lista')