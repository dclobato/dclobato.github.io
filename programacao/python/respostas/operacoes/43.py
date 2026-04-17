dia = int(input("Dia: "))
mes = int(input("Mes: "))
ano = int(input("Ano: "))

dias_mes = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
    dias_mes[2] = 29

dia += 1
if dia > dias_mes[mes]:
    dia = 1
    mes += 1
    if mes > 12:
        mes = 1
        ano += 1

print(f"O dia seguinte e: {dia:02d}/{mes:02d}/{ano}")
