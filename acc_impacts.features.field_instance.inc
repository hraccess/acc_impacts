<?php
/**
 * @file
 * acc_impacts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function acc_impacts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_acc_impacts-field_acc_impact_type'
  $field_instances['field_collection_item-field_acc_impacts-field_acc_impact_type'] = array(
    'bundle' => 'field_acc_impacts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_acc_impact_type',
    'label' => 'Type of impact',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_acc_impacts-field_acc_impact_value'
  $field_instances['field_collection_item-field_acc_impacts-field_acc_impact_value'] = array(
    'bundle' => 'field_acc_impacts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_acc_impact_value',
    'label' => 'Value',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Type of impact');
  t('Value');

  return $field_instances;
}
