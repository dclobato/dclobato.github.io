comp = float(input("Digite o comprimento de onda (nm): "))

if comp < 380.0:
    print("Ultravioleta")
elif comp < 450.0:
    print("Violeta")
elif comp < 495.0:
    print("Azul")
elif comp < 570.0:
    print("Verde")
elif comp < 590.0:
    print("Amarelo")
elif comp < 620.0:
    print("Laranja")
elif comp < 750.0:
    print("Vermelho")
else:
    print("Infravermelho")
