#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @value: value to be inputed
 * @parent: store adress of the root
 * Return: return a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
