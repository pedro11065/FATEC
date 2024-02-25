quant_antes = int(input("Qual é a quantidade desse produto já no estoque?"))
quant_mais = int(input("Qual é a quantidade de unidades desse produto que irá chegar?"))

quant_depois = quant_antes + quant_mais

print(f"A nova quantidade desse produto no estoque será de {quant_depois} unidades")