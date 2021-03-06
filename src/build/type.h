#ifndef __C_MINADO_TYPE_H__
#define __C_MINADO_TYPE_H__

#include <stdbool.h>


#define MAX 10
#define BOMBA 9
#define VAZIO 0
#define VERSAO "0.0.2"
#define ATIVADO 1
#define DESATIVADO 0


enum Porcentagem 
{
  P_QUINZE          = 15, 
  P_VINTE_E_CINCO   = 25, 
  P_TRINTA_E_CINCO  = 35, 
  P_SESSENTA        = 60, 
  P_CEM             = 100
};


enum Niveis 
{
  FACIL   = 1,
  MEDIO   = 2,
  DIFICIL = 3
};


struct Coordenada
{
  int i;
  int j;
};

struct CampoMinado
{
  char campo[MAX][MAX];
  char campoJogadas[MAX][MAX];
  int nivel;
  int bombas;
  int jogadas;
  bool fimDoJogo;
  struct Coordenada coordenada;
};

#endif // __C_MINADO_TYPE_H__