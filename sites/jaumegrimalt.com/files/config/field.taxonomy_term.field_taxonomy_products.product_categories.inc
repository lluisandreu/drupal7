<?php
/**
 * @file
 * field.taxonomy_term.field_taxonomy_products.product_categories.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'options_list_limit' => '',
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
            'field_data_field_taxonomy_products' => array(
              'product_id' => 'field_taxonomy_products_product_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_taxonomy_products' => array(
              'product_id' => 'field_taxonomy_products_product_id',
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
    'field_name' => 'field_taxonomy_products',
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
    'label' => 'Products',
    'widget' => array(
      'weight' => '3',
      'type' => 'inline_entity_form',
      'module' => 'inline_entity_form',
      'active' => 1,
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(),
      ),
    ),
    'settings' => array(
      'field_injection' => 1,
      'referenceable_types' => array(
        'product' => 'product',
      ),
      'user_register_form' => FALSE,
      'entity_translation_sync' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'commerce_product_reference_title_link',
        'settings' => array(),
        'module' => 'commerce_product_reference',
        'weight' => 1,
      ),
      'taxonomy_teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'ds_extras_field_template' => 'theme_field',
    'default_value' => NULL,
    'field_name' => 'field_taxonomy_products',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'product_categories',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'commerce_product_reference',
  2 => 'inline_entity_form',
);
