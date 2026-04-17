import math

scr = float(input("Creatinina (mg/dL): "))
sexo = input("Sexo (M/F): ")
idade = int(input("Idade: "))

if sexo == "F":
    kappa = 0.7
    alpha = -0.329
    f = 1.018
else:
    kappa = 0.9
    alpha = -0.411
    f = 1.0

if scr / kappa < 1:
    tfge = 141 * (scr / kappa) ** alpha * 1 ** (-1.209) * (0.993**idade) * f
else:
    tfge = 141 * (scr / kappa) ** alpha * (scr / kappa) ** (-1.209) * (0.993**idade) * f

print(f"TFGe: {tfge:.2f}")

if tfge >= 90:
    print("Funcao renal normal")
elif tfge > 60:
    print("Leve reducao da funcao renal")
else:
    print("Comprometimento da funcao renal")
