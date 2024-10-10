# Inicializamos a variável para a maior altura com um valor muito baixo
maior_altura = float('-inf')

# Usamos um loop para ler a altura de 15 pessoas
for i in range(1, 16):
    altura = float(input("Digite a altura da pessoa " + str(i) + " em metros: "))
    
    # Verificamos se a altura lida é maior que a maior altura registrada até agora
    if altura > maior_altura:
        # Se for, atualizamos a maior altura
        maior_altura = altura

# Depois que todas as alturas são lidas, imprimimos a maior altura
print("A maior altura do grupo é:", maior_altura, "metros")
