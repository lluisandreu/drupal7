<?php
/**
 * @file
 * field.taxonomy_term.field_taxonomy_image.product_categories.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_taxonomy_image' => array(
              'fid' => 'field_taxonomy_image_fid',
              'alt' => 'field_taxonomy_image_alt',
              'title' => 'field_taxonomy_image_title',
              'width' => 'field_taxonomy_image_width',
              'height' => 'field_taxonomy_image_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_taxonomy_image' => array(
              'fid' => 'field_taxonomy_image_fid',
              'alt' => 'field_taxonomy_image_alt',
              'title' => 'field_taxonomy_image_title',
              'width' => 'field_taxonomy_image_width',
              'height' => 'field_taxonomy_image_height',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'fid' => array(
        'table' => 'file_managed',
        'columns' => array(
          'fid' => 'fid',
        ),
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'field_name' => 'field_taxonomy_image',
    'type' => 'image',
    'module' => 'image',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'fid' => array(
        'description' => 'The {file_managed}.fid being referenced in this field.',
        'type' => 'int',
        'not null' => FALSE,
        'unsigned' => TRUE,
      ),
      'alt' => array(
        'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
        'type' => 'varchar',
        'length' => 512,
        'not null' => FALSE,
      ),
      'title' => array(
        'description' => 'Image title text, for the image\'s \'title\' attribute.',
        'type' => 'varchar',
        'length' => 1024,
        'not null' => FALSE,
      ),
      'width' => array(
        'description' => 'The width of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
      'height' => array(
        'description' => 'The height of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Image',
    'widget' => array(
      'weight' => '1',
      'type' => 'media_generic',
      'module' => 'media',
      'active' => 1,
      'settings' => array(
        'browser_plugins' => array(
          'upload' => 'upload',
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
        ),
        'allowed_types' => array(
          'image' => 'image',
          'video' => 0,
          'audio' => 0,
          'document' => 0,
        ),
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '400x250',
      'alt_field' => 0,
      'title_field' => 0,
      'default_image' => '1',
      'user_register_form' => FALSE,
      'entity_translation_sync' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'picture',
        'weight' => '0',
        'settings' => array(
          'picture_mapping' => 'product_thumb',
          'fallback_image_style' => 'product_image_thumb_desktop',
          'lazyload' => 1,
          'lazyload_aspect_ratio' => 0,
          'image_link' => 'content',
          'colorbox_settings' => array(
            'colorbox_group' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_multivalue_index' => NULL,
          ),
        ),
        'module' => 'picture',
      ),
      'taxonomy_teaser' => array(
        'label' => 'hidden',
        'type' => 'picture',
        'weight' => '0',
        'settings' => array(
          'picture_mapping' => 'product_thumb',
          'fallback_image_style' => 'product_image_thumb_desktop',
          'lazyload' => 1,
          'lazyload_aspect_ratio' => 0,
          'image_link' => 'content',
          'colorbox_settings' => array(
            'colorbox_group' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_multivalue_index' => NULL,
          ),
        ),
        'module' => 'picture',
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_taxonomy_image',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'product_categories',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
  2 => 'media',
);
