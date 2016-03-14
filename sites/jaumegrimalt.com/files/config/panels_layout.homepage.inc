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
$layout->category = 'Grimalt';
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
      'class' => '',
      'hide_empty' => 0,
    ),
    'main-row' => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'center',
      ),
      'parent' => 'main',
      'class' => 'hr-separator',
      'hide_empty' => 0,
    ),
    'center' => array(
      'type' => 'region',
      'title' => 'Featured products',
      'width' => 100,
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => '',
      'hide_empty' => 0,
    ),
    1 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'about',
      ),
      'parent' => 'main',
      'class' => 'hr-separator',
      'hide_empty' => 0,
    ),
    'about' => array(
      'type' => 'region',
      'title' => 'About',
      'width' => 100,
      'width_type' => '%',
      'parent' => '1',
      'class' => '',
      'hide_empty' => 0,
    ),
    2 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'offers',
      ),
      'parent' => 'main',
      'class' => '',
      'hide_empty' => 0,
    ),
    'offers' => array(
      'type' => 'region',
      'title' => 'Offers',
      'width' => 100,
      'width_type' => '%',
      'parent' => '2',
      'class' => '',
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
