dia = int(input("Digite o dia: "))
mes = int(input("Digite o mes: "))
ano = int(input("Digite o ano: "))

proximo_dia = dia + 1

if mes == 2:
    if dia == 28:
        dia = 1
        mes = 3
    else:
        dia = proximo_dia
elif mes in (4, 6, 9, 11):
    if dia == 30:
        dia = 1
        mes = mes + 1
    else:
        dia = proximo_dia
else:
    if dia == 31:
        dia = 1
        mes = mes + 1
        if mes > 12:
            mes = 1
            ano = ano + 1
    else:
        dia = proximo_dia

print(f"{dia:02d}/{mes:02d}/{ano:04d}")
