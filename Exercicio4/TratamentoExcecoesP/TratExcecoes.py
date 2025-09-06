def ler_conteudo_arquivo(nome_arquivo):
    try:
        with open(nome_arquivo, 'r', encoding='utf-8') as arquivo:
            return arquivo.read()
            
    except FileNotFoundError:
        return f"ERRO: Arquivo não encontrado: {nome_arquivo}"
    except PermissionError:
        return f"ERRO: Permissão negada para ler o arquivo: {nome_arquivo}"
    except IOError as e:
        return f"ERRO ao ler arquivo {nome_arquivo}: {str(e)}"
    except Exception as e:
        return f"ERRO inesperado ao ler arquivo {nome_arquivo}: {str(e)}"