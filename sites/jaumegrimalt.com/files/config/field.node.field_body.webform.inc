<?php
/**
 * @file
 * field.node.field_body.webform.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '1',
    'entity_types' => array(),
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_body' => array(
              'value' => 'field_body_value',
              'format' => 'field_body_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_body' => array(
              'value' => 'field_body_value',
              'format' => 'field_body_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_name' => 'field_body',
    'type' => 'text_long',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Body',
    'widget' => array(
      'weight' => '1',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '5',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
      'entity_translation_sync' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'ds_extras_field_template' => '',
    'default_value' => NULL,
    'field_name' => 'field_body',
    'entity_type' => 'node',
    'bundle' => 'webform',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.webform' => 'content_type.webform',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
