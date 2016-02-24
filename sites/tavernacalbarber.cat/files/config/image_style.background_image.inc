<?php
/**
 * @file
 * image_style.background_image.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'background_image',
  'label' => 'Background Image',
  'effects' => array(
    0 => array(
      'label' => 'Scale',
      'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
      'effect callback' => 'image_scale_effect',
      'dimensions callback' => 'image_scale_dimensions',
      'form callback' => 'image_scale_form',
      'summary theme' => 'image_scale_summary',
      'module' => 'image',
      'name' => 'image_scale',
      'data' => array(
        'width' => '1900',
        'height' => '',
        'upscale' => 0,
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
        'quality' => '75',
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
