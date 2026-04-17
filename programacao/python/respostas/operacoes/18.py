numero = int(input("Digite um numero com ate 4 algarismos: "))

digito1 = numero // 1000
digito2 = (numero // 100) % 10
digito3 = (numero // 10) % 10
digito4 = numero % 10

soma = digito1 * 4 + digito2 * 3 + digito3 * 2 + digito4 * 1
digito_verificador = soma % 7

print(f"O digito verificador e: {digito_verificador}")
