<?php
/**
 * @file
 * content_type.banner.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'banner',
  'name' => 'Banner',
  'description' => 'Imagen banner para la galería de la página principal',
  'has_title' => '1',
  'title_label' => 'Título de banner',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__banner' => 'variable.field_bundle_settings_node__banner',
  'variable.node_options_banner' => 'variable.node_options_banner',
  'variable.node_preview_banner' => 'variable.node_preview_banner',
  'variable.node_submitted_banner' => 'variable.node_submitted_banner',
);

$optional = array(
  'field.node.field_banner_image.banner' => 'field.node.field_banner_image.banner',
  'permission.create_banner_content' => 'permission.create_banner_content',
  'permission.edit_own_banner_content' => 'permission.edit_own_banner_content',
  'permission.edit_any_banner_content' => 'permission.edit_any_banner_content',
  'permission.delete_own_banner_content' => 'permission.delete_own_banner_content',
  'permission.delete_any_banner_content' => 'permission.delete_any_banner_content',
);

$modules = array(
  0 => 'node',
);
