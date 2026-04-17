ano = int(input("Digite o ano de nascimento: "))

if ano <= 1900:
    print("Ano invalido")
else:
    match ano % 12:
        case 0:
            print("Macaco")
        case 1:
            print("Galo")
        case 2:
            print("Cão")
        case 3:
            print("Porco")
        case 4:
            print("Rato")
        case 5:
            print("Boi")
        case 6:
            print("Tigre")
        case 7:
            print("Coelho")
        case 8:
            print("Dragão")
        case 9:
            print("Cobra")
        case 10:
            print("Cavalo")
        case 11:
            print("Carneiro")
