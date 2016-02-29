<?php
/**
 * @file
 * image_style.product_image_thumb_mobile.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'product_image_thumb_mobile',
  'label' => 'Product image thumb mobile',
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
        'width' => '600',
        'height' => '380',
      ),
      'weight' => '1',
    ),
    1 => array(
      'label' => 'Quality',
      'help' => 'Define the image quality for JPEG manipulations. Ranges from 0 to 100. Higher values mean better image quality but bigger files.',
      'effect callback' => '_image_style_quality_apply',
      'form callback' => 'image_style_quality_style_form',
      'dimensions passthrough' => TRUE,
      'summary theme' => 'image_style_quality_summary',
      'module' => 'image_style_quality',
      'name' => 'image_style_quality',
      'data' => array(
        'quality' => '80',
      ),
      'weight' => '2',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
  1 => 'image_style_quality',
);
