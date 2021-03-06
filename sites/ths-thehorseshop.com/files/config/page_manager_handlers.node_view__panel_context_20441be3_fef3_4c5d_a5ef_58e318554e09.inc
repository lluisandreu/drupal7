<?php
/**
 * @file
 * page_manager_handlers.node_view__panel_context_20441be3_fef3_4c5d_a5ef_58e318554e09.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_20441be3-fef3-4c5d-a5ef-58e318554e09';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Product page',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(
    0 => array(
      'identifier' => 'Taxonomy term from Node (on Node: Marca [field_product_brand])',
      'keyword' => 'taxonomy_term',
      'name' => 'entity_from_field:field_product_brand-node-taxonomy_term',
      'delta' => 0,
      'context' => 'argument_entity_id:node_1',
      'id' => 1,
    ),
  ),
  'name' => '',
  'access' => array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'producto' => 'producto',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  ),
);
$display = new panels_display();
$display->layout = 'product';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
    'left' => NULL,
    'center_' => NULL,
    'right' => NULL,
    'bottom' => NULL,
    'top' => NULL,
    'body' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'b7478133-e145-437a-8c1e-f85aa08ea163';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cb4e756f-2767-4583-9d29-0c61d64a6681';
  $pane->panel = 'body';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'cb4e756f-2767-4583-9d29-0c61d64a6681';
  $display->content['new-cb4e756f-2767-4583-9d29-0c61d64a6681'] = $pane;
  $display->panels['body'][0] = 'new-cb4e756f-2767-4583-9d29-0c61d64a6681';
  $pane = new stdClass();
  $pane->pid = 'new-64fff172-13ad-47e7-bfa7-d928b9a033f5';
  $pane->panel = 'body';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '64fff172-13ad-47e7-bfa7-d928b9a033f5';
  $display->content['new-64fff172-13ad-47e7-bfa7-d928b9a033f5'] = $pane;
  $display->panels['body'][1] = 'new-64fff172-13ad-47e7-bfa7-d928b9a033f5';
  $pane = new stdClass();
  $pane->pid = 'new-3c8bbd08-b521-4c71-9887-b8841f22af50';
  $pane->panel = 'body';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3c8bbd08-b521-4c71-9887-b8841f22af50';
  $display->content['new-3c8bbd08-b521-4c71-9887-b8841f22af50'] = $pane;
  $display->panels['body'][2] = 'new-3c8bbd08-b521-4c71-9887-b8841f22af50';
  $pane = new stdClass();
  $pane->pid = 'new-40e3c084-0e70-4201-9402-7292bb4fa07f';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'products_by_brand_in_product-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40e3c084-0e70-4201-9402-7292bb4fa07f';
  $display->content['new-40e3c084-0e70-4201-9402-7292bb4fa07f'] = $pane;
  $display->panels['bottom'][0] = 'new-40e3c084-0e70-4201-9402-7292bb4fa07f';
  $pane = new stdClass();
  $pane->pid = 'new-3ef23909-2297-4bbd-82ee-69a396ef027d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'commerce_cart-cart';
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
  $pane->uuid = '3ef23909-2297-4bbd-82ee-69a396ef027d';
  $display->content['new-3ef23909-2297-4bbd-82ee-69a396ef027d'] = $pane;
  $display->panels['left'][0] = 'new-3ef23909-2297-4bbd-82ee-69a396ef027d';
  $pane = new stdClass();
  $pane->pid = 'new-eea2ec68-0f70-4afe-bb48-918faaab6d44';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_taxonomy_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => 'content',
    ),
    'context' => 'relationship_entity_from_field:field_product_category-node-taxonomy_term_1',
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
  $pane->uuid = 'eea2ec68-0f70-4afe-bb48-918faaab6d44';
  $display->content['new-eea2ec68-0f70-4afe-bb48-918faaab6d44'] = $pane;
  $display->panels['right'][0] = 'new-eea2ec68-0f70-4afe-bb48-918faaab6d44';
  $pane = new stdClass();
  $pane->pid = 'new-47422e58-226b-4e1a-99fd-2bf7ba59763a';
  $pane->panel = 'right';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:product:commerce_price';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '47422e58-226b-4e1a-99fd-2bf7ba59763a';
  $display->content['new-47422e58-226b-4e1a-99fd-2bf7ba59763a'] = $pane;
  $display->panels['right'][1] = 'new-47422e58-226b-4e1a-99fd-2bf7ba59763a';
  $pane = new stdClass();
  $pane->pid = 'new-24ceb747-c99f-4f22-97b9-f4671bb4a28c';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_products';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'commerce_cart_add_to_cart_form',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'show_quantity' => 1,
      'default_quantity' => '1',
      'combine' => 1,
      'show_single_product_attributes' => 0,
      'line_item_type' => 'product',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '24ceb747-c99f-4f22-97b9-f4671bb4a28c';
  $display->content['new-24ceb747-c99f-4f22-97b9-f4671bb4a28c'] = $pane;
  $display->panels['right'][2] = 'new-24ceb747-c99f-4f22-97b9-f4671bb4a28c';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.products_by_brand_in_product' => 'views_view.products_by_brand_in_product',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
