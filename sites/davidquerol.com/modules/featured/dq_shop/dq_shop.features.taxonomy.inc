<?php
/**
 * @file
 * dq_shop.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dq_shop_taxonomy_default_vocabularies() {
  return array(
    'dimensions' => array(
      'name' => 'Dimensions',
      'machine_name' => 'dimensions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
