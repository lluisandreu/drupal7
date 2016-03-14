<?php
/**
 * @file
 * picture_mapping.product_thumb.inc
 */

$api = '2.0.0';

$data = $picture_mapping = new PictureMapping();
$picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
$picture_mapping->api_version = 2;
$picture_mapping->label = 'Product thumb';
$picture_mapping->machine_name = 'product_thumb';
$picture_mapping->breakpoint_group = 'foundation';
$picture_mapping->mapping = array(
  'custom.user.mobile' => array(
    '1x' => array(
      'mapping_type' => 'image_style',
      'image_style' => 'product_image_thumb_mobile',
    ),
    '2x' => array(
      'mapping_type' => 'image_style',
      'image_style' => 'product_image_thumb_mobile',
    ),
  ),
  'custom.user.desktop' => array(
    '1x' => array(
      'mapping_type' => 'image_style',
      'image_style' => 'product_image_thumb_desktop',
    ),
    '2x' => array(
      'mapping_type' => 'image_style',
      'image_style' => 'product_image_thumb_desktop_2x',
    ),
  ),
  'custom.user.phablet' => array(
    '1x' => array(
      'mapping_type' => 'image_style',
      'image_style' => 'product_image_thumb_desktop',
    ),
    '2x' => array(
      'mapping_type' => 'image_style',
      'image_style' => 'product_image_thumb_desktop_2x',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'picture',
);
