<?php
/**
 * @file
 * panels_layout.taxonomy_page.inc
 */

$api = '2.0.0';

$data = $layout = new stdClass();
$layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
$layout->api_version = 1;
$layout->name = 'taxonomy_page';
$layout->admin_title = 'Taxonomy page';
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
        0 => 'taxonomy_description',
        1 => 'taxonomy_image',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 0,
    ),
    'taxonomy_description' => array(
      'type' => 'region',
      'title' => 'Taxonomy description',
      'width' => 50,
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => 'medium-8',
      'hide_empty' => 1,
    ),
    'taxonomy_image' => array(
      'type' => 'region',
      'title' => 'Taxonomy image',
      'width' => 50,
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => 'medium-4',
      'hide_empty' => 1,
    ),
    1 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'products_in_this_taxonomy',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 0,
    ),
    'products_in_this_taxonomy' => array(
      'type' => 'region',
      'title' => 'Products in this taxonomy',
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
        0 => 'extra_content',
      ),
      'parent' => 'main',
      'class' => 'row',
      'hide_empty' => 0,
    ),
    'extra_content' => array(
      'type' => 'region',
      'title' => 'Extra content',
      'width' => 100,
      'width_type' => '%',
      'parent' => '2',
      'class' => 'column',
      'hide_empty' => 1,
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'panels',
);
