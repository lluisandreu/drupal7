<?php
/**
 * @file
 * ds_layout_settings.commerce_product_product_line_item.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'commerce_product|product|line_item';
$ds_layout->entity_type = 'commerce_product';
$ds_layout->bundle = 'product';
$ds_layout->view_mode = 'line_item';
$ds_layout->layout = 'panels-foundation_2col';
$ds_layout->settings = array(
  'regions' => array(
    'left' => array(
      0 => 'sku',
      1 => 'title',
    ),
    'right' => array(
      2 => 'commerce_price',
    ),
  ),
  'fields' => array(
    'sku' => 'left',
    'title' => 'left',
    'commerce_price' => 'right',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'left' => 'div',
    'right' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'layout_disable_css' => FALSE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
