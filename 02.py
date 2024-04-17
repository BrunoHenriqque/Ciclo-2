# Inicializamos a variável para a menor altura com um valor alto
menor_altura = float('inf')

# Usamos um loop para ler a altura de 15 pessoas
for i in range(1, 16):
    altura = float(input("Digite a altura da pessoa " + str(i) + " em metros: "))
    
    # Verificamos se a altura lida é menor que a menor altura registrada até agora
    if altura < menor_altura:
        # Se for, atualizamos a menor altura
        menor_altura = altura

# Depois que todas as alturas são lidas, imprimimos a menor altura
print("A menor altura do grupo é:", menor_altura, "metros")
