#include "lex.h"
#include "parse.h"
#include "semantics.h"
#include "tabl.h"

int main(int argc, char const *argv[]) {
	tokens* Tokens = ident(argc, argv[1]);
    printtok(Tokens);
    struct AST* root = initParse(Tokens);
    createTree(root);
    Init_semantic(root);
    print_table(root);
    return 0;
}
