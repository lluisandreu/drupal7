<?php
/**
 * @file
 * image_style.product_image_thumb_desktop.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'product_image_thumb_desktop',
  'label' => 'Product image thumb desktop',
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
        'width' => '330',
        'height' => '210',
      ),
      'weight' => '1',
    ),
    1 => array(
      'label' => 'Quality',
      'help' => 'Definir la calidad de la imagen para las manipulaciones JPEG. Rango de 0 a 100. Los valores más altos generan imágenes de mejor calidad pero archivos más grandes.',
      'effect callback' => '_image_style_quality_apply',
      'form callback' => 'image_style_quality_style_form',
      'dimensions passthrough' => TRUE,
      'summary theme' => 'image_style_quality_summary',
      'module' => 'image_style_quality',
      'name' => 'image_style_quality',
      'data' => array(
        'quality' => '95',
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
