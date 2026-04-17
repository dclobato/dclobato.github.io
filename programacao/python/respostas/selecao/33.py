lados = int(input("Digite o numero de arestas: "))

if lados < 3 or lados > 10:
    print("Erro")
elif lados == 3:
    print("Triangulo")
elif lados == 4:
    print("Quadrilátero")
elif lados == 5:
    print("Pentagono")
elif lados == 6:
    print("Hexagono")
elif lados == 7:
    print("Heptagono")
elif lados == 8:
    print("Octogono")
elif lados == 9:
    print("Eneagono")
else:
    print("Decagono")
