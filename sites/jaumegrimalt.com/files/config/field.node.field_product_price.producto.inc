<?php
/**
 * @file
 * field.node.field_product_price.producto.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
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
            'field_data_field_product_price' => array(
              'value' => 'field_product_price_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_product_price' => array(
              'value' => 'field_product_price_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_product_price',
    'type' => 'number_integer',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Precio',
    'widget' => array(
      'weight' => '2',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '€',
      'user_register_form' => FALSE,
      'entity_translation_sync' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'number_integer',
        'weight' => '2',
        'settings' => array(
          'thousand_separator' => '',
          'prefix_suffix' => 1,
          'decimal_separator' => '.',
          'scale' => 0,
        ),
        'module' => 'number',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'number_integer',
        'weight' => '2',
        'settings' => array(
          'thousand_separator' => '.',
          'prefix_suffix' => 1,
          'decimal_separator' => '.',
          'scale' => 0,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_product_price',
    'entity_type' => 'node',
    'bundle' => 'producto',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.producto' => 'content_type.producto',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
