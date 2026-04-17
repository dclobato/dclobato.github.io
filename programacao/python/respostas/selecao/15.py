p1 = float(input("Digite a nota da p1: "))
p2 = float(input("Digite a nota da p2: "))
p3 = float(input("Digite a nota da p3: "))

media = (p1 + p2 + p3) / 3.0

if media > 6 and p1 > 0 and p2 > 0 and p3 > 0:
    print("Aprovado para a segunda fase")
else:
    print("Nao aprovado")
