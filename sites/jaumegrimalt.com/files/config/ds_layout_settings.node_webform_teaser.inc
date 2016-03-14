<?php
/**
 * @file
 * ds_layout_settings.node_webform_teaser.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|webform|teaser';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'webform';
$ds_layout->view_mode = 'teaser';
$ds_layout->layout = 'ds_reset';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'field_body',
      1 => 'webform',
    ),
  ),
  'fields' => array(
    'field_body' => 'ds_content',
    'webform' => 'ds_content',
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
