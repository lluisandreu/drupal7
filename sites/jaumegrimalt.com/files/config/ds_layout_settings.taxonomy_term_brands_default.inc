<?php
/**
 * @file
 * ds_layout_settings.taxonomy_term_brands_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'taxonomy_term|brands|default';
$ds_layout->entity_type = 'taxonomy_term';
$ds_layout->bundle = 'brands';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'panels-foundation_1col';
$ds_layout->settings = array(
  'regions' => array(
    'middle' => array(
      0 => 'field_taxonomy_image',
      1 => 'title',
    ),
  ),
  'fields' => array(
    'field_taxonomy_image' => 'middle',
    'title' => 'middle',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'middle' => 'div',
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
