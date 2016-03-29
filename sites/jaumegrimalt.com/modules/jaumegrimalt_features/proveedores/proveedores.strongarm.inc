<?php
/**
 * @file
 * proveedores.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function proveedores_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__brands';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomy_teaser' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '1',
        ),
        'language' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'taxonomy_teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'language' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'taxonomy_teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__brands'] = $strongarm;

  return $export;
}
