/*
** Lexical analyzer.
** Copyright (C) 2005-2015 Mike Pall. See Copyright Notice in luajit.h
*/
/* customized by yoya. */

#ifndef _LJ_LEX_H
#define _LJ_LEX_H

#include <stdarg.h>

#include "lj_obj.h"
#include "lj_err.h"

typedef int LexToken;

/* Combined bytecode ins/line. Only used during bytecode generation. */
typedef struct BCInsLine {
  BCIns ins;		/* Bytecode instruction. */
  BCLine line;		/* Line number for this bytecode. */
} BCInsLine;

/* Info for local variables. Only used during bytecode generation. */
typedef struct VarInfo {
  GCRef name;		/* Local variable name or goto/label name. */
  BCPos startpc;	/* First point where the local variable is active. */
  BCPos endpc;		/* First point where the local variable is dead. */
  uint8_t slot;		/* Variable slot. */
  uint8_t info;		/* Variable/goto/label info. */
} VarInfo;

/* Lua lexer state. */
typedef struct LexState {
  struct FuncState *fs;	/* Current FuncState. Defined in lj_parse.c. */
  struct lua_State *L;	/* Lua state. */
  TValue tokenval;	/* Current token value. */
  TValue lookaheadval;	/* Lookahead token value. */
  int current;		/* Current character (charint). */
  LexToken token;	/* Current token. */
  LexToken lookahead;	/* Lookahead token. */
  MSize n;		/* Bytes left in input buffer. */
  const char *p;	/* Current position in input buffer. */
  SBuf sb;		/* String buffer for tokens. */
  lua_Reader rfunc;	/* Reader callback. */
  void *rdata;		/* Reader callback data. */
  BCLine linenumber;	/* Input line counter. */
  BCLine lastline;	/* Line of last token. */
  GCstr *chunkname;	/* Current chunk name (interned string). */
  const char *chunkarg;	/* Chunk name argument. */
  const char *mode;	/* Allow loading bytecode (b) and/or source text (t). */
  VarInfo *vstack;	/* Stack for names and extents of local variables. */
  MSize sizevstack;	/* Size of variable stack. */
  MSize vtop;		/* Top of variable stack. */
  BCInsLine *bcstack;	/* Stack for bytecode instructions/line numbers. */
  MSize sizebcstack;	/* Size of bytecode stack. */
  uint32_t level;	/* Syntactical nesting level. */
} LexState;

LJ_FUNC int lj_lex_setup(lua_State *L, LexState *ls);
LJ_FUNC void lj_lex_cleanup(lua_State *L, LexState *ls);
LJ_FUNC void lj_lex_next(LexState *ls);
LJ_FUNC LexToken lj_lex_lookahead(LexState *ls);
LJ_FUNC const char *lj_lex_token2str(LexState *ls, LexToken token);
LJ_FUNC_NORET void lj_lex_error(LexState *ls, LexToken token, ErrMsg em, ...);
LJ_FUNC void lj_lex_init(lua_State *L);

#endif