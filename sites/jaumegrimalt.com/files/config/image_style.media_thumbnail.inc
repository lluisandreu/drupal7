<?php
/**
 * @file
 * image_style.media_thumbnail.inc
 */

$api = '2.0.0';

$data = array(
  'label' => 'Media thumbnail (100x100)',
  'effects' => array(
    0 => array(
      'label' => 'Escalar y recortar',
      'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
      'effect callback' => 'image_scale_and_crop_effect',
      'dimensions callback' => 'image_resize_dimensions',
      'form callback' => 'image_resize_form',
      'summary theme' => 'image_resize_summary',
      'module' => 'image',
      'name' => 'image_scale_and_crop',
      'data' => array(
        'width' => 100,
        'height' => 100,
      ),
      'weight' => 0,
    ),
  ),
  'name' => 'media_thumbnail',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);
