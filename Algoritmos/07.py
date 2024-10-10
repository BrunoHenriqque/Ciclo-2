N = int(input("Digite um valor para N (entre 1 e 10): "))

if 1 <= N <= 10:
    for i in range(0, 11):
        print(i, "x", N, "=", i * N)
else:
    print("O valor de N deve estar entre 1 e 10.")
