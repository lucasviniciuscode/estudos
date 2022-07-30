import pandas as pd

df = pd.read_csv('/home/lucasvini/Personal/Faculdade/Curso-softex/Python/Plataforma/notas.csv')

df["media"] = (df["nota1"] + df["nota2"]) / 2

df.loc[df["media"] >= 7, "situacao"] = "APROVADO"
df.loc[df["faltas"] > 5, "situacao"] = "REPROVADO"
df.loc[df["media"] < 7, "situacao"] = "REPROVADO"
print(df)
df.to_csv("alunos_situacao.csv")
