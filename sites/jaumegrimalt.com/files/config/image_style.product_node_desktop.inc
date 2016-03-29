<?php
/**
 * @file
 * image_style.product_node_desktop.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'product_node_desktop',
  'label' => 'Product Node Desktop',
  'effects' => array(
    0 => array(
      'label' => 'Scale and crop',
      'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
      'effect callback' => 'image_scale_and_crop_effect',
      'dimensions callback' => 'image_resize_dimensions',
      'form callback' => 'image_resize_form',
      'summary theme' => 'image_resize_summary',
      'module' => 'image',
      'name' => 'image_scale_and_crop',
      'data' => array(
        'width' => '660',
        'height' => '420',
      ),
      'weight' => '1',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
