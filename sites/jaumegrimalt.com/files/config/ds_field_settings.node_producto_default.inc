<?php
/**
 * @file
 * ds_field_settings.node_producto_default.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|producto|default';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'producto';
$ds_fieldsetting->view_mode = 'default';
$ds_fieldsetting->settings = array(
  'field_product_price' => array(
    'formatter_settings' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'h4',
      ),
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
