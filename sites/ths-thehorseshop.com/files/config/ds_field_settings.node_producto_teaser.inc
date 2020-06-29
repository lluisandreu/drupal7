<?php
/**
 * @file
 * ds_field_settings.node_producto_teaser.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|producto|teaser';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'producto';
$ds_fieldsetting->view_mode = 'teaser';
$ds_fieldsetting->settings = array(
  'title' => array(
    'weight' => '1',
    'label' => 'hidden',
    'format' => 'default',
    'formatter_settings' => array(
      'link' => '1',
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
