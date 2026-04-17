farinha = float(input("Quantidade de farinha (g): "))
agua = float(input("Quantidade de agua (ml): "))
levain = float(input("Quantidade de levain (g): "))

hidratacao = (agua + levain / 2) / (farinha + levain / 2) * 100
print(f"A hidratacao da massa e {hidratacao:.1f}%")
