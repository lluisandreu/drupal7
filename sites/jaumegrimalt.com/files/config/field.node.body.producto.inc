<?php
/**
 * @file
 * field.node.body.producto.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(
      0 => 'node',
    ),
    'translatable' => '0',
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
            'field_data_body' => array(
              'value' => 'body_value',
              'summary' => 'body_summary',
              'format' => 'body_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_body' => array(
              'value' => 'body_value',
              'summary' => 'body_summary',
              'format' => 'body_format',
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
    'field_name' => 'body',
    'type' => 'text_with_summary',
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
      'summary' => array(
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
      'type' => 'text_textarea_with_summary',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'weight' => '3',
      'module' => 'text',
    ),
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
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
        'type' => 'hidden',
        'weight' => '3',
        'settings' => array(),
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'body',
    'entity_type' => 'node',
    'bundle' => 'producto',
    'deleted' => '0',
    'default_value' => NULL,
  ),
);

$dependencies = array(
  'content_type.producto' => 'content_type.producto',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
