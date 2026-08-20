#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + tree_height(tree->right) : 0;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 if tree is NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* A leaf node is perfect by definition */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If only one child exists, it cannot be perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Subtrees must have identical heights */
	if (tree_height(tree->left) != tree_height(tree->right))
		return (0);

	/* Recursively verify both subtrees are perfect */
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
