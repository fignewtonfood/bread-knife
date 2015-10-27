<?php
/**
 * @file
 * awards_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function awards_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-awards-field_links'.
  $field_instances['node-awards-field_links'] = array(
    'bundle' => 'awards',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link to award, use -a- HTML tags.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_links',
    'label' => 'Links',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Link to award, use -a- HTML tags.');
  t('Links');

  return $field_instances;
}
