peso = float(input("Digite o peso (kg): "))
altura = float(input("Digite a altura (m): "))

imc = peso / (altura * altura)

if imc < 18.5:
    print("Abaixo do peso")
elif imc < 25.0:
    print("Peso normal")
elif imc < 30.0:
    print("Sobrepeso")
elif imc < 35.0:
    print("Obesidade grau 1")
elif imc < 40.0:
    print("Obesidade grau 2")
else:
    print("Obesidade grau 3")
