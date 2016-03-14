<?php
/**
 * @file
 * ds_layout_settings.node_front_page_teaser.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|front_page|teaser';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'front_page';
$ds_layout->view_mode = 'teaser';
$ds_layout->layout = 'ds_2col_stacked_fluid';
$ds_layout->settings = array(
  'regions' => array(
    'header' => array(
      0 => 'title',
    ),
    'left' => array(
      1 => 'body',
    ),
    'right' => array(
      2 => 'field_image',
    ),
  ),
  'fields' => array(
    'title' => 'header',
    'body' => 'left',
    'field_image' => 'right',
  ),
  'classes' => array(
    'layout_class' => array(),
  ),
  'wrappers' => array(
    'header' => 'div',
    'left' => 'div',
    'right' => 'div',
    'footer' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'layout_disable_css' => 1,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
