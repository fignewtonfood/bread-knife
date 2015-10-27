<?php
/**
 * @file
 * news_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function news_content_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Regular blog post'),
      'has_title' => '1',
      'title_label' => t('News'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
