<?php
/**
 * @file
 * ds_field_settings.taxonomy_term_product_categories_default.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'taxonomy_term|product_categories|default';
$ds_fieldsetting->entity_type = 'taxonomy_term';
$ds_fieldsetting->bundle = 'product_categories';
$ds_fieldsetting->view_mode = 'default';
$ds_fieldsetting->settings = array(
  'title' => array(
    'weight' => '1',
    'label' => 'hidden',
    'format' => 'default',
    'formatter_settings' => array(
      'link' => '0',
      'wrapper' => 'h3',
      'class' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
