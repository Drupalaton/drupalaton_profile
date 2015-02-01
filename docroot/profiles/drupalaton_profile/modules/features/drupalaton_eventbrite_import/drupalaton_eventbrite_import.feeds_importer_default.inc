<?php
/**
 * @file
 * drupalaton_eventbrite_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function drupalaton_eventbrite_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'eventbrite_individual_sponsor_user';
  $feeds_importer->config = array(
    'name' => 'eventbrite individual sponsor user',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserExtendedProcessor',
      'config' => array(
        'roles' => array(
          5 => '5',
          6 => '6',
          3 => 0,
          4 => 0,
          7 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'First Name',
            'target' => 'field_profile_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last Name',
            'target' => 'field_profile_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Gender',
            'target' => 'field_profile_gender',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Company',
            'target' => 'field_profile_organization',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Job Title',
            'target' => 'field_profile_job_title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Tshirt size',
            'target' => 'field_profile_tshirt',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['eventbrite_individual_sponsor_user'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'eventbrite_user';
  $feeds_importer->config = array(
    'name' => 'eventbrite regular user',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserExtendedProcessor',
      'config' => array(
        'roles' => array(
          5 => '5',
          3 => 0,
          4 => 0,
          7 => 0,
          6 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'First Name',
            'target' => 'field_profile_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last Name',
            'target' => 'field_profile_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Gender',
            'target' => 'field_profile_gender',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Company',
            'target' => 'field_profile_organization',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Job Title',
            'target' => 'field_profile_job_title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Tshirt size',
            'target' => 'field_profile_tshirt',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['eventbrite_user'] = $feeds_importer;

  return $export;
}
