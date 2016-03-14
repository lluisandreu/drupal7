<?php
/**
 * @file
 * image_style.medium.inc
 */

$api = '2.0.0';

$data = array(
  'label' => 'Medium (220x220)',
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
        'width' => 220,
        'height' => 220,
        'upscale' => 1,
      ),
      'weight' => 0,
    ),
  ),
  'name' => 'medium',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
