sexo = input("Digite o sexo (M/F): ")
idade = int(input("Digite a idade: "))

if (sexo == "F" and idade > 45) or (idade < 18):
    print("Tem direito a desconto")
else:
    print("Nao tem direito a desconto")
