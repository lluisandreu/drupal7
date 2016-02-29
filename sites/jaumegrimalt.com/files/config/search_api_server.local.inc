<?php
/**
 * @file
 * search_api_server.local.inc
 */

$api = '2.0.0';

$data = entity_import('search_api_server', '{
    "name" : "Local",
    "machine_name" : "local",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : { "taxonomy" : {
          "name" : {
            "table" : "search_api_db_taxonomy_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "description" : {
            "table" : "search_api_db_taxonomy_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_taxonomy",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_taxonomy_image:file" : {
            "table" : "search_api_db_taxonomy",
            "column" : "field_taxonomy_image_file",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'search_api',
);
