#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @node: from the child to the parent
 *
 * Return:nothing
 */
void binary_tree_delete(binary_tree_t *node)
{

	if (node == NULL)
		return;


	binary_tree_delete(node->left);
	binary_tree_delete(node->right);

	free(node);
}




