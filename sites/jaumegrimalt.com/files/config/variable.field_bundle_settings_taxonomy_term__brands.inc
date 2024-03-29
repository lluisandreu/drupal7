<?php
/**
 * @file
 * variable.field_bundle_settings_taxonomy_term__brands.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_taxonomy_term__brands',
  'content' => array(
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
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
