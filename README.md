# Ray tracing

Este projeto visa desenvolver um motor de renderização baseado em traçado de raios (*ray tracing*) para estudar algoritmos e técnicas de computação gráfica, ao mesmo tempo que revisa princípios da geometria analítica vetorial. Inicialmente, não pretendo utilizar bibliotecas de terceiros, com o objetivo de compreender o desenvolvimento de um software de renderização básico.

O estudo se dará principalmente por meio da série de livros *Ray Tracing in One Weekend*, para outras referências e mais informações confira a seção [*Bibliografia*](#bibliografia).

## Licença

Este software é livre e de domínio público, sinta-se à vontade para utilizá-lo em seus estudos ou projetos pessoais. Para mais informações veja a [*licença*](./LICENSE) do projeto.

## Dependências e Compilação

Antes de começar, verifique se você possui um compilador de C++ instalado e configurado, como o [*GNU Compiler Collection*](https://gcc.gnu.org/), e a ferramenta [*GNU Make*](https://www.gnu.org/software/make/). Uma vez que essas dependências estejam resolvidas, clone este repositório execute o comando *make* no diretório do projeto para gerar um binário.

```bash
git clone git@github.com:AssoDePicche/raytracing.git && cd ./raytracing/ && make
```

## Encontrou problemas?

Caso encontre erros ou tenha sugestões crie uma *Issue* descrevendo seu caso. No entanto, antes de criar uma *Issue*, certifique-se se o problema ou sugestão ainda não foi relatado.

## Contribuições

1. Crie um *fork* do projeto

2. Crie sua *feature branch*: *git checkout -b feature/my-feature*

3. Faça o *commit* de suas alterações: *git commit -m “feat: add feature”*

4. Realize o *push* na *branch* de sua *feature*: *git push origin feature/my-feature*

5. Abra um *pull request* e aguarde aprovação

Agradeço imensamente a sua contribuição! Após seu *pull request* sofrer o *merge*, sinta-se à vontade para excluir a *branch* de sua *feature*.

**Observações:** Note que durante o desenvolvimento utilizei uma padronização para as mensagens de *commit* conhecida como [*Conventional Commits Pattern*](https://medium.com/linkapi-solutions/conventional-commits-pattern-3778d1a1e657), por isso, peço que **utilize o mesmo padrão** ao fazer suas contribuições.

## Entre em contato

Para sanar dúvidas, realizar sugestões ou dar feedback, não hesite em enviar um email para [Samuel do Prado Rodrigues (AssoDePicche)](samuelprado730@gmail.com).

## Bibliografia

BOLDRINI, L. José, COSTA, Sueli I. Rodrigues, FIGUEIREDO, Vera Lucia, WETZLER, Henry G. **Álgebra linear**. São Paulo, 3. ed. São Paulo: Harbra, 1986.

SHIRLEY, Peter, BLACK, Trevor David, HOLLASCH, Steve. **Ray Tracing in One Weekend**, 2023. Disponível em: [raytracing.github.io](https://raytracing.github.io/books/RayTracingInOneWeekend.html). Acesso em 14 de jan. 2024.

WINTERLE, Paulo. **Vetores e geometria analítica**. 2. ed. São Paulo: Pearson, 2014.
