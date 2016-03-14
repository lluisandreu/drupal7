<?php
/**
 * @file
 * image_style.thumbnail.inc
 */

$api = '2.0.0';

$data = array(
  'label' => 'Thumbnail (100x100)',
  'effects' => array(
    0 => array(
      'label' => 'Escala',
      'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
      'effect callback' => 'image_scale_effect',
      'dimensions callback' => 'image_scale_dimensions',
      'form callback' => 'image_scale_form',
      'summary theme' => 'image_scale_summary',
      'module' => 'image',
      'name' => 'image_scale',
      'data' => array(
        'width' => 100,
        'height' => 100,
        'upscale' => 1,
      ),
      'weight' => 0,
    ),
  ),
  'name' => 'thumbnail',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
