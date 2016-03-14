<?php
/**
 * @file
 * page_manager_handlers.page_all_products__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_all_products__panel';
$handler->task = 'page';
$handler->subtask = 'all_products';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'panel',
);
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Productos y servicios';
$display->uuid = 'da205dc4-2d3e-425e-8bb3-27d4626e26dd';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
$pane->panel = 'middle';
$pane->type = 'views_panes';
$pane->subtype = 'all_products-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 0,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = 'c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
$display->content['new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4'] = $pane;
$display->panels['middle'][0] = 'new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-c266f45a-f450-4e0e-af1e-a3cb7d49d3f4';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.all_products' => 'views_view.all_products',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
