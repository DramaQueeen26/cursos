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

# preguntar el largo de una lista
print(len(nombres))

# agregar un elemento
nombres.append('Lorenzo')
print(nombres)

# insertar un elemento en un índice específico
nombres.insert(1, 'Octavio')
print(nombres)

# remover un elemento
nombres.remove('Octavio')
print(nombres)

# remover el último valor agregado
nombres.pop()
print(nombres)

# remover según índice
del nombres[0]
print(nombres)

# limpiar lista
nombres.clear()
print(nombres)

# remover la lista por completo (de la memoria)
del nombres
# print(nombres)