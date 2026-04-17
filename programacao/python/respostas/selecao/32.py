anos = int(input("Digite a idade humana: "))

if anos < 0:
    print("Erro")
elif anos <= 2:
    print(f"{anos * 10.5:.1f} anos caninos")
else:
    print(f"{21 + (anos - 2) * 4} anos caninos")
