#include "../parser.h"

#include <stdlib.h>

l_p_expr_string_literal *l_parse_expr_string_literal(l_scanner *stream)
{
	l_p_expr_string_literal *expr = malloc(sizeof(*expr));

	// string literal
	l_token str = l_scanner_expect(stream, TOKEN_STRING_LITERAL, "string literal");
	expr->string = str.content;

	return expr;
}

void l_pretty_expr_string_literal(
		l_p_expr_string_literal *expr,
		int depth,
		FILE *file)
{
	fprintf(file, "\"%s\"", expr->string);
}
