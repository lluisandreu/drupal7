<?php
/**
 * @file
 * ds_layout_settings.taxonomy_term_categories_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'taxonomy_term|categories|default';
$ds_layout->entity_type = 'taxonomy_term';
$ds_layout->bundle = 'categories';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'zf_1col';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'field_taxonomy_image',
      1 => 'description',
    ),
  ),
  'fields' => array(
    'field_taxonomy_image' => 'ds_content',
    'description' => 'ds_content',
  ),
  'classes' => array(),
  'wrappers' => array(
    'ds_content' => 'div',
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
