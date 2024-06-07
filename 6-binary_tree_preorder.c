#include "binary_trees.h"
/**
 * binary_tree_preorder - function that checks if a node is a root
 * @tree: pointer that point to the root
 * @func: a function pointer that point
 *
 * Return: NULL pointer to  root
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
