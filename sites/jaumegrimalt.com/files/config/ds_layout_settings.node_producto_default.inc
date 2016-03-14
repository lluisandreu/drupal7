<?php
/**
 * @file
 * ds_layout_settings.node_producto_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|producto|default';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'producto';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'ds_reset';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_product_price',
    ),
  ),
  'fields' => array(
    'body' => 'ds_content',
    'field_image' => 'ds_content',
    'field_product_price' => 'ds_content',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'ds_content' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => TRUE,
  'layout_link_attribute' => FALSE,
  'layout_link_custom' => '',
  'layout_disable_css' => FALSE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
