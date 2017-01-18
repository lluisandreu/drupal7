<?php
/**
 * @file
 * ths_products.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function ths_products_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-field_product_brand',
  'save_lineage'    => 0,
  'enforce_deepest' => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
    'sort'      => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 0,
  ),
  'entity_count' => array(
    'enabled' => 0,
    'require_entity' => 0,
    'settings' => array(
      'count_children' => 0,
      'entity_types' => array(
        'node' => array(
          'count_node' => array(
            'banner' => '0',
            'page' => '0',
            'front' => '0',
            'producto' => '0',
            'webform' => '0',
          ),
        ),
      ),
    ),
  ),
);

$configs['taxonomy-field_product_brand'] = $config;
$config = array(
  'config_id'       => 'taxonomy-field_product_category',
  'save_lineage'    => 0,
  'enforce_deepest' => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
    'sort'      => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 1,
  ),
  'entity_count' => array(
    'enabled' => 0,
    'require_entity' => 0,
    'settings' => array(
      'count_children' => 0,
      'entity_types' => array(
        'node' => array(
          'count_node' => array(
            'banner' => '0',
            'page' => '0',
            'front' => '0',
            'producto' => '0',
            'webform' => '0',
          ),
        ),
      ),
    ),
  ),
);

$configs['taxonomy-field_product_category'] = $config;
return $configs;
}
