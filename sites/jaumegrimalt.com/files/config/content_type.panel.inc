<?php
/**
 * @file
 * content_type.panel.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'panel',
  'name' => 'Panel',
  'description' => 'A panel layout broken up into rows and columns.',
  'has_title' => 1,
  'title_label' => 'Title',
  'base' => 'panels_node_hook',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'permission.create_panel_content' => 'permission.create_panel_content',
  'permission.edit_own_panel_content' => 'permission.edit_own_panel_content',
  'permission.edit_any_panel_content' => 'permission.edit_any_panel_content',
  'permission.delete_own_panel_content' => 'permission.delete_own_panel_content',
  'permission.delete_any_panel_content' => 'permission.delete_any_panel_content',
);

$modules = array(
  0 => 'panels_node_hook',
);
