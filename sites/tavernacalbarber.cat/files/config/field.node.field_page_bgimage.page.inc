<?php
/**
 * @file
 * field.node.field_page_bgimage.page.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_page_bgimage' => array(
              'fid' => 'field_page_bgimage_fid',
              'alt' => 'field_page_bgimage_alt',
              'title' => 'field_page_bgimage_title',
              'width' => 'field_page_bgimage_width',
              'height' => 'field_page_bgimage_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_page_bgimage' => array(
              'fid' => 'field_page_bgimage_fid',
              'alt' => 'field_page_bgimage_alt',
              'title' => 'field_page_bgimage_title',
              'width' => 'field_page_bgimage_width',
              'height' => 'field_page_bgimage_height',
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
    'field_name' => 'field_page_bgimage',
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
    'label' => 'Background Image',
    'widget' => array(
      'weight' => '5',
      'type' => 'media_generic',
      'module' => 'media',
      'active' => 1,
      'settings' => array(
        'browser_plugins' => array(
          'upload' => 'upload',
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
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
      'file_extensions' => 'jpg jpeg',
      'max_filesize' => '8 MB',
      'max_resolution' => '',
      'min_resolution' => '1900x800',
      'alt_field' => 0,
      'title_field' => 0,
      'default_image' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '2',
        'settings' => array(),
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => 'Canvia la imatge de fons per aquesta pàgina',
    'field_name' => 'field_page_bgimage',
    'entity_type' => 'node',
    'bundle' => 'page',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.page' => 'content_type.page',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
  2 => 'media',
);
