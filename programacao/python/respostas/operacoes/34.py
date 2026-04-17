limite_inf_orig = float(input("Limite inferior da escala original: "))
limite_sup_orig = float(input("Limite superior da escala original: "))
valor_lido = float(input("Valor lido na escala original: "))
limite_inf_dest = float(input("Limite inferior da escala de destino: "))
limite_sup_dest = float(input("Limite superior da escala de destino: "))

valor_convertido = limite_inf_dest + (valor_lido - limite_inf_orig) * (
    limite_sup_dest - limite_inf_dest
) / (limite_sup_orig - limite_inf_orig)

print(f"O valor convertido e: {valor_convertido:.2f}")
