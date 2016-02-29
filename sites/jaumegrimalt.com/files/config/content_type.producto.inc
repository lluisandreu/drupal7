<?php
/**
 * @file
 * content_type.producto.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'producto',
  'name' => 'Producto',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Título del producto',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__producto' => 'variable.field_bundle_settings_node__producto',
  'variable.language_content_type_producto' => 'variable.language_content_type_producto',
  'variable.node_options_producto' => 'variable.node_options_producto',
  'variable.node_preview_producto' => 'variable.node_preview_producto',
  'variable.node_submitted_producto' => 'variable.node_submitted_producto',
);

$optional = array(
  'field.node.body.producto' => 'field.node.body.producto',
  'field.node.field_image.producto' => 'field.node.field_image.producto',
  'field.node.field_product_price.producto' => 'field.node.field_product_price.producto',
  'permission.create_producto_content' => 'permission.create_producto_content',
  'permission.edit_own_producto_content' => 'permission.edit_own_producto_content',
  'permission.edit_any_producto_content' => 'permission.edit_any_producto_content',
  'permission.delete_own_producto_content' => 'permission.delete_own_producto_content',
  'permission.delete_any_producto_content' => 'permission.delete_any_producto_content',
);

$modules = array(
  0 => 'node',
);
