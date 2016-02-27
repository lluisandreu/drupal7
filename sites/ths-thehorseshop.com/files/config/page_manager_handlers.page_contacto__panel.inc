<?php
/**
 * @file
 * page_manager_handlers.page_contacto__panel.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_contacto__panel';
$handler->task = 'page';
$handler->subtask = 'contacto';
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
$display->layout = 'foundation_2col_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Contacto y localización';
$display->uuid = 'b3ef0284-60b4-4500-b6c2-3cec52979733';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3ec2e2f8-ee92-475c-a6a2-416f5af5c5b2';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '33',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3ec2e2f8-ee92-475c-a6a2-416f5af5c5b2';
  $display->content['new-3ec2e2f8-ee92-475c-a6a2-416f5af5c5b2'] = $pane;
  $display->panels['left'][0] = 'new-3ec2e2f8-ee92-475c-a6a2-416f5af5c5b2';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-3ec2e2f8-ee92-475c-a6a2-416f5af5c5b2';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
