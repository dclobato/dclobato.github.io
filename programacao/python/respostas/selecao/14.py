p1 = float(input("Digite a nota da p1: "))
p2 = float(input("Digite a nota da p2: "))
p3 = float(input("Digite a nota da p3: "))

media = (p1 * 2 + p2 * 3 + p3 * 5) / 10.0

if media >= 6:
    print("Aprovado")
elif media > 4:
    print("Prova final")
else:
    print("Reprovado")
