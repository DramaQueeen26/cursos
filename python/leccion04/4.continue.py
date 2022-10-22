# for i in range(6):
#     if i % 2 == 0:
#         print(f'Valor: {i}')

for i in range(6):
    if i % 2 != 0:
        continue #continue se utiliza para pasar a la otra iterración, es decir que las líneas siguientes no se ejecutarán
    
    print(f'Valor: {i}')