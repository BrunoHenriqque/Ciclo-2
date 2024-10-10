
contagem_0_25 = 0
contagem_26_50 = 0
contagem_51_75 = 0
contagem_76_100 = 0

while True:
    
    numero = float(input("Digite um número (ou um número negativo para terminar): "))
    if numero < 0:
        break
    if 0 <= numero <= 25:
        contagem_0_25 += 1
    elif 26 <= numero <= 50:
        contagem_26_50 += 1
    elif 51 <= numero <= 75:
        contagem_51_75 += 1
    elif 76 <= numero <= 100:
        contagem_76_100 += 1

print("Quantidade de números no intervalo [0-25]:", contagem_0_25)
print("Quantidade de números no intervalo [26-50]:", contagem_26_50)
print("Quantidade de números no intervalo [51-75]:", contagem_51_75)
print("Quantidade de números no intervalo [76-100]:", contagem_76_100)
