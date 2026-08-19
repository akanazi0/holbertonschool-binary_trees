#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is root by checking
 * @node: if has no child return 0 else
 * Return:0
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (NULL);
	else if (node->left && node->right)
	return (1);
	else
	return (0);


}
