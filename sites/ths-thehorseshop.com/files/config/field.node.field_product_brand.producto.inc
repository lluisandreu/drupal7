<?php
/**
 * @file
 * field.node.field_product_brand.producto.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'brands',
          'parent' => '0',
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_product_brand' => array(
              'tid' => 'field_product_brand_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_product_brand' => array(
              'tid' => 'field_product_brand_tid',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'tid' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'tid' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'field_name' => 'field_product_brand',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'tid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Marca',
    'widget' => array(
      'weight' => '43',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '3',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '13',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_link',
        'weight' => '3',
        'settings' => array(),
        'module' => 'taxonomy',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_product_brand',
    'entity_type' => 'node',
    'bundle' => 'producto',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.producto' => 'content_type.producto',
  'vocabulary.brands' => 'vocabulary.brands',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
