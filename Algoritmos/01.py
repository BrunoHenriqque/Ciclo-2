
# Inicializamos a variável soma com 0
soma = 0

# Usamos um loop para percorrer todos os números de 1 a 500
for numero in range(1, 501):

    # Verificamos se o número é ímpar
    if numero % 2 != 0:
        
        # Se for ímpar, verificamos se é múltiplo de três
        if numero % 3 == 0:
            
            # Se for múltiplo de três, adicionamos o número à soma
            soma = soma + numero

# Depois que o loop termina, imprimimos a soma
print("A soma dos números ímpares que são múltiplos de três é:", soma)
