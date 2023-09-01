# ft_printf

O objetivo deste projeto é implementar a mesma função. Você aprenderá principalmente como usar Variadic Functions.

1. Intro
Os projetos devem ser escritos de acordo com as regras da Norma. Se houver arquivos/funções bônus, esses arquivos/funções serão incluídos na verificação de norma e receberão pontuação 0 se houver um erro de norma.
As funções não devem ser interrompidas inesperadamente devido a um comportamento indefinido.
Qualquer espaço de memória alocado no heap deve ser liberado adequadamente quando necessário. Vazamentos de memória não serão tolerados.
Se essa tarefa for necessária, um Makefile deverá ser enviado. Ele -Wall -Wextra -Werrorserá compilado especificando os sinalizadores. E o Makefile não deve dar re-link.
Makefiles devem conter pelo menos $(NAME), all, clean, fclean, .re
Se o seu projeto permitir libft, você deve copiar os fontes e seus Makefiles associados junto com seus Makefiles associados para a pasta libft. O Makefile do seu projeto deve usar o Makefile para compilar a biblioteca e depois compilar o seu projeto.

2. Parte obrigatória
nome do programa: libftprintf.a

Entregar arquivos: .c, / .c, *.h, / .h, Makefile
Makefile

all, clean, fclean, re, bônus

Funções externas permitidas: malloc, free, write, va_start, va_arg, va_copy, va_end

Libft autorizado: sim

Descrição
Escreva uma biblioteca que contenha ft_printf, uma função que irá imitar o printf real

Protótipo de ft_printf: int ft_printf(const char *, …).
Você precisa recodificar a função printf da libc.
Ele não deveria fazer nenhum gerenciamento de buffer como a função printf original fez.
Gerenciaremos as seguintes conversões:cspdiuxX%
Todas as conversões -0.*gerenciarão a combinação do sinalizador '' e a largura mínima do campo.
Ela será comparada com a função printf original.

3. Conhecimento prévio
fator variável
Tags de formato e especificadores de formato
Compilar biblioteca externa
