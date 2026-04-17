mes = int(input("Digite o numero do mes: "))

if mes == 2:
    print("28 dias")
elif mes in (4, 6, 9, 11):
    print("30 dias")
elif mes in (1, 3, 5, 7, 8, 10, 12):
    print("31 dias")
else:
    print("Mes invalido")
