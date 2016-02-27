<?php
/**
 * @file
 * page_manager_handlers.page_homepage__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_homepage__panel';
$handler->task = 'page';
$handler->subtask = 'homepage';
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
  'contexts' => array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '2',
      'id' => 1,
    ),
  ),
  'relationships' => array(),
  'name' => 'panel',
);
$display = new panels_display();
$display->layout = 'homepage';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
    'body' => NULL,
    'brands' => NULL,
    'product_offers' => NULL,
    'top' => NULL,
    'middle' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'f2bf0611-fb87-4095-9537-1d6487bc0327';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-11a86eeb-e201-4d3b-bc6b-172ee435faf8';
  $pane->panel = 'body';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '2',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
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
  $pane->uuid = '11a86eeb-e201-4d3b-bc6b-172ee435faf8';
  $display->content['new-11a86eeb-e201-4d3b-bc6b-172ee435faf8'] = $pane;
  $display->panels['body'][0] = 'new-11a86eeb-e201-4d3b-bc6b-172ee435faf8';
  $pane = new stdClass();
  $pane->pid = 'new-f8a037bc-4218-40b7-8cf5-d2d732a19d11';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'produc_offers_homepage-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'override_title' => 1,
    'override_title_text' => 'Ofertas recientes',
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
  $pane->uuid = 'f8a037bc-4218-40b7-8cf5-d2d732a19d11';
  $display->content['new-f8a037bc-4218-40b7-8cf5-d2d732a19d11'] = $pane;
  $display->panels['bottom'][0] = 'new-f8a037bc-4218-40b7-8cf5-d2d732a19d11';
  $pane = new stdClass();
  $pane->pid = 'new-7b9cdad8-86a7-4866-829a-d06acf6a6000';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'brands-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '0',
    'override_title' => 1,
    'override_title_text' => 'Nuestras marcas',
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
  $pane->uuid = '7b9cdad8-86a7-4866-829a-d06acf6a6000';
  $display->content['new-7b9cdad8-86a7-4866-829a-d06acf6a6000'] = $pane;
  $display->panels['middle'][0] = 'new-7b9cdad8-86a7-4866-829a-d06acf6a6000';
  $pane = new stdClass();
  $pane->pid = 'new-d799f9a6-d8b0-42a0-b62e-0d4e3723ac74';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_products-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'override_title' => 1,
    'override_title_text' => 'Productos destacados',
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
  $pane->uuid = 'd799f9a6-d8b0-42a0-b62e-0d4e3723ac74';
  $display->content['new-d799f9a6-d8b0-42a0-b62e-0d4e3723ac74'] = $pane;
  $display->panels['top'][0] = 'new-d799f9a6-d8b0-42a0-b62e-0d4e3723ac74';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.produc_offers_homepage' => 'views_view.produc_offers_homepage',
  'views_view.brands' => 'views_view.brands',
  'views_view.featured_products' => 'views_view.featured_products',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
