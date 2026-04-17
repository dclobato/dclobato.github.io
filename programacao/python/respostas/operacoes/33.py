corrente = float(input("Corrente (amperes): "))
tensao = float(input("Tensao (volts): "))
resistencia = tensao / corrente
print(f"A resistencia e {resistencia:.2f} ohms")
