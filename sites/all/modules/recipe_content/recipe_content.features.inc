<?php
/**
 * @file
 * recipe_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function recipe_content_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('For users to add new recipes'),
      'has_title' => '1',
      'title_label' => t('Recipe'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
