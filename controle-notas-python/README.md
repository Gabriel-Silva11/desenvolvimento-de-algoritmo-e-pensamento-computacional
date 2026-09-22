# Controle de notas em Python
def cadastrar_estudantes():

  """

  Função para cadastro de dados dos estudantes e suas respectivas disciplinas.

  Garante validações de notas (0-10) e presença (0-100%).

  """

  lista_estudantes = []

  # Lista de disciplinas fixas herdada do escopo anterior

  DISCIPLINAS_PADRAO = ["Matemática", "Português", "Ciências", "História", "Geografia"]

   

  print("-" * 60)

  print(f"{'SISTEMA DE GESTÃO ACADÊMICA':^60}")

  print("-" * 60)

   

  while True:

    nome = input("\nDigite o nome do estudante (ou 'sair' para encerrar): ").strip()

    if nome.lower() == 'sair':

      break

    if not nome:

      print("⚠️ O nome não pode ser vazio. Tente novamente.")

      continue

       

    historico_materias = []

    print(f"\n[ Cadastrando notas de {nome} ]")

     

    for materia in DISCIPLINAS_PADRAO:

      print(f"\n-> Disciplina: {materia}")

       

      # Validação das Notas (0 a 10)

      while True:

        try:

          nota1 = float(input(f"  Digite a 1ª nota: "))

          nota2 = float(input(f"  Digite a 2ª nota: "))

          if 0 <= nota1 <= 10 and 0 <= nota2 <= 10:

            break

          print("  ⚠️ Erro: As notas devem estar obrigatoriamente entre 0 e 10.")

        except ValueError:

          print("  ⚠️ Entrada inválida! Digite apenas números para as notas.")

       

      # Validação da Frequência (0 a 100)

      while True:

        try:

          presenca = int(input(f"  Porcentagem de presença (0-100): "))

          if 0 <= presenca <= 100:

            break

          print("  ⚠️ Erro: A presença deve estar entre 0 e 100%.")

        except ValueError:

          print("  ⚠️ Entrada inválida! Digite um número inteiro para a presença.")

       

      # Guarda os dados brutos da disciplina atual

      materia_dados = {

        "nome_materia": materia,

        "nota1": nota1,

        "nota2": nota2,

        "presenca": presenca

      }

      historico_materias.append(materia_dados)

       

    # Estrutura completa do estudante contendo seu histórico

    estudante = {

      "nome": nome,

      "materias": historico_materias

    }

    lista_estudantes.append(estudante)

    print(f"\n✅ Todos os dados de {nome} foram salvos com sucesso!")

    print("-" * 60)

     

  return lista_estudantes





def calcular_nota(nota1, nota2):

  """Calcula e retorna a média aritmética simples de duas notas."""

  return (nota1 + nota2) / 2





def calcular_frequencia(historico_materias):

  """Calcula a média de frequência global do aluno com base em suas disciplinas."""

  if not historico_materias:

    return 0.0

  total_presenca = sum(m["presenca"] for m in historico_materias)

  return total_presenca / len(historico_materias)





def gerer_relatorio_final(estudantes):

  """

  Processa os dados de cada estudante, calcula as médias por disciplina,

  aplica as regras de status acadêmico e exibe o boletim completo.

  """

  if not estudantes:

    print("\n[!] Nenhum estudante foi cadastrado no sistema.")

    return



  for est in estudantes:

    print("\n" + "=" * 70)

    print(f"RELATÓRIO ACADÊMICO FINAL: {est['nome'].upper()}")

    print("=" * 70)

    print(f"{'DISCIPLINA':<15} | {'MÉDIA':<7} | {'PRESENÇA':<10} | {'SITUAÇÃO'}")

    print("-" * 70)

     

    soma_medias_aluno = 0

    aluno_com_dependencia = False # Flag se ficou em recuperação ou reprovou em alguma matéria

     

    for m in est["materias"]:

      # Executa as funções de cálculo exigidas

      media_materia = calcular_nota(m["nota1"], m["nota2"])

      soma_medias_aluno += media_materia

       

      # Define a situação por disciplina (regras unificadas)

      if media_materia >= 6.0:

        situacao_materia = "Aprovado"

      elif media_materia >= 4.0:

        situacao_materia = "Recuperação"

        aluno_com_dependencia = True

      else:

        situacao_materia = "Reprovado por Nota"

        aluno_com_dependencia = True

         

      print(f"{m['nome_materia']:<15} | {media_materia:<7.1f} | {m['presenca']:>7}% | {situacao_materia}")

       

    # Cálculos globais finais do aluno

    media_geral_aluno = soma_medias_aluno / len(est["materias"])

    frequencia_global = calcular_frequencia(est["materias"])

     

    print("-" * 70)

    print(f"MÉDIA GERAL DO SEMESTRE: {media_geral_aluno:.2f}")

    print(f"FREQUÊNCIA GLOBAL:    {frequencia_global:.1f}%")

    print("-" * 70)

     

    # Regra de negócio para o STATUS FINAL do Aluno

    if frequencia_global < 75.0:

      status_final = "STATUS FINAL: Reprovado por Frequência"

    elif aluno_com_dependencia:

      status_final = "STATUS FINAL: Atenção - Aluno em Recuperação ou Reprovado em disciplinas"

    else:

      status_final = "STATUS FINAL: Aprovado com Sucesso!"

       

    print(f"{status_final}")

    print("=" * 70)





# --- FLUXO PRINCIPAL DE EXECUÇÃO ---

if __name__ == "__main__":

  # 1. Executa a captação e validação de dados

  dados_alunos = cadastrar_estudantes()

   

  # 2. Processa os cálculos e exibe o boletim estruturado

  gerar_relatorio_final(dados_alunos)
