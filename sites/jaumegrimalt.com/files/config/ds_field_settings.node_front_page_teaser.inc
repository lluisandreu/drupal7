<?php
/**
 * @file
 * ds_field_settings.node_front_page_teaser.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|front_page|teaser';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'front_page';
$ds_fieldsetting->view_mode = 'teaser';
$ds_fieldsetting->settings = array(
  'title' => array(
    'weight' => '0',
    'label' => 'hidden',
    'format' => 'default',
    'formatter_settings' => array(
      'link' => '0',
      'wrapper' => 'h1',
      'class' => 'page-title',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
