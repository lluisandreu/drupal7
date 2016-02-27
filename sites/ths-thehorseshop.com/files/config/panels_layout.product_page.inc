<?php
/**
 * @file
 * panels_layout.product_page.inc
 */

$api = '2.0.0';

$data = $layout = new stdClass();
$layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
$layout->api_version = 1;
$layout->name = 'product_page';
$layout->admin_title = 'Product page';
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
    ),
    'main' => array(
      'type' => 'column',
      'width' => 100,
      'width_type' => '%',
      'children' => array(
        0 => 'main-row',
        1 => 1,
        2 => 2,
      ),
      'parent' => 'canvas',
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
      'title' => 'Header',
      'width' => 100,
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => 'column',
      'hide_empty' => 1,
    ),
    1 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'left',
        1 => 'center_',
        2 => 'right',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 1,
    ),
    'left' => array(
      'type' => 'region',
      'title' => 'Left',
      'width' => '25.038491530844308',
      'width_type' => '%',
      'parent' => '1',
      'class' => 'medium-3 columns',
      'hide_empty' => 1,
    ),
    'center_' => array(
      'type' => 'region',
      'title' => 'Center',
      'width' => '49.964590459664876',
      'width_type' => '%',
      'parent' => '1',
      'class' => 'medium-6 columns',
      'hide_empty' => 1,
    ),
    'right' => array(
      'type' => 'region',
      'title' => 'Right',
      'width' => '24.996918009490813',
      'width_type' => '%',
      'parent' => '1',
      'class' => 'medium-3 columns',
      'hide_empty' => 1,
    ),
    2 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'bottom',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 1,
    ),
    'bottom' => array(
      'type' => 'region',
      'title' => 'Bottom',
      'width' => 100,
      'width_type' => '%',
      'parent' => '2',
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
