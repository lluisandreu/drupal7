<?php
/**
 * @file
 * file_type.video.inc
 */

$api = '2.0.0';

$data = $file_type = new stdClass();
$file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
$file_type->api_version = 1;
$file_type->type = 'video';
$file_type->label = 'Video';
$file_type->description = 'A <em>Video</em> file is a moving visual recording.';
$file_type->mimetypes = array(
  0 => 'video/*',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'file_entity',
);
