A = int(input("Digite o valor inicial A: "))

fatorial = 1

for i in range(1, A + 1):
    fatorial *= i

print(A, "! = ", end="")
for i in range(A, 0, -1):
    if i != 1:
        print(i, "X", end=" ")
    else:
        print(i, end=" ")

print("= ", fatorial)
