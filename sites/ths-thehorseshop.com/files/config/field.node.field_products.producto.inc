<?php
/**
 * @file
 * field.node.field_products.producto.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'options_list_limit' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_products' => array(
              'product_id' => 'field_products_product_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_products' => array(
              'product_id' => 'field_products_product_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'product_id' => array(
        'table' => 'commerce_product',
        'columns' => array(
          'product_id' => 'product_id',
        ),
      ),
    ),
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'field_name' => 'field_products',
    'type' => 'commerce_product_reference',
    'module' => 'commerce_product_reference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'product_id' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Productos y variantes',
    'widget' => array(
      'weight' => '7',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'field_injection' => 1,
      'referenceable_types' => array(
        'product' => 'product',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'commerce_cart_add_to_cart_form',
        'settings' => array(
          'show_quantity' => FALSE,
          'default_quantity' => 1,
          'combine' => TRUE,
          'show_single_product_attributes' => FALSE,
          'line_item_type' => 'product',
        ),
        'module' => 'commerce_cart',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '14',
        'settings' => array(),
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_products',
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
  1 => 'commerce_product_reference',
  2 => 'options',
);
