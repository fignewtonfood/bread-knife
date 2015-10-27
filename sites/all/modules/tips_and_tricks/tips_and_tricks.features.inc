<?php
/**
 * @file
 * tips_and_tricks.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tips_and_tricks_node_info() {
  $items = array(
    'tips_and_tricks' => array(
      'name' => t('Tips and Tricks'),
      'base' => 'node_content',
      'description' => t('For adding tips and tricks'),
      'has_title' => '1',
      'title_label' => t('Tips and Tricks'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
