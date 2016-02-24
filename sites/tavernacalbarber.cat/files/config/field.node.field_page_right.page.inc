<?php
/**
 * @file
 * field.node.field_page_right.page.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_page_right' => array(
              'value' => 'field_page_right_value',
              'format' => 'field_page_right_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_page_right' => array(
              'value' => 'field_page_right_value',
              'format' => 'field_page_right_format',
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
    'field_name' => 'field_page_right',
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
    'label' => 'Right text',
    'widget' => array(
      'weight' => '4',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '5',
      ),
    ),
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '4',
        'settings' => array(),
        'module' => 'text',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => 'Afegeix contingut a la columna dreta',
    'default_value' => NULL,
    'field_name' => 'field_page_right',
    'entity_type' => 'node',
    'bundle' => 'page',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.page' => 'content_type.page',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
