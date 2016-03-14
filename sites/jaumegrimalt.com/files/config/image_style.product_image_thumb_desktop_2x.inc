<?php
/**
 * @file
 * image_style.product_image_thumb_desktop_2x.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'product_image_thumb_desktop_2x',
  'label' => 'Product image thumb desktop 2x',
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
