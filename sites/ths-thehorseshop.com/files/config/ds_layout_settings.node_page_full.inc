<?php
/**
 * @file
 * ds_layout_settings.node_page_full.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|page|full';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'page';
$ds_layout->view_mode = 'full';
$ds_layout->layout = 'ds_reset';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'body',
    ),
  ),
  'fields' => array(
    'body' => 'ds_content',
  ),
  'classes' => array(),
  'wrappers' => array(),
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
