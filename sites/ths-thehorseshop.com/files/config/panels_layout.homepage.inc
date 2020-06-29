<?php
/**
 * @file
 * panels_layout.homepage.inc
 */

$api = '2.0.0';

$data = $layout = new stdClass();
$layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
$layout->api_version = 1;
$layout->name = 'homepage';
$layout->admin_title = 'Homepage';
$layout->admin_description = '';
$layout->category = 'THS';
$layout->plugin = 'flexible';
$layout->settings = array(
  'items' => array(
    'canvas' => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 'main',
      ),
      'parent' => NULL,
      'class' => '',
      'column_class' => '',
      'row_class' => '',
      'region_class' => '',
      'no_scale' => FALSE,
      'fixed_width' => '',
      'column_separation' => '',
      'region_separation' => '',
      'row_separation' => '',
      'hide_empty' => 0,
    ),
    'main' => array(
      'type' => 'column',
      'width' => 100,
      'width_type' => '%',
      'children' => array(
        0 => 'main-row',
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'parent' => 'canvas',
      'class' => '',
      'hide_empty' => 1,
    ),
    'main-row' => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'center',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 0,
    ),
    'center' => array(
      'type' => 'region',
      'title' => 'Featured products',
      'width' => 100,
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => 'column',
      'hide_empty' => 0,
    ),
    1 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'body',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 1,
    ),
    'body' => array(
      'type' => 'region',
      'title' => 'Body',
      'width' => 100,
      'width_type' => '%',
      'parent' => '1',
      'class' => 'column',
      'hide_empty' => 1,
    ),
    2 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'brands',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 1,
    ),
    'brands' => array(
      'type' => 'region',
      'title' => 'Brands',
      'width' => 100,
      'width_type' => '%',
      'parent' => '2',
      'class' => 'column',
      'hide_empty' => 1,
    ),
    3 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'product_offers',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 0,
    ),
    'product_offers' => array(
      'type' => 'region',
      'title' => 'Product offers',
      'width' => 100,
      'width_type' => '%',
      'parent' => '3',
      'class' => 'column',
      'hide_empty' => 0,
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'panels',
);
