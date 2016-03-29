<?php
/**
 * @file
 * proveedores.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function proveedores_taxonomy_default_vocabularies() {
  return array(
    'brands' => array(
      'name' => 'Proveedores',
      'machine_name' => 'brands',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
