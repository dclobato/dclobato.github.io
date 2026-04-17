codigo = int(input("Digite o codigo do item: "))
quantidade = int(input("Digite a quantidade: "))

if codigo == 100:
    preco = 8.00
elif codigo == 101:
    preco = 12.00
elif codigo == 102:
    preco = 8.00
elif codigo == 103:
    preco = 8.50
elif codigo == 104:
    preco = 7.00
elif codigo == 105:
    preco = 6.00
else:
    print("Codigo invalido")
    exit()

print(f"Total: {preco * quantidade:.2f}")
