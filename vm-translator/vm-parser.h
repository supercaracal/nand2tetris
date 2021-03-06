#ifndef VM_TRANSLATOR_VM_PARSER_H_
#define VM_TRANSLATOR_VM_PARSER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_types.h"
#include "vm-parser-common.h"
#include "vm-parser-push.h"
#include "vm-parser-pop.h"
#include "vm-label.h"

char *parse_vm_command(const struct command *cmd, struct label *lbl, char *cfunc);
char *stringify_command(enum cmd_type type);
char *build_bootstrap_asm_code(struct label *lbl);

#endif  // VM_TRANSLATOR_VM_PARSER_H_
