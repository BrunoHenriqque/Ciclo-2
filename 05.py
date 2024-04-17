
soma = 0
contagem = 0
soma_pares = 0
contagem_pares = 0
contagem_impares = 0

while True:
    numero = float(input("Digite um número positivo (ou zero para terminar): "))
    
    if numero == 0:
        break

    soma += numero
    contagem += 1

    if numero % 2 == 0:
        soma_pares += numero
        contagem_pares += 1
    else:
        contagem_impares += 1

media_geral = soma / contagem if contagem != 0 else 0
media_pares = soma_pares / contagem_pares if contagem_pares != 0 else 0

print("Quantidade de números pares:", contagem_pares)
print("Quantidade de números ímpares:", contagem_impares)
print("Média de valores pares:", media_pares)
print("Média geral dos números lidos:", media_geral)
